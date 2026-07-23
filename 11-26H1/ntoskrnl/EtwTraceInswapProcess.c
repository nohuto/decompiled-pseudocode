/*
 * XREFs of EtwTraceInswapProcess @ 0x1406C85C8
 * Callers:
 *     MmInSwapProcess @ 0x140485F04 (MmInSwapProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceInswapProcess(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+38h] [rbp-30h]
  int v5; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a1 + 464);
  v1 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL;
  v5 = 0;
  v3 = v1;
  v6[1] = 12LL;
  v6[0] = &v3;
  return EtwTraceKernelEvent((int)v6, 1, 0x20000800u, 803, 6297858);
}
