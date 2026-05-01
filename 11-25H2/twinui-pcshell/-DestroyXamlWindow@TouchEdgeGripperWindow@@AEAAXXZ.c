/*
 * XREFs of ?DestroyXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x180576808
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180572000 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     ??1TouchEdgeGripperWindow@@UEAA@XZ @ 0x1805751DC (--1TouchEdgeGripperWindow@@UEAA@XZ.c)
 *     ?Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z @ 0x180576898 (-Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_75f2985bf69ff4a05611e28552fa3ff7___::Invoke @ 0x180576BE0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180576BE0.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?CreateInTileStore@?$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTilePrivate@StartScreen@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800FC828 (-CreateInTileStore@-$consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate@UISecondaryTi.c)
 *     ?OnSearchActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUSearchActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x1801044A8 (-OnSearchActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@U.c)
 *     ?TintOpacity@?$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@N@Z @ 0x180106240 (-TintOpacity@-$consume_Windows_UI_Xaml_Media_IAcrylicBrush@UIAcrylicBrush@Media@Xaml@UI@Windows@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchEdgeGripperWindow::DestroyXamlWindow(TouchEdgeGripperWindow *this)
{
  __int64 *v2; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 96);
  if ( *((_QWORD *)this + 12) )
  {
    winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrush<winrt::Windows::UI::Xaml::Media::IAcrylicBrush>::TintOpacity((__int64 *)this + 12);
    winrt::impl::consume_Windows_Internal_UI_StartScreen_ISecondaryTilePrivate<winrt::Windows::Internal::UI::StartScreen::ISecondaryTilePrivate>::CreateInTileStore(v2);
    v3 = 0LL;
    winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnSearchActivated(
      v2,
      &v3);
    v3 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v2, &v3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
    v3 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 15, &v3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  }
  TouchEdgeGestureTelemetry::XamlWindowDestroyed();
}
