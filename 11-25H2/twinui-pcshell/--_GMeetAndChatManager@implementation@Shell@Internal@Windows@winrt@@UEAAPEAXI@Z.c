/*
 * XREFs of ??_GMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805CF80C
 * Callers:
 *     ??_EMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@WDA@EAAPEAXI@Z @ 0x1805CF740 (--_EMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805CF378 (--1MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *__fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::~MeetAndChatManager(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
