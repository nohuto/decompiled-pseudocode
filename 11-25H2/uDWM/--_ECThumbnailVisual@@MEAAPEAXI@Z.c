/*
 * XREFs of ??_ECThumbnailVisual@@MEAAPEAXI@Z @ 0x180071960
 * Callers:
 *     <none>
 * Callees:
 *     ??1CThumbnailVisual@@MEAA@XZ @ 0x1800719AC (--1CThumbnailVisual@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CThumbnailVisual *__fastcall CThumbnailVisual::`vector deleting destructor'(CThumbnailVisual *this, char a2)
{
  CThumbnailVisual::~CThumbnailVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x200);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
