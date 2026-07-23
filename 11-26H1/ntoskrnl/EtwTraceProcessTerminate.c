/*
 * XREFs of EtwTraceProcessTerminate @ 0x1404C375C
 * Callers:
 *     PspTerminateProcess @ 0x14094A8D8 (PspTerminateProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceProcessTerminate(__int64 a1)
{
  int v2; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v3[2]; // [rsp+38h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a1 + 464);
  v3[1] = 4LL;
  v3[0] = &v2;
  return EtwTraceKernelEvent((int)v3, 1, 1u, 779, 6297858);
}
