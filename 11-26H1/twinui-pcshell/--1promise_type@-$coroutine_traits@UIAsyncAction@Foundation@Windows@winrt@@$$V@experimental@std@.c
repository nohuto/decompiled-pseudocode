/*
 * XREFs of ??1promise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UEAA@XZ @ 0x180452A84
 * Callers:
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK_::_1_::dtor$1 @ 0x1806ED9C4 (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtSh_ea_1806ED9C4.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync_::_1_::dtor$1 @ 0x1806FD906 (_winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent_::_1_::dtor$1 @ 0x1806FDA29 (_winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent_--_1_--dtor$1.c)
 *     _TaskViewFrame::UpdateWorkAreaAsync_::_1_::dtor$1 @ 0x1807083AA (_TaskViewFrame--UpdateWorkAreaAsync_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type::~promise_type(
        __int64 *a1)
{
  return winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1);
}
