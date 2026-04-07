/*
 * XREFs of ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180077B70
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CDesktopThumbnailCVIVisual@@MEAA@XZ @ 0x1800822D8 (--1CDesktopThumbnailCVIVisual@@MEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

CDesktopThumbnailCVIVisual *__fastcall CDesktopThumbnailCVIVisual::`scalar deleting destructor'(
        CDesktopThumbnailCVIVisual *this,
        char a2)
{
  CDesktopThumbnailCVIVisual::~CDesktopThumbnailCVIVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x108);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
