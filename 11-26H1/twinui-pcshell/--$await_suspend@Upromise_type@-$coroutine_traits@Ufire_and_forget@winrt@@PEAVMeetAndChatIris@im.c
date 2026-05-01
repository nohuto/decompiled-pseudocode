/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@@experimental@std@@@Z @ 0x1805FD770
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage$_ResumeCoro$1 @ 0x1805FE6A0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--ReportMeetAndChatUsage$_Resume.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,enum winrt::Windows::Internal::Shell::MeetAndChatUsageType>::promise_type>()
{
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>,1>::register_completed_callback();
}
