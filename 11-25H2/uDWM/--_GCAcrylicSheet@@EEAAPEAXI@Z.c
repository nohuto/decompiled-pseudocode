/*
 * XREFs of ??_GCAcrylicSheet@@EEAAPEAXI@Z @ 0x1800A1150
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CAcrylicSheet@@EEAA@XZ @ 0x1800A1088 (--1CAcrylicSheet@@EEAA@XZ.c)
 */

CBaseObject **__fastcall CAcrylicSheet::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CAcrylicSheet::~CAcrylicSheet(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x210);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
