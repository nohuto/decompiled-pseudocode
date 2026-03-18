/*
 * XREFs of ?Activate@RIMDeadzone@@QEAAJH@Z @ 0x1401ED9D8
 * Callers:
 *     RIMActivatePointerDeviceDeadzone @ 0x1401DD520 (RIMActivatePointerDeviceDeadzone.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDeadzone::Activate(RIMDeadzone *this, int a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 506);
  if ( *((_DWORD *)this + 4) )
    *((_DWORD *)this + 10) = a2;
  else
    return (unsigned int)-1073741823;
  return v2;
}
