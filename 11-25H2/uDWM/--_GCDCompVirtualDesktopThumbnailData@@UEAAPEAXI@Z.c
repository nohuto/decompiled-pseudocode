/*
 * XREFs of ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x180088A80
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDCompVirtualDesktopThumbnailData@@UEAA@XZ @ 0x180098D3C (--1CDCompVirtualDesktopThumbnailData@@UEAA@XZ.c)
 */

CDCompVirtualDesktopThumbnailData *__fastcall CDCompVirtualDesktopThumbnailData::`scalar deleting destructor'(
        CDCompVirtualDesktopThumbnailData *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CDCompVirtualDesktopThumbnailData::~CDCompVirtualDesktopThumbnailData(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
