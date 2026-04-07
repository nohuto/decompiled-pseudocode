/*
 * XREFs of ?SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z @ 0x18008DEC0
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180025DF0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180066670 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z @ 0x1800ADF54 (-SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopThumbnailCVI::SetVisual(CDesktopThumbnailCVI *this, struct CDesktopThumbnailBase *a2)
{
  *((_QWORD *)this + 2) = a2;
  CBaseObject::AddRef(a2);
}
