/*
 * XREFs of ?SetRect@CVirtualDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@AEBUtagSIZE@@@Z @ 0x180066A84
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180066670 (-EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopThumbnailCVI::SetRect(
        CVirtualDesktopThumbnailCVI *this,
        const struct tagRECT *a2,
        const struct tagSIZE *a3)
{
  *(struct tagRECT *)((char *)this + 56) = *a2;
  *((struct tagSIZE *)this + 9) = *a3;
  return 0LL;
}
