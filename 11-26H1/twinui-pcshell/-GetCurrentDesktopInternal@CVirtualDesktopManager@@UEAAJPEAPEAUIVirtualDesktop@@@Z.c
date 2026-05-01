/*
 * XREFs of ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18018CFF0
 * Callers:
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1801328B0 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1801FF9D0 (-SetDesktopWallpaperInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180262720 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?MoveViewFromHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180553590 (-MoveViewFromHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180554EF0 (-SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z.c)
 *     ?SwitchDesktopAndMoveForegroundViewInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180557020 (-SwitchDesktopAndMoveForegroundViewInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557284 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180557B80 (-SwitchDesktopWithAnimationInternal@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualD.c)
 *     ?UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ @ 0x180558100 (-UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
