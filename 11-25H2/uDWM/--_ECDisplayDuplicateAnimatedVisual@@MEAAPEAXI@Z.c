/*
 * XREFs of ??_ECDisplayDuplicateAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B02C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayDuplicateAnimatedVisual@@MEAA@XZ @ 0x1800B0200 (--1CDisplayDuplicateAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayDuplicateAnimatedVisual *__fastcall CDisplayDuplicateAnimatedVisual::`vector deleting destructor'(
        CDisplayDuplicateAnimatedVisual *this,
        char a2)
{
  CDisplayDuplicateAnimatedVisual::~CDisplayDuplicateAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1C0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
