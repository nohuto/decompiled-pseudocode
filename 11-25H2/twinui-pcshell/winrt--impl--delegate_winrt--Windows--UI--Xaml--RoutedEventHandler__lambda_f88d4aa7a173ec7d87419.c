/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_f88d4aa7a173ec7d874197d211fc8411___::Invoke @ 0x180576C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GripperShowAnimationStarted@TouchEdgeGestureTelemetry@@SAXXZ @ 0x180576A54 (-GripperShowAnimationStarted@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?StartAnimation@?$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@@Z @ 0x180577580 (-StartAnimation@-$consume_Windows_UI_Xaml_IUIElement9@UUIElement@Xaml@UI@Windows@winrt@@@impl@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::RoutedEventHandler__lambda_f88d4aa7a173ec7d874197d211fc8411___::Invoke(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = v1 + 120;
  v3 = *(void (__fastcall ****)(_QWORD, void *, __int64 *))(v1 + 136);
  if ( v3 )
  {
    v7 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::UI::Composition::ICompositionAnimationBase>, &v7);
    v6 = v7;
  }
  else
  {
    v6 = 0LL;
  }
  try
  {
    winrt::impl::consume_Windows_UI_Xaml_IUIElement9<winrt::Windows::UI::Xaml::UIElement>::StartAnimation(v2, &v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
    TouchEdgeGestureTelemetry::GripperShowAnimationStarted(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
