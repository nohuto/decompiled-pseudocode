/*
 * XREFs of ??_GCDCompVirtualDesktopThumbnailData@@UEAAPEAXI@Z @ 0x1800783F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompVirtualDesktopThumbnailData@@UEAA@XZ @ 0x18008C4A0 (--1CDCompVirtualDesktopThumbnailData@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

CDCompVirtualDesktopThumbnailData *__fastcall CDCompVirtualDesktopThumbnailData::`scalar deleting destructor'(
        CDCompVirtualDesktopThumbnailData *this,
        char a2)
{
  CDCompVirtualDesktopThumbnailData::~CDCompVirtualDesktopThumbnailData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xD0uLL);
  return this;
}
