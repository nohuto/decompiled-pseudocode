/*
 * XREFs of ??_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805F5F88
 * Callers:
 *     ??_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z @ 0x1805F5F00 (--_EDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805F58B8 (--1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *__fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::~DiscoverabilityManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x210);
  return this;
}
