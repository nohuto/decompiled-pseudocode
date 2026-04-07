/*
 * XREFs of ??_ECPrimitiveGroupVisual@@MEAAPEAXI@Z @ 0x180065D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPrimitiveGroupVisual@@MEAA@XZ @ 0x180065DCC (--1CPrimitiveGroupVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CPrimitiveGroupVisual *__fastcall CPrimitiveGroupVisual::`vector deleting destructor'(
        CPrimitiveGroupVisual *this,
        char a2)
{
  CPrimitiveGroupVisual::~CPrimitiveGroupVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x108);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
