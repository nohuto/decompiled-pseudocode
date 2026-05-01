/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___::_implements_delegate_winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___ @ 0x1805CF1D8
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___::Release @ 0x1805D1F60 (winrt--impl--implements_delegate_winrt--Windows--Foundation--AsyncOperationProgress_ea_1805D1F60.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x1800E9F14 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___::_implements_delegate_winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___(
        __int64 a1)
{
  __int64 result; // rax

  result = winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  if ( *(_QWORD *)(a1 + 16) )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)(a1 + 16));
  return result;
}
