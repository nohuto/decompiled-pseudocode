/*
 * XREFs of ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180194050
 * Callers:
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F4380 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18020C980 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18026A3C0 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?MoveViewFromHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1805301C0 (-MoveViewFromHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180531420 (-SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z.c)
 *     ?SwitchDesktopAndMoveForegroundViewInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180533630 (-SwitchDesktopAndMoveForegroundViewInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180533884 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180534170 (-SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualD.c)
 *     ?UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ @ 0x1805346DC (-UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCurrentDesktopInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop **a2)
{
  struct IVirtualDesktop *v2; // rcx

  v2 = (struct IVirtualDesktop *)*((_QWORD *)this + 22);
  if ( !v2 )
    return 2147947423LL;
  *a2 = v2;
  (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
