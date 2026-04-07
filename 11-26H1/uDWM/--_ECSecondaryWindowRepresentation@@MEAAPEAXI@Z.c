/*
 * XREFs of ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x1800657C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18006580C (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CSecondaryWindowRepresentation *__fastcall CSecondaryWindowRepresentation::`vector deleting destructor'(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x108);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
