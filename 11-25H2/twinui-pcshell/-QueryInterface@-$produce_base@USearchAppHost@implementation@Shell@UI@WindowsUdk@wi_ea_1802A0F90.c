/*
 * XREFs of ?QueryInterface@?$produce_base@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802A0F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,void>::QueryInterface(
        __int64 a1)
{
  return winrt::implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::WindowsUdk::UI::Shell::ISearchAppHost2,winrt::WindowsUdk::UI::Shell::ISearchAppHost3,winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::QueryInterface((a1 - 40) & -(__int64)(a1 != 0));
}
