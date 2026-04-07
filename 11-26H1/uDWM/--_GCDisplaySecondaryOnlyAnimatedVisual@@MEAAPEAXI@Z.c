/*
 * XREFs of ??_GCDisplaySecondaryOnlyAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B3770
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ @ 0x1800B36F4 (--1CDisplaySecondaryOnlyAnimatedVisual@@MEAA@XZ.c)
 */

CDisplaySecondaryOnlyAnimatedVisual *__fastcall CDisplaySecondaryOnlyAnimatedVisual::`scalar deleting destructor'(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        char a2)
{
  CDisplaySecondaryOnlyAnimatedVisual::~CDisplaySecondaryOnlyAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x180);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
