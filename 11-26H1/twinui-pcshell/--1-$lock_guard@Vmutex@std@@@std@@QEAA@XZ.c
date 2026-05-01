/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x180206D10
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUTMListeners_::_1_::dtor$11 @ 0x1806CD403 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegisterUTMLis_ea_1806CD403.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled_::_1_::dtor$9 @ 0x1806CDC5B (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasU_ea_1806CDC5B.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$3 @ 0x1806CE024 (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$3.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor$5 @ 0x1806D966F (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasD_ea_1806D966F.c)
 *     _StartupAppMonitor::UpdateNotificationMap_::_1_::dtor$1 @ 0x1806DDFDF (_StartupAppMonitor--UpdateNotificationMap_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806FD3C1 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTe_ea_1806FD3C1.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1_::_1_::dtor$11 @ 0x180701BC5 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_R_ea_180701BC5.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
