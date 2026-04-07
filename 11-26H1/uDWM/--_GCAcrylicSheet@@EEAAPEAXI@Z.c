/*
 * XREFs of ??_GCAcrylicSheet@@EEAAPEAXI@Z @ 0x1800957B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800956B8 (--1CAcrylicSheet@@EEAA@XZ.c)
 */

CBaseObject **__fastcall CAcrylicSheet::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CAcrylicSheet::~CAcrylicSheet(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x1D0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
