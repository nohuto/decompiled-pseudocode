/*
 * XREFs of _winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_winrt::WindowsUdk::UI::Shell::ISearchAppHost4_::ReportReactivationCompleteWithSessionId_::_1_::catch$3 @ 0x1806AA3E4
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DEE08 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost_winrt::WindowsUdk::UI::Shell::ISearchAppHost4_::ReportReactivationCompleteWithSessionId_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = *winrt::to_hresult((_DWORD *)(a2 + 48));
  return 0LL;
}
