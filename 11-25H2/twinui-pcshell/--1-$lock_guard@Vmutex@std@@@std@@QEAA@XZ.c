/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x180214480
 * Callers:
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$3 @ 0x1806A695D (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$3.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterUTMListeners_::_1_::dtor$11 @ 0x1806A9C35 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegisterUTMLis_ea_1806A9C35.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor$5 @ 0x1806B1D40 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasD_ea_1806B1D40.c)
 *     _StartupAppMonitor::UpdateNotificationMap_::_1_::dtor$1 @ 0x1806B6F63 (_StartupAppMonitor--UpdateNotificationMap_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806D5219 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTe_ea_1806D5219.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806D9510 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_R_ea_1806D9510.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
