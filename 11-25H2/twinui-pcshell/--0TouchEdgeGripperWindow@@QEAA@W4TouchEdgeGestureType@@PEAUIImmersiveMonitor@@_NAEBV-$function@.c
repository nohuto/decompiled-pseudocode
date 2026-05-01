/*
 * XREFs of ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180574FCC
 * Callers:
 *     winrt::impl::create_and_initialize_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_&_IImmersiveMonitor___bool_&__lambda_c23e8e667a3c4ca3ee30dd3b90606dcd___ @ 0x180571D60 (winrt--impl--create_and_initialize_TouchEdgeGripperWindow_enum_TouchEdgeGestureType_-_IImmersive.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FC828 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 *     ?TintOpacity@?$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@N@Z @ 0x180106240 (-TintOpacity@-$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@.c)
 *     ?GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@PEAI2@Z @ 0x18022E428 (-GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@P.c)
 *     ??0?$producers_base@USnapMigrationHandler@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1802B0254 (--0-$producers_base@USnapMigrationHandler@@V-$tuple@UIInspectable@Foundation@Windows@winrt@@@std.c)
 *     ??0XamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@45@@Z @ 0x1802C66D4 (--0XamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundati.c)
 *     ??0?$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z @ 0x1802C6744 (--0-$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$ActivateInstance@UAccessibilitySettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUAccessibilitySettings@ViewManagement@UI@23@XZ @ 0x180573BA8 (--$ActivateInstance@UAccessibilitySettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@.c)
 *     ??$call@P6A?AUAccessibilitySettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UAccessibilitySettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUAccessibilitySettings@ViewManagement@UI@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x18057457C (--$call@P6A-AUAccessibilitySettings@ViewManagement@UI@Windows@winrt@@AEBUIActivationFactory@Foun.c)
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x1805758D4 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x180576FD0 (-PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z.c)
 *     ?XamlWindowCreated@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180577B20 (-XamlWindowCreated@TouchEdgeGestureTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TouchEdgeGripperWindow::TouchEdgeGripperWindow(
        __int64 a1,
        unsigned int a2,
        struct IImmersiveMonitor *a3,
        char a4)
{
  __int64 v8; // r8
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // rcx
  struct IUnknown *v10; // rdx
  TouchEdgeGripperWindow *v11; // rcx
  __int64 *v12; // rax
  unsigned int v14; // [rsp+30h] [rbp-41h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-3Dh] BYREF
  void (__fastcall *v16[3])(__int64, __int64 *); // [rsp+38h] [rbp-39h] BYREF
  __int128 v17; // [rsp+50h] [rbp-21h] BYREF
  __int64 *v18; // [rsp+60h] [rbp-11h]
  __int64 v19; // [rsp+68h] [rbp-9h]
  __int128 v20; // [rsp+70h] [rbp-1h] BYREF

  v19 = a1;
  winrt::impl::producers_base<SnapMigrationHandler,std::tuple<winrt::Windows::Foundation::IInspectable>>::producers_base<SnapMigrationHandler,std::tuple<winrt::Windows::Foundation::IInspectable>>();
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(a1 + 8) = 1LL;
  *(_QWORD *)a1 = &TouchEdgeGripperWindow::`vftable';
  std::function<long (unsigned short const *)>::function<long (unsigned short const *)>(a1 + 24, v8);
  *(_BYTE *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  v10 = (struct IUnknown *)(a1 + 128);
  v18 = &qword_18089B958;
  _InterlockedIncrement64(&qword_18089B958);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::AccessibilitySettings,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::ViewManagement::AccessibilitySettings>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::ViewManagement::AccessibilitySettings,winrt::Windows::Foundation::IActivationFactory>,
      v10);
    _InterlockedDecrement64(&qword_18089B958);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B958);
    v16[0] = (void (__fastcall *)(__int64, __int64 *))_lambda_90a9149a8a4e88288c64e9163af60b52_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::ViewManagement::AccessibilitySettings,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::UI::ViewManagement::AccessibilitySettings (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      v9,
      (__int64)v10,
      v16);
  }
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_BYTE *)(a1 + 160) = a4;
  v20 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( (int)TouchEdgeGripperWindow::GetMonitorDisplayInfo(v11, a3, (struct Geometry::CRect *)&v20, &v14, &v15) >= 0 )
  {
    *(_OWORD *)v16 = 0LL;
    v12 = (__int64 *)winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow::XamlExplorerHostWindow(
                       (winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow *)&v17,
                       7,
                       (const struct winrt::Windows::Foundation::Rect *)v16);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 96), v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
    winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrush<winrt::Windows::UI::Xaml::Media::IAcrylicBrush>::TintOpacity((__int64 *)(a1 + 96));
    winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore((__int64 *)(a1 + 96));
    TouchEdgeGestureTelemetry::XamlWindowCreated();
    TouchEdgeGripperWindow::CreateXamlContent(a1, a2);
    v17 = v20;
    TouchEdgeGripperWindow::PositionXamlWindow(a1, a2, &v17, v14, v15);
  }
  return a1;
}
