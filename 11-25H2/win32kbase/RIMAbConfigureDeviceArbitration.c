/*
 * XREFs of RIMAbConfigureDeviceArbitration @ 0x1401DD4A8
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D6900 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMAbConfigureDeviceArbitration(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v4 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 332);
  if ( v4 < 4 )
    *(_DWORD *)(W32GetUserSessionState(v3, v2) + 244) = v4;
  if ( *(_DWORD *)(W32GetUserSessionState(v3, v2) + 244) >= 4u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1002);
}
