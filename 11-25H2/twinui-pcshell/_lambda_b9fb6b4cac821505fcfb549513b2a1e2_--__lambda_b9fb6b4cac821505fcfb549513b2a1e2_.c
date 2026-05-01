/*
 * XREFs of _lambda_b9fb6b4cac821505fcfb549513b2a1e2_::__lambda_b9fb6b4cac821505fcfb549513b2a1e2_ @ 0x1805CA074
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_3e03a3c31af621875be24bd5f43287a8___ @ 0x1805C9788 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--ToastNotificati.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_48a0e4ee9c2bd8c262121ffa5f26b805___ @ 0x1805C97E4 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_1805C97E4.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_b9fb6b4cac821505fcfb549513b2a1e2___ @ 0x1805C98EC (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--To_ea_1805C98EC.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_b9fb6b4cac821505fcfb549513b2a1e2___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_b9fb6b4cac821505fcfb549513b2a1e2___ @ 0x1805CA1E0 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_1805CA1E0.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_b9fb6b4cac821505fcfb549513b2a1e2____::_1_::dtor$0 @ 0x1806D6ADE (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifications--ToastNotificat.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1800A2F70 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 */

void __fastcall lambda_b9fb6b4cac821505fcfb549513b2a1e2_::__lambda_b9fb6b4cac821505fcfb549513b2a1e2_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>(a1 + 16);
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
