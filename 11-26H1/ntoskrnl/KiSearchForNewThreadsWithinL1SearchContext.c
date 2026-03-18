/*
 * XREFs of KiSearchForNewThreadsWithinL1SearchContext @ 0x1404AF3D8
 * Callers:
 *     KiSearchForNewThread @ 0x14023E3D0 (KiSearchForNewThread.c)
 * Callees:
 *     KiSearchForNewThreadsWithinSearchContext @ 0x14023FC00 (KiSearchForNewThreadsWithinSearchContext.c)
 */

__int64 __fastcall KiSearchForNewThreadsWithinL1SearchContext(__int64 a1, unsigned __int64 *a2)
{
  return KiSearchForNewThreadsWithinSearchContext(a1, a2, *(_QWORD *)(a1 + 37984), *(_QWORD **)(a1 + 38000));
}
