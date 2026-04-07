/*
 * XREFs of ??_GCThumbnailTransition@@UEAAPEAXI@Z @ 0x1800C9070
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CThumbnailTransition@@UEAA@XZ @ 0x1800C9034 (--1CThumbnailTransition@@UEAA@XZ.c)
 */

CThumbnailTransition *__fastcall CThumbnailTransition::`scalar deleting destructor'(
        CThumbnailTransition *this,
        char a2)
{
  CThumbnailTransition::~CThumbnailTransition(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x28);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
