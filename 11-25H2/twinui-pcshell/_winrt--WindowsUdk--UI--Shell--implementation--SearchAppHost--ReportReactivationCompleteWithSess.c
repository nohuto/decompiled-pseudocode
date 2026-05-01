/*
 * XREFs of _winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::ReportReactivationCompleteWithSessionId_::_1_::dtor$0 @ 0x1806AA416
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::ReportReactivationCompleteWithSessionId_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 56));
}
