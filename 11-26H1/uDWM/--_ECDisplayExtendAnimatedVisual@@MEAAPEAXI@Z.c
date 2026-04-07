/*
 * XREFs of ??_ECDisplayExtendAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B0F90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayExtendAnimatedVisual@@MEAA@XZ @ 0x1800B0EB8 (--1CDisplayExtendAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayExtendAnimatedVisual *__fastcall CDisplayExtendAnimatedVisual::`vector deleting destructor'(
        CDisplayExtendAnimatedVisual *this,
        char a2)
{
  CDisplayExtendAnimatedVisual::~CDisplayExtendAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1C0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
