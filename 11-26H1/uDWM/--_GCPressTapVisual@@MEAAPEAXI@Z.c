/*
 * XREFs of ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800BC0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CPressTapVisual@@MEAA@XZ @ 0x1800BC05C (--1CPressTapVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CPressTapVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CPressTapVisual::~CPressTapVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x150);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
