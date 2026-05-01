/*
 * XREFs of ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A0014
 * Callers:
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x18009FC98 (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x1800A0798 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1800B5AC4 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x180204E10 (-v_DismissView@XamlAltTabViewHost@@MEAAXXZ.c)
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18021D9C0 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 *     ?BeginInvokeAnimation@TaskViewFrame@@UEAAXXZ @ 0x1802241E0 (-BeginInvokeAnimation@TaskViewFrame@@UEAAXXZ.c)
 *     ?FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXURect@Foundation@67@@Z @ 0x18026C20C (-FinishShow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXU.c)
 *     ?OnClosed@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@67@0@Z @ 0x18026C500 (-OnClosed@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@AEAAXAEB.c)
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x1805986F8 (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 *     ?DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x180599F54 (-DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ.c)
 *     ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x18059A798 (-PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z.c)
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805E5508 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 *     ?DisplayGamingTaskView@XamlGamingTaskViewHost@@AEAAXXZ @ 0x1806A150C (-DisplayGamingTaskView@XamlGamingTaskViewHost@@AEAAXXZ.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1806ACFE4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x1806AF810 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 *     ?Cloak@TaskViewFrame@@UEAAJ_N@Z @ 0x1806BCBA0 (-Cloak@TaskViewFrame@@UEAAJ_N@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 104LL))(v1);
  return winrt::check_hresult(&v6, v2, &v4);
}
