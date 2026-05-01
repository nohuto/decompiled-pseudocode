/*
 * XREFs of ??_E?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1801F6654
 * Callers:
 *     ??_E?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WCI@EAAPEAXI@Z @ 0x180639400 (--_E-$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Win_ea_180639400.c)
 * Callees:
 *     ??1?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1801F6690 (--1-$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>::`vector deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x130);
  return a1;
}
