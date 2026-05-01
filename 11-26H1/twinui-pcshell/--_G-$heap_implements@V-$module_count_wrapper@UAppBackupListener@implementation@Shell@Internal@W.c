/*
 * XREFs of ??_G?$heap_implements@V?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@UEAAPEAXI@Z @ 0x180612D20
 * Callers:
 *     ??_E?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@WCA@EAAPEAXI@Z @ 0x180612C00 (--_E-$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@deta.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180612588 (--1-$module_count_wrapper@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@detai.c)
 */

winrt::Windows::Internal::Shell::implementation::AppBackupListener *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>>::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *a1,
        char a2)
{
  wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::AppBackupListener>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x220);
  return a1;
}
