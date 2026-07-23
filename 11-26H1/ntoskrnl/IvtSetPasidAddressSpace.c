/*
 * XREFs of IvtSetPasidAddressSpace @ 0x1405AA240
 * Callers:
 *     <none>
 * Callees:
 *     IvtBuildScalableModePasidTableS1Entry @ 0x1405247C8 (IvtBuildScalableModePasidTableS1Entry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     IvtEnsureNoPendingFaults @ 0x1405A8AE4 (IvtEnsureNoPendingFaults.c)
 *     IvtInvalidateScalableModePasidCache @ 0x1405A9B78 (IvtInvalidateScalableModePasidCache.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall IvtSetPasidAddressSpace(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  unsigned __int64 v9; // r12
  char v10; // di
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  ULONG_PTR *v15; // rax
  unsigned __int64 v17; // rbx
  unsigned int v18; // eax
  int BugCheckParameter4; // [rsp+20h] [rbp-118h]
  int v21; // [rsp+40h] [rbp-F8h]
  __int64 v22; // [rsp+48h] [rbp-F0h]
  __int64 v23; // [rsp+50h] [rbp-E8h]
  __int128 v25; // [rsp+60h] [rbp-D8h]
  unsigned __int64 v26[8]; // [rsp+A0h] [rbp-98h] BYREF

  memset_0(v26, 0, sizeof(v26));
  v23 = *(_QWORD *)(a2 + 80);
  v9 = (unsigned __int64)(a4 & 0x3F) << 6;
  v10 = 0;
  v11 = *(unsigned int *)(v23 + 44);
  v22 = (a4 >> 6) & 0x3FFF;
  v12 = 0LL;
  v21 = *(_DWORD *)(v23 + 44);
  v13 = *(_QWORD *)(v23 + 8 * v22 + 64);
  v25 = *(_OWORD *)(v9 + v13);
  if ( a3 )
  {
    v12 = *(_QWORD *)(a3 + 24);
    v10 = (*(_BYTE *)(a3 + 16) & 8) != 0;
  }
  v14 = v12 >> 12;
  if ( (v25 & 1) != 0 && *(_QWORD *)(v9 + v13 + 16) >> 12 == v14 && WORD4(v25) == v11 )
  {
    if ( a5 )
      *a5 = 0;
  }
  else
  {
    if ( !v14 )
    {
      v15 = (ULONG_PTR *)IvtEnsureNoPendingFaults(a1, a4);
      if ( v15 )
        KeBugCheckEx(0x159u, 0x1000uLL, (ULONG_PTR)v15, *v15, v15[1]);
      LOWORD(v11) = v21;
    }
    IvtBuildScalableModePasidTableS1Entry((__int64)a1, 1, v14, v10, BugCheckParameter4, 0, v11, v26);
    _RCX = v9 + *(_QWORD *)(v23 + 8 * v22 + 64);
    __asm { movdir64b rcx, zmmword ptr [rsp+138h+var_98] }
    if ( (v25 & 1) != 0 )
    {
      v17 = ((unsigned __int64)v25 >> 6) & 7;
      if ( (_DWORD)v17 == 2 || (v18 = 0x10000, (_DWORD)v17 == 1) )
        v18 = WORD4(v25);
      IvtInvalidateScalableModePasidCache((__int64)a1, **(_DWORD **)(a2 + 72), v18, a4, 0, 0, 0);
    }
    if ( a5 )
      *a5 = 1;
  }
  return 0LL;
}
