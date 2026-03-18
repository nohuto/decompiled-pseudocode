/*
 * XREFs of MiAddPageToHeatList @ 0x140491430
 * Callers:
 *     MiReplenishPageSlist @ 0x14028A710 (MiReplenishPageSlist.c)
 *     MiCoalesceFreeSmallPages @ 0x14028D060 (MiCoalesceFreeSmallPages.c)
 *     MiAllocateLargeZeroPages @ 0x1403C673C (MiAllocateLargeZeroPages.c)
 *     MiGetLargePageChain @ 0x1403C7E10 (MiGetLargePageChain.c)
 *     MiCoalesceFreeLargePages @ 0x1403C9274 (MiCoalesceFreeLargePages.c)
 *     MiGetLargePage @ 0x14051E3C4 (MiGetLargePage.c)
 *     MiChangePageHeatImmediate @ 0x140529498 (MiChangePageHeatImmediate.c)
 *     MiWalkImageMakePageHot @ 0x140705660 (MiWalkImageMakePageHot.c)
 *     MiZeroPageMakeHot @ 0x14070EEF0 (MiZeroPageMakeHot.c)
 * Callees:
 *     MiIssuePageHeatList @ 0x1402F383C (MiIssuePageHeatList.c)
 *     MiAddPageToHeatRanges @ 0x140491458 (MiAddPageToHeatRanges.c)
 */

void __fastcall MiAddPageToHeatList(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( (unsigned int)MiAddPageToHeatRanges(a1, a2, a3) )
    MiIssuePageHeatList(a1, v4);
}
