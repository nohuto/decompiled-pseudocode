/*
 * XREFs of ??_ECVirtualDesktopThumbnailCVI@@UEAAPEAXI@Z @ 0x1800E19B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18008A2B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDesktopThumbnailCVI@@MEAA@XZ @ 0x1800ADE24 (--1CDesktopThumbnailCVI@@MEAA@XZ.c)
 */

CVirtualDesktopThumbnailCVI *__fastcall CVirtualDesktopThumbnailCVI::`vector deleting destructor'(
        CVirtualDesktopThumbnailCVI *this,
        char a2)
{
  CDesktopThumbnailCVI::~CDesktopThumbnailCVI(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0x50);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
