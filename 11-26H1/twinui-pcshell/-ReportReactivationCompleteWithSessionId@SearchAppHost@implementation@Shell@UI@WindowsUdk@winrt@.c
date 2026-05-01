/*
 * XREFs of ?ReportReactivationCompleteWithSessionId@SearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@QEAAXUhstring@6@@Z @ 0x1801FAA04
 * Callers:
 *     ?ReportReactivationCompleteWithSessionId@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost4@3456@@impl@winrt@@UEAAHPEAX@Z @ 0x1801FA9B0 (-ReportReactivationCompleteWithSessionId@-$produce@USearchAppHost@implementation@Shell@UI@Window.c)
 * Callees:
 *     ??$?RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@?$event@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSearchAppHost@implementation@Shell@UI@WindowsUdk@1@AEBUhstring@1@@Z @ 0x1800DC970 (--$-RUSearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@-$event@U-$TypedEventH.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost::ReportReactivationCompleteWithSessionId(
        __int64 a1,
        volatile signed __int32 **a2)
{
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>::operator()<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost,winrt::hstring>(
    a1 + 104,
    a1,
    (__int64)a2);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
}
