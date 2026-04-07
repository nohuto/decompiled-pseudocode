/*
 * XREFs of ??_ECDisplayDisconnectAnimatedVisual@@MEAAPEAXI@Z @ 0x1800AF9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ @ 0x1800AF94C (--1CDisplayDisconnectAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayDisconnectAnimatedVisual *__fastcall CDisplayDisconnectAnimatedVisual::`vector deleting destructor'(
        CDisplayDisconnectAnimatedVisual *this,
        char a2)
{
  CDisplayDisconnectAnimatedVisual::~CDisplayDisconnectAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x180);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
