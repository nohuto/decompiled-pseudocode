/*
 * XREFs of KiSearchForNewThreadsWithinL1SearchContext @ 0x1404A8A68
 * Callers:
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 * Callees:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x140241560 (KiSearchForNewThreadsWithinSearchContext.c)
 */

__int64 __fastcall KiSearchForNewThreadsWithinL1SearchContext(__int64 a1, unsigned __int64 *a2)
{
  return KiSearchForNewThreadsWithinSearchContext(a1, a2, *(_QWORD *)(a1 + 37984), *(_QWORD **)(a1 + 38000));
}
