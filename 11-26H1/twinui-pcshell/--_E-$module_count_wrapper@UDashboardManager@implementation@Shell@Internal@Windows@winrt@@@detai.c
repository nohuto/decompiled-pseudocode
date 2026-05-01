/*
 * XREFs of ??_E?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x180217250
 * Callers:
 *     ??_E?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WDI@EAAPEAXI@Z @ 0x1805CDEF0 (--_E-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@_ea_1805CDEF0.c)
 * Callees:
 *     ??1?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1802B8F6C (--1-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@detail.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::DashboardManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x158);
  return a1;
}
