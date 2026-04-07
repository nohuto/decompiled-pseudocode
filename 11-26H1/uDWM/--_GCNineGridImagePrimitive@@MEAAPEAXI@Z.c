/*
 * XREFs of ??_GCNineGridImagePrimitive@@MEAAPEAXI@Z @ 0x1800BCA30
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CNineGridImagePrimitive@@MEAA@XZ @ 0x1800BC9B0 (--1CNineGridImagePrimitive@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CNineGridImagePrimitive::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CNineGridImagePrimitive::~CNineGridImagePrimitive(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(
        (CIconicAnimatedVisual *)this,
        (const struct CSecondaryWindowRepresentation *)0x48);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
