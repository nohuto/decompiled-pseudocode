/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch$62 @ 0x1807016D3
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802D7AF0 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$CompatInfoBackup_Error@AEAY0CO@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0CO@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x1806111E8 (--$CompatInfoBackup_Error@AEAY0CO@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::catch_62(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rcx

  v3 = a2 + 384;
  if ( *(_QWORD *)(a2 + 408) > 7uLL )
    v3 = *(_QWORD *)(a2 + 384);
  *(_QWORD *)(a2 + 48) = v3;
  v4 = winrt::to_hresult((_DWORD *)(a2 + 64));
  CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[46],winrt::hresult,unsigned short const *>(
    v5,
    v4,
    (__int64 *)(a2 + 48));
  return 0LL;
}
