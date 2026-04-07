/*
 * XREFs of ??_GCDisplayExtendToDuplicateAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B1880
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B17B8 (--1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayExtendToDuplicateAnimatedVisual *__fastcall CDisplayExtendToDuplicateAnimatedVisual::`scalar deleting destructor'(
        CDisplayExtendToDuplicateAnimatedVisual *this,
        char a2)
{
  CDisplayExtendToDuplicateAnimatedVisual::~CDisplayExtendToDuplicateAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1A0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
