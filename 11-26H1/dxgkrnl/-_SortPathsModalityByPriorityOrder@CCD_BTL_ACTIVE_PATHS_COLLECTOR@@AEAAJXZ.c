/*
 * XREFs of ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x14033E170
 * Callers:
 *     ?CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ @ 0x14031E72C (-CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x14033D450 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 * Callees:
 *     qsort_0 @ 0x14006E431 (qsort_0.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  result = 0LL;
  if ( v1 )
  {
    if ( *(_WORD *)(v1 + 20) )
    {
      qsort_0(
        (void *)(v1 + 56),
        *(unsigned __int16 *)(v1 + 20),
        0x128uLL,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback);
      return 0LL;
    }
  }
  return result;
}
