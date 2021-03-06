/*
  June 2012

  BaseFlightPlus Rev -

  An Open Source STM32 Based Multicopter

  Includes code and/or ideas from:

  1)AeroQuad
  2)BaseFlight
  3)CH Robotics
  4)MultiWii
  5)S.O.H. Madgwick

  Designed to run on Naze32 Flight Control Board

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

///////////////////////////////////////////////////////////////////////////////

// PID Variables
typedef struct PIDdata {
  float   P, I, D;
  float   iTerm;
  float   windupGuard;
  float   lastError;
  float   dTerm1;
  float   dTerm2;
  uint8_t type;
} PIDdata_t;

extern uint8_t holdIntegrators;

///////////////////////////////////////////////////////////////////////////////

void initPID(void);

///////////////////////////////////////////////////////////////////////////////

float updatePID(float command, float state, float deltaT, uint8_t iHold, struct PIDdata *PIDparameters);

///////////////////////////////////////////////////////////////////////////////

void setIntegralError(uint8_t IDPid, float value);

///////////////////////////////////////////////////////////////////////////////

void zeroIntegralError(void);

///////////////////////////////////////////////////////////////////////////////

void zeroLastError(void);

///////////////////////////////////////////////////////////////////////////////



