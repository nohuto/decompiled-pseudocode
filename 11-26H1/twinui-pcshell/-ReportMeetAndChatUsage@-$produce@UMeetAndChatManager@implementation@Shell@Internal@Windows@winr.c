/*
 * XREFs of ?ReportMeetAndChatUsage@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHH@Z @ 0x1805F6C10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportMeetAndChatUsage@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@W4MeetAndChatUsageType@3456@@Z @ 0x1805FE87C (-ReportMeetAndChatUsage@MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire.c)
 */

__int64 winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::ReportMeetAndChatUsage()
{
  __int64 result; // rax
  int v1; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::ReportMeetAndChatUsage();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v1);
  }
  return result;
}
