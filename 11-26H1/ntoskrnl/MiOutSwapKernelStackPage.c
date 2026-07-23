/*
 * XREFs of MiOutSwapKernelStackPage @ 0x1403FE32C
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 * Callees:
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiOutSwapWorkingSet @ 0x1403FE6E0 (MiOutSwapWorkingSet.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiOutSwapKernelStackPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  void *v6; // rax
  __int64 v7; // rbx
  void *v8; // rbp
  __int128 v9; // xmm0
  __int64 result; // rax
  _QWORD v11[5]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v12; // [rsp+58h] [rbp-B0h]

  v5 = a3 << 25 >> 16;
  v6 = MiVaToFlushVm(v5);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = v6;
  if ( !v7 )
    return 3221225643LL;
  if ( *(_QWORD *)(v7 + 8) <= *(_QWORD *)(v7 + 16) || !*(_DWORD *)(a1 + 72) )
    return 3221225993LL;
  memset_0(v11, 0, 0x98uLL);
  v9 = *(_OWORD *)(a1 + 64);
  v11[0] = v7;
  v11[2] = v8;
  v11[3] = a2;
  v12 = v9;
  MiOutSwapWorkingSet((_DWORD)v8, 0, v5, v5, (__int64)v11);
  result = 0LL;
  *(_OWORD *)(a1 + 64) = v12;
  return result;
}
