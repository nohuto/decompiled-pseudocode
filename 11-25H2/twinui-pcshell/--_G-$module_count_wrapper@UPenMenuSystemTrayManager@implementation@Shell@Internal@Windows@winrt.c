/*
 * XREFs of ??_G?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1803E0D30
 * Callers:
 *     ??_E?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WCI@EAAPEAXI@Z @ 0x1803E0D10 (--_E-$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1803E0C4C (--1-$module_count_wrapper@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@.c)
 */

winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x98);
  return a1;
}
