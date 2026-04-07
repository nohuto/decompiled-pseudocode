/*
 * XREFs of ??_GCDisplayExtendToDuplicateAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B1F20
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B1E5C (--1CDisplayExtendToDuplicateAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayExtendToDuplicateAnimatedVisual *__fastcall CDisplayExtendToDuplicateAnimatedVisual::`scalar deleting destructor'(
        CDisplayExtendToDuplicateAnimatedVisual *this,
        char a2)
{
  CDisplayExtendToDuplicateAnimatedVisual::~CDisplayExtendToDuplicateAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1C0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
