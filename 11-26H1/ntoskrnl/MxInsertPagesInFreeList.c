/*
 * XREFs of MxInsertPagesInFreeList @ 0x140CFDB00
 * Callers:
 *     MxCreateDescriptorPfns @ 0x140CFBB94 (MxCreateDescriptorPfns.c)
 *     MxInsertFreeZeroPages @ 0x140CFD9C8 (MxInsertFreeZeroPages.c)
 *     MxSwitchToPfns @ 0x140CFE6E0 (MxSwitchToPfns.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MxFreeEmptyBootPageTable @ 0x140CFCE24 (MxFreeEmptyBootPageTable.c)
 *     MxInsertFreePages @ 0x140CFD680 (MxInsertFreePages.c)
 */

void __fastcall MxInsertPagesInFreeList(__int64 a1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // rbx
  int v3; // eax
  int v4; // r15d
  BOOL v5; // r12d
  __int64 v6; // rsi
  ULONG_PTR v7; // rbp
  int v8; // eax
  ULONG_PTR v9; // r14

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    goto LABEL_4;
  if ( --v2 )
  {
    v1 = 1LL;
LABEL_4:
    if ( (*(_DWORD *)(a1 + 28) & 1) == 0 || (v3 = *(_DWORD *)(a1 + 24), v3 == 2) || (v4 = 1, v3 == 24) )
      v4 = 0;
    v5 = *(_DWORD *)(a1 + 24) != 24;
    v6 = 48 * v1 - 0x220000000000LL;
    v7 = *(int *)(a1 + 24);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v2 )
          return;
        if ( v4 )
          break;
        v9 = v2;
LABEL_19:
        MxInsertFreePages(v1, v9, v5 + 513, v4);
        v1 += v9;
        v2 -= v9;
        v6 += 48 * v9;
      }
      v8 = *(_DWORD *)(v6 + 32);
      if ( (_WORD)v8 == 1 )
        break;
      if ( !(_WORD)v8 )
        goto LABEL_15;
      ++v1;
      v6 += 48LL;
      --v2;
    }
    if ( v7 == 2 || v7 == 24 )
      KeBugCheckEx(0x1Au, 0x3030319uLL, v1, v7, 0LL);
    *(_QWORD *)(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    MxFreeEmptyBootPageTable(*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFLL);
    *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
    *(_DWORD *)(v6 + 32) &= 0xFFFF0000;
LABEL_15:
    v9 = 1LL;
    goto LABEL_19;
  }
}
