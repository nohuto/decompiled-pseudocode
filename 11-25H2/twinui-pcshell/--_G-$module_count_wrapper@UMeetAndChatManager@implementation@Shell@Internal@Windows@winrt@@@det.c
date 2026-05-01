/*
 * XREFs of ??_G?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1805CF78C
 * Callers:
 *     ??_E?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WDA@EAAPEAXI@Z @ 0x1805CF720 (--_E-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@det.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1805CF2BC (--1-$module_count_wrapper@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@@deta.c)
 */

winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x128);
  return a1;
}
