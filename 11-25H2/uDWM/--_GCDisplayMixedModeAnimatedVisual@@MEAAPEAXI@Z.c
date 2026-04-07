/*
 * XREFs of ??_GCDisplayMixedModeAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B27E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayMixedModeAnimatedVisual@@MEAA@XZ @ 0x1800B26B0 (--1CDisplayMixedModeAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayMixedModeAnimatedVisual *__fastcall CDisplayMixedModeAnimatedVisual::`scalar deleting destructor'(
        CDisplayMixedModeAnimatedVisual *this,
        char a2)
{
  CDisplayMixedModeAnimatedVisual::~CDisplayMixedModeAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x1E8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
