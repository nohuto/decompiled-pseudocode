/*
 * XREFs of ??_GCSolidRectangleVisual@@UEAAPEAXI@Z @ 0x180006370
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRectangleVisual@@UEAA@XZ @ 0x1800063BC (--1CRectangleVisual@@UEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CSolidRectangleVisual *__fastcall CSolidRectangleVisual::`scalar deleting destructor'(
        CSolidRectangleVisual *this,
        char a2)
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
