/*
 * XREFs of MiIsVadLargePrivate @ 0x14030B6CC
 * Callers:
 *     MiHandleForkValidProtoPte @ 0x14030B310 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkProtoPte @ 0x14030EB98 (MiHandleForkProtoPte.c)
 *     MiPrefetchJumpVad @ 0x140314358 (MiPrefetchJumpVad.c)
 *     MiScrubProcessLargePage @ 0x14087DEB8 (MiScrubProcessLargePage.c)
 *     MiMapChildLargePageVads @ 0x14087FBAC (MiMapChildLargePageVads.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiCloneVadTree @ 0x1409618E4 (MiCloneVadTree.c)
 *     MiAllocateChildVads @ 0x140961AD0 (MiAllocateChildVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140961D0C (MiCloneAncillaryVadInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsVadLargePrivate(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  return (v1 & 0x80000) != 0 && ((v1 & 0x200000) != 0 || (v1 & 0x60000u) >= 0x40000)
      || (*(_DWORD *)(a1 + 48) & 0x1C) == 8 && (*(_DWORD *)(a1 + 72) & 1) != 0;
}
