/*
 * XREFs of ??_GPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1803E9FEC
 * Callers:
 *     ??_EPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z @ 0x1803E9FA0 (--_EPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1803E9F34 (--1PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *__fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::~PenMenuSystemTrayManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
