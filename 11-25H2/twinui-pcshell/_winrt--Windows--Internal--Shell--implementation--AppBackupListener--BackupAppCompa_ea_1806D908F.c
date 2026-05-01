/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch$49 @ 0x1806D908F
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DEE08 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$CompatInfoBackup_Error@AEAY0CK@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CK@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x1805EC4DC (--$CompatInfoBackup_Error@AEAY0CK@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch_49(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rcx

  v3 = a2 + 592;
  if ( *(_QWORD *)(a2 + 616) > 7uLL )
    v3 = *(_QWORD *)(a2 + 592);
  *(_QWORD *)(a2 + 48) = v3;
  v4 = winrt::to_hresult((_DWORD *)(a2 + 56));
  CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[42],winrt::hresult,unsigned short const *>(
    v5,
    v4,
    (__int64 *)(a2 + 48));
  return 0LL;
}
