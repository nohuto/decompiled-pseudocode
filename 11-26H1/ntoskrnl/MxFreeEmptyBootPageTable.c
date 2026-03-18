/*
 * XREFs of MxFreeEmptyBootPageTable @ 0x140CF6AA4
 * Callers:
 *     MxInsertPagesInFreeList @ 0x140CF7780 (MxInsertPagesInFreeList.c)
 * Callees:
 *     MiLockAndInsertPageInFreeList @ 0x140293098 (MiLockAndInsertPageInFreeList.c)
 *     MiDecreaseUsedPtesInPfn @ 0x140309000 (MiDecreaseUsedPtesInPfn.c)
 *     MiGetLeafVa @ 0x140326060 (MiGetLeafVa.c)
 */

unsigned __int64 __fastcall MxFreeEmptyBootPageTable(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rdi

  v1 = a1;
  v2 = 48 * a1 - 0x220000000000LL;
  v3 = *(_QWORD *)(v2 + 8);
  for ( *(_QWORD *)(v2 + 24) = (*(_QWORD *)(v2 + 24) - 1LL) ^ (*(_QWORD *)(v2 + 24) ^ (*(_QWORD *)(v2 + 24) - 1LL)) & 0xC000000000000000uLL;
        ;
        *(_QWORD *)(v2 + 24) = (*(_QWORD *)(v2 + 24) - 1LL) ^ (*(_QWORD *)(v2 + 24) ^ (*(_QWORD *)(v2 + 24) - 1LL)) & 0xC000000000000000uLL )
  {
    v6 = (_QWORD *)(v3 | 0x8000000000000000uLL);
    result = MiDecreaseUsedPtesInPfn(v2, 1uLL);
    if ( (_DWORD)result )
      break;
    result = MiGetLeafVa((unsigned __int64)v6);
    if ( result >= MiLowHalVa )
      break;
    if ( v6 == (_QWORD *)((((unsigned __int64)qword_14101EC58 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      qword_14101EC58 = 0LL;
    *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
    *(_DWORD *)(v2 + 32) &= 0xFFFF0000;
    v5 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFLL;
    *v6 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    result = MiLockAndInsertPageInFreeList(v2);
    if ( v5 == v1 )
      break;
    v1 = v5;
    v2 = 48 * v5 - 0x220000000000LL;
    v3 = *(_QWORD *)(v2 + 8);
  }
  return result;
}
