/*
 * XREFs of ??_ECDisplayExtendAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B1630
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayExtendAnimatedVisual@@MEAA@XZ @ 0x1800B1560 (--1CDisplayExtendAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayExtendAnimatedVisual *__fastcall CDisplayExtendAnimatedVisual::`vector deleting destructor'(
        CDisplayExtendAnimatedVisual *this,
        char a2)
{
  CDisplayExtendAnimatedVisual::~CDisplayExtendAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1E0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
