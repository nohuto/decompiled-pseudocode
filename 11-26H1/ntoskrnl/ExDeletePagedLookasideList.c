/*
 * XREFs of ExDeletePagedLookasideList @ 0x1404B62D0
 * Callers:
 *     DifExDeletePagedLookasideListWrapper @ 0x1406547C0 (DifExDeletePagedLookasideListWrapper.c)
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140790380 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     ExpFlushGeneralLookaside @ 0x1404B6384 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1404B6434 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  unsigned int v2; // r9d

  ExpRemoveGeneralLookaside(&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask);
  ExpFlushGeneralLookaside(Lookaside);
  if ( DifObjTrkIsKvEnabledForPlugin(48LL) )
    DifObjTrkRemoveItem(v2, (_RTL_BALANCED_LINKS *)Lookaside, 0x80u);
}
