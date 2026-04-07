/*
 * XREFs of ?SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z @ 0x18009A488
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x1800602E0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x18006EC80 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 *     ?SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z @ 0x1800AE894 (-SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopThumbnailCVI::SetVisual(CDesktopThumbnailCVI *this, struct CDesktopThumbnailBase *a2)
{
  *((_QWORD *)this + 2) = a2;
  CMILRefCountBase::AddRef(a2);
}
