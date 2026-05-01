/*
 * XREFs of ??_EImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18063ADCC
 * Callers:
 *     ??_EImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z @ 0x18063AD80 (--_EImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18063AD2C (--1ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *__fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::~ImeContextMenuManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
