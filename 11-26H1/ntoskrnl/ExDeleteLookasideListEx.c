/*
 * XREFs of ExDeleteLookasideListEx @ 0x1404B63D0
 * Callers:
 *     DifExDeleteLookasideListExWrapper @ 0x140654500 (DifExDeleteLookasideListExWrapper.c)
 * Callees:
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970 (DifObjTrkIsKvEnabledForPlugin.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     ExpRemoveGeneralLookaside @ 0x1404B6434 (ExpRemoveGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1404B64B0 (ExFlushLookasideListEx.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v2; // zf
  _KERNEL_SHADOW_STACK_LIMIT *p_KernelShadowStackLimit; // rcx
  unsigned int v4; // r9d

  v2 = (Lookaside->L.Type & 1) == 0;
  p_KernelShadowStackLimit = &ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit;
  if ( !v2 )
    p_KernelShadowStackLimit = (_KERNEL_SHADOW_STACK_LIMIT *)&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask;
  ExpRemoveGeneralLookaside(&p_KernelShadowStackLimit->AllFields);
  ExFlushLookasideListEx(Lookaside);
  if ( DifObjTrkIsKvEnabledForPlugin(48LL) )
    DifObjTrkRemoveItem(v4, (_RTL_BALANCED_LINKS *)Lookaside, 0x60u);
}
