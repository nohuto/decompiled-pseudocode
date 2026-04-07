/*
 * XREFs of ??_ECThumbnailAnimatedVisual@@UEAAPEAXI@Z @ 0x1800C9530
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPrimitiveGroupVisual@@MEAA@XZ @ 0x180065DCC (--1CPrimitiveGroupVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CThumbnailAnimatedVisual *__fastcall CThumbnailAnimatedVisual::`vector deleting destructor'(
        CThumbnailAnimatedVisual *this,
        char a2)
{
  CPrimitiveGroupVisual::~CPrimitiveGroupVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x158);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
