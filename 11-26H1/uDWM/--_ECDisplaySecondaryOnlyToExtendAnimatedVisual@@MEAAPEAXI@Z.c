/*
 * XREFs of ??_ECDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B4200
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B416C (--1CDisplaySecondaryOnlyToExtendAnimatedVisual@@MEAA@XZ.c)
 */

CDisplaySecondaryOnlyToExtendAnimatedVisual *__fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::`vector deleting destructor'(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this,
        char a2)
{
  CDisplaySecondaryOnlyToExtendAnimatedVisual::~CDisplaySecondaryOnlyToExtendAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1B8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
