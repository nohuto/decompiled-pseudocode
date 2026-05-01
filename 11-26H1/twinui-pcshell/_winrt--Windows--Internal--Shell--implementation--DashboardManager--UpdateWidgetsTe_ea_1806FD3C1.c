/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806FD3C1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x180206D10 (--1-$lock_guard@Vmutex@std@@@std@@QEAA@XZ.c)
 */

int __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync__ResumeCoro_1_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 304) = *(_QWORD *)(a2 + 120) + 96LL;
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>(*(_Mtx_t **)(a2 + 304));
}
