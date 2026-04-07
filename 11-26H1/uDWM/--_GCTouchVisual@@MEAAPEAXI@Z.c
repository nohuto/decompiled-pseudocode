/*
 * XREFs of ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800CDCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTouchVisual@@MEAA@XZ @ 0x18000820C (--1CTouchVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CBaseObject **__fastcall CTouchVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTouchVisual::~CTouchVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0xE0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
