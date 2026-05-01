/*
 * XREFs of ??_GMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1801EF750
 * Callers:
 *     ??_E?$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@W7EAAPEAXI@Z @ 0x1805F3E80 (--_E-$heap_implements@VMeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@.c)
 * Callees:
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801EF78C (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::~MeetAndChatIris(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
