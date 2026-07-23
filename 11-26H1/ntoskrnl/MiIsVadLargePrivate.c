/*
 * XREFs of MiIsVadLargePrivate @ 0x1402ED74C
 * Callers:
 *     MiHandleForkValidProtoPte @ 0x1402ED390 (MiHandleForkValidProtoPte.c)
 *     MiHandleForkProtoPte @ 0x1402F0C18 (MiHandleForkProtoPte.c)
 *     MiPrefetchJumpVad @ 0x140316388 (MiPrefetchJumpVad.c)
 *     MiScrubProcessLargePage @ 0x1408842B8 (MiScrubProcessLargePage.c)
 *     MiMapChildLargePageVads @ 0x140885FAC (MiMapChildLargePageVads.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiCloneVadTree @ 0x140A075D8 (MiCloneVadTree.c)
 *     MiAllocateChildVads @ 0x140A077C4 (MiAllocateChildVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
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
