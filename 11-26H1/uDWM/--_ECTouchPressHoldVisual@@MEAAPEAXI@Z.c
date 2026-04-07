/*
 * XREFs of ??_ECTouchPressHoldVisual@@MEAAPEAXI@Z @ 0x1800CD040
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800CD000 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CTouchPressHoldVisual::`vector deleting destructor'(CBaseObject **this, char a2)
{
  CTouchPressHoldVisual::~CTouchPressHoldVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x138);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
