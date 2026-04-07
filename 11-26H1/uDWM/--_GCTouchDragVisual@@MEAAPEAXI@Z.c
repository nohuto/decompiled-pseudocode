/*
 * XREFs of ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x180075350
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18008782C (--1CTouchDragVisual@@MEAA@XZ.c)
 */

CTouchDragVisual *__fastcall CTouchDragVisual::`scalar deleting destructor'(CTouchDragVisual *this, char a2)
{
  CTouchDragVisual::~CTouchDragVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1A8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
