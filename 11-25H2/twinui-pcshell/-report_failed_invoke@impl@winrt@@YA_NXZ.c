/*
 * XREFs of ?report_failed_invoke@impl@winrt@@YA_NXZ @ 0x180333400
 * Callers:
 *     _winrt::impl::invoke_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance__::_1_::catch$8 @ 0x1806A7A96 (_winrt--impl--invoke_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceHandler_w.c)
 *     _winrt::impl::invoke_winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_bool__::_1_::catch$8 @ 0x1806AB36F (_winrt--impl--invoke_winrt--Windows--Internal--Shell--SnapComponent--SnapFlyoutInstanceShownHand.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::Foundation::Point__std::nullptr_t_winrt::Windows::Foundation::Point__::_1_::catch$3 @ 0x1806AB3AD (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--I.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring__winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_winrt::hstring__::_1_::catch$8 @ 0x1806AB3EB (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUd_ea_1806AB3EB.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::AsyncActionCompletedHandler_winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction_TaskViewFrame___IImmersiveMonitor___::promise_type_winrt::Windows::Foundation::IAsyncAction_void__enum_winrt::Windows::Foundation::AsyncStatus__::_1_::catch$6 @ 0x1806BAA07 (_winrt--impl--invoke_winrt--Windows--Foundation--AsyncActionCompletedHandler_winrt-_ea_1806BAA07.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting_winrt::Windows::Foundation::IInspectable__SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting_std::nullptr_t__::_1_::catch$9 @ 0x1806BBD8D (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--She.c)
 *     _winrt::impl::invoke_winrt::Windows::Foundation::EventHandler_winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs__winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager_winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs__::_1_::catch$2 @ 0x1806DACD0 (_winrt--impl--invoke_winrt--Windows--Foundation--EventHandler_winrt--Windows--Internal--Shell--R.c)
 * Callees:
 *     WINRT_IMPL_RoTransformError @ 0x1802D39DF (WINRT_IMPL_RoTransformError.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DEE08 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

bool __fastcall winrt::impl::report_failed_invoke(winrt::impl *this)
{
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *winrt::to_hresult(&v3);
  WINRT_IMPL_RoTransformError(v1, 0LL, 0LL);
  return v1 != -2147417848 && v1 != -2147023174 && v1 != -1996357631;
}
