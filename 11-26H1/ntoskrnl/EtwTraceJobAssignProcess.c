/*
 * XREFs of EtwTraceJobAssignProcess @ 0x140AC7F7C
 * Callers:
 *     PspAssignProcessToJobList @ 0x140AC7750 (PspAssignProcessToJobList.c)
 *     NtAssignProcessToJobObject @ 0x140AC7800 (NtAssignProcessToJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceJobAssignProcess(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  __int128 v4; // xmm0
  _QWORD v6[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v7; // [rsp+40h] [rbp-30h] BYREF
  int v8; // [rsp+50h] [rbp-20h]
  int v9; // [rsp+54h] [rbp-1Ch]
  int v10; // [rsp+58h] [rbp-18h]

  v7 = 0uLL;
  v3 = 0;
  if ( a2 )
    v3 = *(_DWORD *)(a2 + 464);
  if ( a1 )
  {
    v4 = *(_OWORD *)(a1 + 1472);
    v8 = *(_DWORD *)(a1 + 1468);
    v7 = v4;
  }
  else
  {
    v8 = 0;
  }
  v9 = v3;
  v10 = a3;
  v6[0] = &v7;
  v6[1] = 28LL;
  return EtwTraceKernelEvent((int)v6, 1, 0x80000u, 1827, 6297860);
}
