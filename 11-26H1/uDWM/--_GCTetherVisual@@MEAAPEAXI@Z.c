/*
 * XREFs of ??_GCTetherVisual@@MEAAPEAXI@Z @ 0x1800C85D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800C8534 (--1CTetherVisual@@MEAA@XZ.c)
 */

CTetherVisual *__fastcall CTetherVisual::`scalar deleting destructor'(CTetherVisual *this, char a2)
{
  CTetherVisual::~CTetherVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x130);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
