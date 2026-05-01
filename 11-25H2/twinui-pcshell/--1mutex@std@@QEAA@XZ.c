/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x1802C6D60
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::DashboardManager_::_1_::dtor$9 @ 0x1806B5DEE (_winrt--Windows--Internal--Shell--implementation--DashboardManager--DashboardManage_ea_1806B5DEE.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$14 @ 0x1806D8AF1 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_1806D8AF1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
