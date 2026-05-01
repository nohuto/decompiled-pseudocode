/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted_::_1_::catch$24 @ 0x1806B71FA
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DEE08 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$TriggerCompatBackupIfUserJsonImpacted_Error@AEAY0EH@$$CBGUhresult@winrt@@PEBGAEA_N@CAppBackupListenerTelemetry@@SAXAEAY0EH@$$CBG$$QEAUhresult@winrt@@$$QEAPEBGAEA_N@Z @ 0x1805EC8DC (--$TriggerCompatBackupIfUserJsonImpacted_Error@AEAY0EH@$$CBGUhresult@winrt@@PEBGAEA_N@CAppBackup.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::TriggerCompatBackupIfUserJsonImpacted_::_1_::catch_24(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  int *v4; // rax
  __int64 v5; // rcx

  v3 = a2 + 112;
  if ( *(_QWORD *)(a2 + 136) > 7uLL )
    v3 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a2 + 80) = v3;
  v4 = winrt::to_hresult((_DWORD *)(a2 + 72));
  CAppBackupListenerTelemetry::TriggerCompatBackupIfUserJsonImpacted_Error<unsigned short const (&)[71],winrt::hresult,unsigned short const *,bool &>(
    v5,
    v4,
    (__int64 *)(a2 + 80));
  return 0LL;
}
