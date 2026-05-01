/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::__parameters_ @ 0x180295D28
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1 @ 0x1805EE2C0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1806D8C06 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync$_InitCoro$2_.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync_::_10_::_parameters_::__parameters_(
        volatile signed __int32 **a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 3);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 2);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1);
}
