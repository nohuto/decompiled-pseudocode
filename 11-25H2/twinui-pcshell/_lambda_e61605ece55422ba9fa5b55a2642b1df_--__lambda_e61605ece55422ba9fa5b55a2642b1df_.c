/*
 * XREFs of _lambda_e61605ece55422ba9fa5b55a2642b1df_::__lambda_e61605ece55422ba9fa5b55a2642b1df_ @ 0x1805CF0D4
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___::_implements_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___ @ 0x1805CF234 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncActionCompletedHandler__lambda.c)
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805D24AC (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ShowMACFlyout_::_1_::dtor$16 @ 0x1806D74F7 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--ShowMACFlyout_ea_1806D74F7.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1ShowFlyout@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805CF43C (--1ShowFlyout@MeetAndChatTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_e61605ece55422ba9fa5b55a2642b1df_::__lambda_e61605ece55422ba9fa5b55a2642b1df_(__int64 *a1)
{
  MeetAndChatTelemetry::ShowFlyout::~ShowFlyout((MeetAndChatTelemetry::ShowFlyout *)(a1 + 1));
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
