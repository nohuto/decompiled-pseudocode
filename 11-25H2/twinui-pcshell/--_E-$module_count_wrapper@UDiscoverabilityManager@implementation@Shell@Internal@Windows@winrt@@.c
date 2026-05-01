/*
 * XREFs of ??_E?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1805F5F4C
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WDI@EAAPEAXI@Z @ 0x1805F5EF0 (--_E-$heap_implements@V-$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Inter.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1805F57A8 (--1-$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 */

winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x210);
  return a1;
}
