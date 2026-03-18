/*
 * XREFs of RIMAbConfigureDeviceArbitration @ 0x14004853C
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400477E4 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMAbConfigureDeviceArbitration(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // ebx
  int v6; // r8d
  __int64 result; // rax

  v5 = *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 332);
  if ( v5 < 4 )
    *(_DWORD *)(W32GetUserSessionState(v4, v3, v6) + 244) = v5;
  result = W32GetUserSessionState(v4, v3, v6);
  if ( *(_DWORD *)(result + 244) >= 4u )
    return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1002LL);
  return result;
}
