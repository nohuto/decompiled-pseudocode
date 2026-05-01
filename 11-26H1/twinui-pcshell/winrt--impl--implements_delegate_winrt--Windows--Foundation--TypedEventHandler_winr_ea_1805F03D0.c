/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::Release @ 0x1805F03D0
 * Callers:
 *     <none>
 * Callees:
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x180287CD8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___ @ 0x1805EE1EC (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_1805EE1EC.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::Release(
        volatile signed __int32 *Block)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(Block + 2);
  if ( !v2 && Block )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastFailedEventArgs___lambda_71950cc72dd496f648a731e978b853d5___((__int64)Block);
    operator delete((void *)Block);
  }
  return v2;
}
