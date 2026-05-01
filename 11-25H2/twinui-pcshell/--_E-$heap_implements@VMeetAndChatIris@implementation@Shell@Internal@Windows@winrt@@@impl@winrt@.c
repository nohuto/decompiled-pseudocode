/*
 * XREFs of ??_E?$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801F9900
 * Callers:
 *     ??_E?$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@W7EAAPEAXI@Z @ 0x1805CF730 (--_E-$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@_ea_1805CF730.c)
 * Callees:
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801F993C (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *__fastcall winrt::impl::heap_implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatIris>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *a1,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::~MeetAndChatIris(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x90);
  return a1;
}
