/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::Invoke @ 0x180220D00
 * Callers:
 *     <none>
 * Callees:
 *     ?DecrementDeferralCount@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXXZ @ 0x180220D24 (-DecrementDeferralCount@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AE.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::Invoke(
        __int64 a1)
{
  winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::DecrementDeferralCount(*(winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs **)(a1 + 16));
  return 0LL;
}
