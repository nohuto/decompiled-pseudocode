/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1404B6330
 * Callers:
 *     DifExDeleteNPagedLookasideListWrapper @ 0x140654660 (DifExDeleteNPagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140790380 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     ExpFlushGeneralLookaside @ 0x1404B6384 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1404B6434 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  unsigned int v2; // r9d

  ExpRemoveGeneralLookaside(&ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields);
  ExpFlushGeneralLookaside(Lookaside);
  if ( DifObjTrkIsKvEnabledForPlugin(48LL) )
    DifObjTrkRemoveItem(v2, (_RTL_BALANCED_LINKS *)Lookaside, 0x80u);
}
