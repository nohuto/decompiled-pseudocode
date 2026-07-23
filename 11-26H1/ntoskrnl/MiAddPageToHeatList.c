/*
 * XREFs of MiAddPageToHeatList @ 0x14048AF80
 * Callers:
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MiCoalesceFreeSmallPages @ 0x14028C5C0 (MiCoalesceFreeSmallPages.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiGetLargePageChain @ 0x1403D1D00 (MiGetLargePageChain.c)
 *     MiCoalesceFreeLargePages @ 0x1403D3124 (MiCoalesceFreeLargePages.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     MiChangePageHeatImmediate @ 0x14052B92C (MiChangePageHeatImmediate.c)
 *     MiWalkImageMakePageHot @ 0x14070A330 (MiWalkImageMakePageHot.c)
 *     MiZeroPageMakeHot @ 0x140713BF0 (MiZeroPageMakeHot.c)
 * Callees:
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiAddPageToHeatRanges @ 0x14048AFA8 (MiAddPageToHeatRanges.c)
 */

void __fastcall MiAddPageToHeatList(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( (unsigned int)MiAddPageToHeatRanges(a1, a2, a3) )
    MiIssuePageHeatList(a1, v4);
}
