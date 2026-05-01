/*
 * XREFs of ??_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805CE098
 * Callers:
 *     ??_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@WBA@EAAPEAXI@Z @ 0x1805CDF00 (--_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E5AB0 (--1DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardActivator *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardActivator::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this,
        char a2)
{
  winrt::Windows::Internal::Shell::implementation::DashboardActivator::~DashboardActivator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
