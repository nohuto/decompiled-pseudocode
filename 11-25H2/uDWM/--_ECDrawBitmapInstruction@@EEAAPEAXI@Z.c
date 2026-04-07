/*
 * XREFs of ??_ECDrawBitmapInstruction@@EEAAPEAXI@Z @ 0x180076870
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawBitmapInstruction@@EEAA@XZ @ 0x1800768BC (--1CDrawBitmapInstruction@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CDrawBitmapInstruction *__fastcall CDrawBitmapInstruction::`vector deleting destructor'(
        CDrawBitmapInstruction *this,
        char a2)
{
  CDrawBitmapInstruction::~CDrawBitmapInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x18);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
