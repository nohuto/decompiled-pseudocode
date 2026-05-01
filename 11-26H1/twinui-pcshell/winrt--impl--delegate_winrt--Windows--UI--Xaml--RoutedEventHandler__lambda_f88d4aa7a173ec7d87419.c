/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_f88d4aa7a173ec7d874197d211fc8411___::Invoke @ 0x18059A400
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GripperShowAnimationStarted@TouchEdgeGestureTelemetry@@SAXXZ @ 0x18059A1D8 (-GripperShowAnimationStarted@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x18059AD64 (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_f88d4aa7a173ec7d874197d211fc8411___::Invoke(
        __int64 a1)
{
  __int64 v1; // rbx
  void (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(v1 + 136);
  v5 = 0LL;
  if ( v2 )
    (**v2)(v2, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v5);
  try
  {
    winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(v1 + 120, &v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
    TouchEdgeGestureTelemetry::GripperShowAnimationStarted(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
