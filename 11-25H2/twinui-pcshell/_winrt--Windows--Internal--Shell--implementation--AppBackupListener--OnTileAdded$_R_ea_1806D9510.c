/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806D9510
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x180214480 (--1-$lock_guard@Vmutex@std@@@std@@QEAA@XZ.c)
 */

int __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__ResumeCoro_1_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 224) + 144LL;
  return std::lock_guard<std::mutex>::~lock_guard<std::mutex>(*(_Mtx_t **)(a2 + 144));
}
