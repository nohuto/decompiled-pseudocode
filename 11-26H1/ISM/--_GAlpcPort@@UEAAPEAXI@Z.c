/*
 * XREFs of ??_GAlpcPort@@UEAAPEAXI@Z @ 0x18010F9B0
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z @ 0x1800750D0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXPEAPEAVSipcPort@@@Z.c)
 *     ??1?$unique_ptr@VAlpcPort@@U?$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ @ 0x1800995C8 (--1-$unique_ptr@VAlpcPort@@U-$default_delete@VAlpcPort@@@utl@@@utl@@QEAA@XZ.c)
 * Callees:
 *     ??1AlpcPort@@UEAA@XZ @ 0x180080C88 (--1AlpcPort@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009B2C4 (--3@YAXPEAX@Z.c)
 */

AlpcPort *__fastcall AlpcPort::`scalar deleting destructor'(AlpcPort *this, char a2)
{
  AlpcPort::~AlpcPort(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
