/*
 * XREFs of ExDeleteLookasideListEx @ 0x1404BCBF0
 * Callers:
 *     DifExDeleteLookasideListExWrapper @ 0x140650920 (DifExDeleteLookasideListExWrapper.c)
 * Callees:
 *     DifObjTrkIsKvEnabledForPlugin @ 0x1403ACC60 (DifObjTrkIsKvEnabledForPlugin.c)
 *     DifObjTrkRemoveItem @ 0x1403ADC70 (DifObjTrkRemoveItem.c)
 *     ExpRemoveGeneralLookaside @ 0x1404BCC54 (ExpRemoveGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1404BCCD0 (ExFlushLookasideListEx.c)
 */

void __stdcall ExDeleteLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  bool v2; // zf
  $7593FFE5FD7F8AD12EB10858261A32F1 *p_KernelShadowStack; // rcx
  unsigned int v4; // r9d

  v2 = (Lookaside->L.Type & 1) == 0;
  p_KernelShadowStack = ($7593FFE5FD7F8AD12EB10858261A32F1 *)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack;
  if ( !v2 )
    p_KernelShadowStack = &ExSaPageGroupDescriptorArrayLock.1008;
  ExpRemoveGeneralLookaside((PKSPIN_LOCK)p_KernelShadowStack);
  ExFlushLookasideListEx(Lookaside);
  if ( DifObjTrkIsKvEnabledForPlugin(48LL) )
    DifObjTrkRemoveItem(v4, (_RTL_BALANCED_LINKS *)Lookaside, 0x60u);
}
