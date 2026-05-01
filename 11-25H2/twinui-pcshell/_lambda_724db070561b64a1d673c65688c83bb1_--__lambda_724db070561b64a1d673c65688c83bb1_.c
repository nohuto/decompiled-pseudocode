/*
 * XREFs of _lambda_724db070561b64a1d673c65688c83bb1_::__lambda_724db070561b64a1d673c65688c83bb1_ @ 0x1805CF0A4
 * Callers:
 *     winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___ @ 0x1805CD0C8 (winrt--Windows--Foundation--AsyncOperationWithProgressCompletedHandler_winrt--Windows--Internal-.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___::_implements_delegate_winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___ @ 0x1805CF208 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationWithProgressCompleted.c)
 *     _winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1____::_1_::dtor$0 @ 0x1806D6F26 (_winrt--Windows--Foundation--AsyncOperationWithProgressCompletedHandler_winrt--Windows--Internal.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805CF468 (--1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_724db070561b64a1d673c65688c83bb1_::__lambda_724db070561b64a1d673c65688c83bb1_(__int64 *a1)
{
  MeetAndChatTelemetry::UserInitiatedInstall::~UserInitiatedInstall((MeetAndChatTelemetry::UserInitiatedInstall *)(a1 + 1));
  if ( *a1 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
}
