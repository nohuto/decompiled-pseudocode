/*
 * XREFs of MiClearContainingMapping @ 0x14047DBC0
 * Callers:
 *     MiDeleteTopLevelPage @ 0x14047DA4C (MiDeleteTopLevelPage.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 */

unsigned __int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
  result = 0x8000000000000000uLL;
  if ( (*(_QWORD *)(48 * v2 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL) == ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL)
                                                                          - 0x98000000000LL )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000);
    v6 = v5;
    v7 = (v4 >> 3) & 0x1FF;
    v8 = *(_QWORD *)(v5 + 8 * v7);
    if ( (v8 & 1) != 0 )
      *(_QWORD *)(v5 + 8 * v7) = v8 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  }
  return result;
}
