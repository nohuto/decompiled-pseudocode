/*
 * XREFs of MiCachedPagesMakeHot @ 0x1406F5980
 * Callers:
 *     MiCachedPageCandidate @ 0x1402A9B60 (MiCachedPageCandidate.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiReleaseCachedPageLocks @ 0x1402E9F30 (MiReleaseCachedPageLocks.c)
 *     MiIssuePageHeatList @ 0x1402F383C (MiIssuePageHeatList.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MiMakeTransitionHeatBatch @ 0x14050A470 (MiMakeTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1405124D0 (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x140513450 (MiFreeTransitionPageHeatList.c)
 */

unsigned int *__fastcall MiCachedPagesMakeHot(__int64 a1, __int64 a2)
{
  unsigned int *result; // rax
  struct _SLIST_ENTRY *v5; // rbx
  unsigned __int64 v6; // rdx

  result = MiMakeTransitionHeatBatch(a2, 0LL, ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 176)) >> 3) + 1);
  v5 = (struct _SLIST_ENTRY *)result;
  if ( result )
  {
    if ( a2 )
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseCachedPageLocks(a1);
    if ( v5 == (struct _SLIST_ENTRY *)-1LL )
    {
      MiReplenishTransitionPageHeatList();
    }
    else
    {
      MiIssuePageHeatList(v5, v6);
      MiFreeTransitionPageHeatList(v5);
    }
    MiAcquireCachedPageLocks(a1, 0LL);
    return (unsigned int *)3221226029LL;
  }
  return result;
}
