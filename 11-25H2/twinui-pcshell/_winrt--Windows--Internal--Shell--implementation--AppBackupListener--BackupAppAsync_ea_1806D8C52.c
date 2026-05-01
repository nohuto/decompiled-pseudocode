/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1_::_1_::catch$11 @ 0x1806D8C52
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEAH$$QEAPEBG22@Z @ 0x1805EBB88 (--$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEA.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync__ResumeCoro_1_::_1_::catch_11(
        __int64 a1,
        __int64 a2)
{
  const unsigned __int16 *v3; // rax
  __int64 v4; // rdx
  const unsigned __int16 *v5; // rax
  __int64 v6; // rdx
  const unsigned __int16 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = winrt::hstring::c_str((winrt::hstring *)(*(_QWORD *)(a2 + 144) + 329LL));
  *(_QWORD *)(v4 + 256) = v3;
  v5 = winrt::hstring::c_str((winrt::hstring *)(v4 + 321));
  *(_QWORD *)(v6 + 264) = v5;
  v7 = winrt::hstring::c_str((winrt::hstring *)(v6 + 313));
  *(_QWORD *)(v8 + 272) = v7;
  v9 = *(unsigned int *)(*(_QWORD *)(a2 + 56) + 12LL);
  *(_DWORD *)(v8 + 280) = v9;
  CAppBackupListenerTelemetry::AppBackup_Error<unsigned short const (&)[43],int,unsigned short const *,unsigned short const *,unsigned short const *>(
    v9,
    (_DWORD *)(v8 + 280),
    (__int64 *)(v8 + 272),
    (__int64 *)(v8 + 264),
    (__int64 *)(v8 + 256));
  return 0LL;
}
