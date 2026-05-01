/*
 * XREFs of ??DIterator@?$ObjectArrayAdapterImpl@UIApplicationViewChangeListener@@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@XZ @ 0x180173A28
 * Callers:
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180058B24 (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 *     _lambda_437fa58503517304dd979000588ba553_::operator() @ 0x18049A120 (_lambda_437fa58503517304dd979000588ba553_--operator().c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049AF88 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1804F07EC (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x180560850 (-Initialize@VirtualDesktopGestureContext@@QEAAJK@Z.c)
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180567660 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 *     ?GetSuppressedDisplayRects@TouchGestureComponent@@AEAA?AV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@XZ @ 0x18058BA4C (-GetSuppressedDisplayRects@TouchGestureComponent@@AEAA-AV-$vector@URect@Foundation@Windows@winrt.c)
 *     _lambda_f3af541e54fed362ec31214e5f0f3de2_::operator() @ 0x1805BD1A0 (_lambda_f3af541e54fed362ec31214e5f0f3de2_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall details::ObjectArrayAdapterImpl<IApplicationViewChangeListener,Microsoft::WRL::ComPtr<IApplicationViewChangeListener>>::Iterator::operator*(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
