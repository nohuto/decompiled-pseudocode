/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync_::_1_::catch$11 @ 0x18070162E
 * Callers:
 *     <none>
 * Callees:
 *     ??$CompatInfoBackup_Error@AEAY0CG@$$CBGHPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CG@$$CBG$$QEAH$$QEAPEBG@Z @ 0x1806110A0 (--$CompatInfoBackup_Error@AEAY0CG@$$CBGHPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CG@$$CBG$$QEAH.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync_::_1_::catch_11(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  v2 = *(_QWORD **)(a2 + 184);
  if ( v2[3] > 7uLL )
    v2 = (_QWORD *)*v2;
  *(_QWORD *)(a2 + 192) = v2;
  v3 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 12LL);
  *(_DWORD *)(a2 + 176) = v3;
  CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[38],int,unsigned short const *>(
    v3,
    (_DWORD *)(a2 + 176),
    (__int64 *)(a2 + 192));
  return 0LL;
}
