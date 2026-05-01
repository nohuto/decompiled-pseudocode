/*
 * XREFs of ?end@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x18029B8D8
 * Callers:
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180058B24 (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 *     _lambda_437fa58503517304dd979000588ba553_::operator() @ 0x18049A120 (_lambda_437fa58503517304dd979000588ba553_--operator().c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049AF88 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1804F07EC (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x180560850 (-Initialize@VirtualDesktopGestureContext@@QEAAJK@Z.c)
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180567660 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 *     ?GetSuppressedDisplayRects@TouchGestureComponent@@AEAA?AV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@XZ @ 0x18058BA4C (-GetSuppressedDisplayRects@TouchGestureComponent@@AEAA-AV-$vector@URect@Foundation@Windows@winrt.c)
 * Callees:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18029B900 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::end(
        __int64 a1,
        __int64 a2)
{
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    a2,
    a1,
    *(unsigned int *)(a1 + 8));
  return a2;
}
