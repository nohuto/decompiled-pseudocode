/*
 * XREFs of ??_E?$heap_implements@V?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x180619C4C
 * Callers:
 *     ??_E?$heap_implements@V?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@WCA@EAAPEAXI@Z @ 0x180619B70 (--_E-$heap_implements@V-$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Wi.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180618ED0 (--1-$module_count_wrapper@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@detail.c)
 */

winrt::Windows::Internal::Shell::implementation::CloudPCComponent *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x98);
  return a1;
}
