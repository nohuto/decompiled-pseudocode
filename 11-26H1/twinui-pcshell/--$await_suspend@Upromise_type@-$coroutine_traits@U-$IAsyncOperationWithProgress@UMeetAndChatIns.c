/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@@signal_awaiter@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1805F1ED4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1805F5640 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurrentUserAsync$.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::impl::signal_awaiter::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r9

  v2 = (a2 - 96) & -(__int64)(a2 != 128);
  if ( *(_BYTE *)(v2 + 0x10) )
  {
    *a1 = v2;
    *(_QWORD *)(((a2 - 96) & -(__int64)(a2 != 128)) + 8) = a1;
    *(_QWORD *)v2 = _lambda_535fe0d4889b9fd58d63caa6da13cd83_::_lambda_invoker_cdecl_;
  }
  a1[5] = a2;
  winrt::impl::signal_awaiter::create_threadpool_wait((winrt::impl::signal_awaiter *)a1);
}
