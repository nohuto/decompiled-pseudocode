/*
 * XREFs of EtwTraceDebuggerEvent @ 0x1404E5B4C
 * Callers:
 *     DbgkpSendApiMessage @ 0x1409534DC (DbgkpSendApiMessage.c)
 *     DbgkForwardException @ 0x1409535F0 (DbgkForwardException.c)
 *     DbgkExitThread @ 0x14095559C (DbgkExitThread.c)
 *     NtDebugContinue @ 0x140987410 (NtDebugContinue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402DAC90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceDebuggerEvent(__int64 a1, __int64 a2, int a3)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF

  v4[0] = *(_DWORD *)(a1 + 464);
  v4[1] = *(_DWORD *)(a2 + 1296);
  v4[2] = a3;
  v5[0] = v4;
  v5[1] = 12LL;
  return EtwTraceKernelEvent((int)v5, 1, 0x400000u, 880, 5249538);
}
