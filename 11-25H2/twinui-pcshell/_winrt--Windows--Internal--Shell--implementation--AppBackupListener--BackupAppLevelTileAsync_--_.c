/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::dtor$0 @ 0x1806AB5C9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 320));
}
