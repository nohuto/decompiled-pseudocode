/*
 * XREFs of ??_GCDisplayDuplicateToExtendAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B0170
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B0074 (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayDuplicateToExtendAnimatedVisual *__fastcall CDisplayDuplicateToExtendAnimatedVisual::`scalar deleting destructor'(
        CDisplayDuplicateToExtendAnimatedVisual *this,
        char a2)
{
  CDisplayDuplicateToExtendAnimatedVisual::~CDisplayDuplicateToExtendAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1D0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
