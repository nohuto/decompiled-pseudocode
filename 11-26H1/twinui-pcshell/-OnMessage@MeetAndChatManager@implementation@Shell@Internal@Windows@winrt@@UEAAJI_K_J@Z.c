/*
 * XREFs of ?OnMessage@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x1802120B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ @ 0x1805F5FDC (-IsMaCDisabledForDevice@MeetAndChatHelpers@@YA_NXZ.c)
 *     ?ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805F7E74 (-ToggleFlyoutVisibility@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4L.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::OnMessage(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        __int64 a2,
        int a3)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 == 107 && !MeetAndChatHelpers::IsMaCDisabledForDevice(this) )
  {
    try
    {
      winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::ToggleFlyoutVisibility(this);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x174,
                             (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
                             v4);
    }
  }
  return 0LL;
}
