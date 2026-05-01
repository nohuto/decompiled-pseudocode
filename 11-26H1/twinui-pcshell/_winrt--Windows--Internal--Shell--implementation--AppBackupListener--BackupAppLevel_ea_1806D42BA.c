/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::catch$48 @ 0x1806D42BA
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$AppLevelTileBackup_Error@AEAY0CJ@$$CBGHPEAGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CJ@$$CBG$$QEAH$$QEAPEAG$$QEAPEBG@Z @ 0x1806108D4 (--$AppLevelTileBackup_Error@AEAY0CJ@$$CBGHPEAGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CJ@$$CBG.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::catch_48(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  *(_QWORD *)(a2 + 280) = winrt::hstring::c_str(*(winrt::hstring **)(a2 + 272));
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56);
  v3 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 12LL);
  *(_DWORD *)(a2 + 256) = v3;
  CAppBackupListenerTelemetry::AppLevelTileBackup_Error<unsigned short const (&)[41],int,unsigned short *,unsigned short const *>(
    v3,
    (_DWORD *)(a2 + 256),
    (__int64 *)(a2 + 64),
    (__int64 *)(a2 + 280));
  return 0LL;
}
