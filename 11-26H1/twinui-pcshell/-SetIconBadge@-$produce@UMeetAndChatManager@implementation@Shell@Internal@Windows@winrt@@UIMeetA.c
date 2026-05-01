/*
 * XREFs of ?SetIconBadge@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x1805F6C50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1805F6C84 (-SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::IMeetAndChatManager>::SetIconBadge(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = a3;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SetIconBadge(
    (winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)((a1 - 8) & -(__int64)(a1 != 0)),
    a2,
    (const struct winrt::hstring *)&v4);
  return 0LL;
}
