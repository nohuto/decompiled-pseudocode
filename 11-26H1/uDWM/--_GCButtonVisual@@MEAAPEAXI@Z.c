/*
 * XREFs of ??_GCButtonVisual@@MEAAPEAXI@Z @ 0x1800062D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CButtonVisual@@MEAA@XZ @ 0x18000631C (--1CButtonVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CButtonVisual *__fastcall CButtonVisual::`scalar deleting destructor'(CButtonVisual *this, char a2)
{
  CButtonVisual::~CButtonVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xF8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
