/*
 * XREFs of ??_GCRectangleInstruction@@EEAAPEAXI@Z @ 0x180072CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRectangleInstruction@@EEAA@XZ @ 0x180072D2C (--1CRectangleInstruction@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CRectangleInstruction *__fastcall CRectangleInstruction::`scalar deleting destructor'(
        CRectangleInstruction *this,
        char a2)
{
  CRectangleInstruction::~CRectangleInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x30);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
