/*
 * XREFs of ??_ECDisplayDisconnectAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B0130
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ @ 0x1800B00BC (--1CDisplayDisconnectAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayDisconnectAnimatedVisual *__fastcall CDisplayDisconnectAnimatedVisual::`vector deleting destructor'(
        CDisplayDisconnectAnimatedVisual *this,
        char a2)
{
  CDisplayDisconnectAnimatedVisual::~CDisplayDisconnectAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1A0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
