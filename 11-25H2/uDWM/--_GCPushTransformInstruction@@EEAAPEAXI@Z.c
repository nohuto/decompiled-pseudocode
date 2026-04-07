/*
 * XREFs of ??_GCPushTransformInstruction@@EEAAPEAXI@Z @ 0x180071840
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPushTransformInstruction@@EEAA@XZ @ 0x18007188C (--1CPushTransformInstruction@@EEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CPushTransformInstruction *__fastcall CPushTransformInstruction::`scalar deleting destructor'(
        CPushTransformInstruction *this,
        char a2)
{
  CPushTransformInstruction::~CPushTransformInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x18);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
