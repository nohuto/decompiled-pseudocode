/*
 * XREFs of ??_ECNineGridVisual@@UEAAPEAXI@Z @ 0x1800061B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRectangleVisual@@UEAA@XZ @ 0x1800063BC (--1CRectangleVisual@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CNineGridVisual *__fastcall CNineGridVisual::`vector deleting destructor'(CNineGridVisual *this, char a2)
{
  CRectangleVisual::~CRectangleVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xD0);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
