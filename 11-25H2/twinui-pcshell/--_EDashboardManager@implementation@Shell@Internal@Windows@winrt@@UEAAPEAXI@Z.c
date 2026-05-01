/*
 * XREFs of ??_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805A9E1C
 * Callers:
 *     ??_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z @ 0x1805A9CE0 (--_EDashboardManager@implementation@Shell@Internal@Windows@winrt@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805A8248 (--1DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardManager *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::DashboardManager::~DashboardManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
