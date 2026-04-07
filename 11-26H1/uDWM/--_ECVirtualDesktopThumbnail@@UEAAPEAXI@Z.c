/*
 * XREFs of ??_ECVirtualDesktopThumbnail@@UEAAPEAXI@Z @ 0x180075FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180078B10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1CDesktopThumbnailBase@@MEAA@XZ @ 0x180088840 (--1CDesktopThumbnailBase@@MEAA@XZ.c)
 */

CVirtualDesktopThumbnail *__fastcall CVirtualDesktopThumbnail::`vector deleting destructor'(
        CVirtualDesktopThumbnail *this,
        char a2)
{
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CIconicAnimatedVisual::OnSizeChanged(this, (const struct CSecondaryWindowRepresentation *)0xE8);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
