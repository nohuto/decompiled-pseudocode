/*
 * XREFs of ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801B4014
 * Callers:
 *     ?CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x1800BBA04 (-CalculateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180108C7C (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 *     _lambda_ea9241ebdeba2d86efd1d019ab7a7d43_::operator() @ 0x1801B3E7C (_lambda_ea9241ebdeba2d86efd1d019ab7a7d43_--operator().c)
 *     ?GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180259224 (-GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 *     ?VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@@Z @ 0x18026BF60 (-VirtualDesktopCollectionChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktopCollection@@.c)
 *     ?GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18047F244 (-GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 *     ?Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180484170 (-Initialize@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     _lambda_437fa58503517304dd979000588ba553_::operator() @ 0x1804894BC (_lambda_437fa58503517304dd979000588ba553_--operator().c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18048A2FC (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1804DE1A8 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 *     ?UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1805347B0 (-UpdateWallpaperPathForAllDesktops@CVirtualDesktopManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x18053CA40 (-Initialize@VirtualDesktopGestureContext@@QEAAJK@Z.c)
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x180543760 (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18056471C (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 *     ?GetSuppressedDisplayRects@TouchGestureComponent@@AEAA?AV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@XZ @ 0x180567B9C (-GetSuppressedDisplayRects@TouchGestureComponent@@AEAA-AV-$vector@URect@Foundation@Windows@winrt.c)
 *     ?Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1806159C0 (-Execute@LaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
        __int64 a1,
        __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a1 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_DWORD *)(a1 + 8) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10,
      (int)"desktop\\internal\\shell\\inc\\private\\ObjectArrayAdapter.h",
      (const char *)(unsigned int)v4);
  return a1;
}
