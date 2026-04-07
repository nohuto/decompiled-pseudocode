/*
 * XREFs of ??_GCDisplayBlackCurtainAnimatedVisual@@MEAAPEAXI@Z @ 0x1800B39D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ @ 0x1800B3968 (--1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ.c)
 */

CDisplayBlackCurtainAnimatedVisual *__fastcall CDisplayBlackCurtainAnimatedVisual::`scalar deleting destructor'(
        CDisplayBlackCurtainAnimatedVisual *this,
        char a2)
{
  CDisplayBlackCurtainAnimatedVisual::~CDisplayBlackCurtainAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x198);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
