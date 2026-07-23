/*
 * XREFs of MiCachedPagesMakeHot @ 0x1406FA5F0
 * Callers:
 *     MiCachedPageCandidate @ 0x1402A8F70 (MiCachedPageCandidate.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiReleaseCachedPageLocks @ 0x1402CBF70 (MiReleaseCachedPageLocks.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 *     MiMakeTransitionHeatBatch @ 0x140503EE0 (MiMakeTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14050BF40 (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x14050CEC0 (MiFreeTransitionPageHeatList.c)
 */

unsigned int *__fastcall MiCachedPagesMakeHot(__int64 a1, __int64 a2)
{
  unsigned int *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _SLIST_ENTRY *v7; // rbx
  unsigned __int64 v8; // rdx

  result = MiMakeTransitionHeatBatch(a2, 0LL, ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 176)) >> 3) + 1);
  v7 = (_SLIST_ENTRY *)result;
  if ( result )
  {
    if ( a2 )
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseCachedPageLocks(a1, v5, v6);
    if ( v7 == (_SLIST_ENTRY *)-1LL )
    {
      MiReplenishTransitionPageHeatList();
    }
    else
    {
      MiIssuePageHeatList(v7, v8);
      MiFreeTransitionPageHeatList(v7);
    }
    MiAcquireCachedPageLocks(a1, 0LL);
    return (unsigned int *)3221226029LL;
  }
  return result;
}
