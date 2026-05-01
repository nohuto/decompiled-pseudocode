/*
 * XREFs of ?ViewVirtualDesktopChanged@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIApplicationView@@@Z @ 0x1804AC060
 * Callers:
 *     <none>
 * Callees:
 *     ?_MaybeDoUpdates@VirtualDesktopThumbnailWindowFilter@@AEAAXXZ @ 0x1804AC290 (-_MaybeDoUpdates@VirtualDesktopThumbnailWindowFilter@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualDesktopThumbnailWindowFilter::ViewVirtualDesktopChanged(
        VirtualDesktopThumbnailWindowFilter *this,
        struct IApplicationView *a2)
{
  VirtualDesktopThumbnailWindowFilter *v2; // rcx

  v2 = (VirtualDesktopThumbnailWindowFilter *)((char *)this - 8);
  *((_BYTE *)v2 + 44) = 1;
  VirtualDesktopThumbnailWindowFilter::_MaybeDoUpdates(v2);
  return 0LL;
}
