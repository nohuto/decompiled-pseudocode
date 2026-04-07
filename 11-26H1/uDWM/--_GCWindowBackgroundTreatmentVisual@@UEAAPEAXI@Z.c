/*
 * XREFs of ??_GCWindowBackgroundTreatmentVisual@@UEAAPEAXI@Z @ 0x180062D90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CContainerVisual@@MEAA@XZ @ 0x18001BAC0 (--1CContainerVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CWindowBackgroundTreatmentVisual *__fastcall CWindowBackgroundTreatmentVisual::`scalar deleting destructor'(
        CWindowBackgroundTreatmentVisual *this,
        char a2)
{
  CContainerVisual::~CContainerVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xC0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
