/*
 * XREFs of ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x1800695B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedImage@@MEAA@XZ @ 0x1800695FC (--1CAtlasedImage@@MEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CAtlasedImage *__fastcall CAtlasedImage::`vector deleting destructor'(CAtlasedImage *this, char a2)
{
  CAtlasedImage::~CAtlasedImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x80);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
