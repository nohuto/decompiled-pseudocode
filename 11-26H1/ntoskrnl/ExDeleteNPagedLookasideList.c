/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1404BCB50
 * Callers:
 *     DifExDeleteNPagedLookasideListWrapper @ 0x140650A80 (DifExDeleteNPagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x14078D850 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403ACC60 (DifObjTrkIsKvEnabledForPlugin.c)
 *     DifObjTrkRemoveItem @ 0x1403ADC70 (DifObjTrkRemoveItem.c)
 *     ExpFlushGeneralLookaside @ 0x1404BCBA4 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1404BCC54 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  unsigned int v2; // r9d

  ExpRemoveGeneralLookaside((PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack);
  ExpFlushGeneralLookaside(Lookaside);
  if ( DifObjTrkIsKvEnabledForPlugin(48LL) )
    DifObjTrkRemoveItem(v2, (_RTL_BALANCED_LINKS *)Lookaside, 0x80u);
}
