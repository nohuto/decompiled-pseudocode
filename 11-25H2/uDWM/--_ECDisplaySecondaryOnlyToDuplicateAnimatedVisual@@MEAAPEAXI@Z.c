/*
 * XREFs of ??_ECDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B4090
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B4018 (--1CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@MEAA@XZ.c)
 */

CDisplaySecondaryOnlyToDuplicateAnimatedVisual *__fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::`vector deleting destructor'(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this,
        char a2)
{
  CDisplaySecondaryOnlyToDuplicateAnimatedVisual::~CDisplaySecondaryOnlyToDuplicateAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1A0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
