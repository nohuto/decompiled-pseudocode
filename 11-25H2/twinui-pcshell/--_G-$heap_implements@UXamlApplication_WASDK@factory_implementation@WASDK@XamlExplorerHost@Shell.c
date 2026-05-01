/*
 * XREFs of ??_G?$heap_implements@UXamlApplication_WASDK@factory_implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1804465F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1MeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180446310 (--1MeetAndChatInstallStatus@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::factory_implementation::XamlApplication_WASDK>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus *Block,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::MeetAndChatInstallStatus::~MeetAndChatInstallStatus(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
