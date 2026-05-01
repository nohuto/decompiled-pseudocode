/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::catch$48 @ 0x1806AB6EF
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$AppLevelTileBackup_Error@AEAY0CJ@$$CBGHPEAGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CJ@$$CBG$$QEAH$$QEAPEAG$$QEAPEBG@Z @ 0x1805EBC6C (--$AppLevelTileBackup_Error@AEAY0CJ@$$CBGHPEAGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CJ@$$CBG.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::catch_48(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  *(_QWORD *)(a2 + 64) = winrt::hstring::c_str(*(winrt::hstring **)(a2 + 320));
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 48);
  v3 = *(unsigned int *)(*(_QWORD *)(a2 + 200) + 12LL);
  *(_DWORD *)(a2 + 304) = v3;
  CAppBackupListenerTelemetry::AppLevelTileBackup_Error<unsigned short const (&)[41],int,unsigned short *,unsigned short const *>(
    v3,
    (_DWORD *)(a2 + 304),
    (__int64 *)(a2 + 56),
    (__int64 *)(a2 + 64));
  return 0LL;
}
