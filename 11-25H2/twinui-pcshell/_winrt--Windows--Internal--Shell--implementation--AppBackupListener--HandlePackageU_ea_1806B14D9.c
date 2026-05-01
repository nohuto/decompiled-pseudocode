/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::catch$30 @ 0x1806B14D9
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802DEE08 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$Callback_Error@AEAY0DI@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0DI@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x1805EC25C (--$Callback_Error@AEAY0DI@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0DI@$$CB.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageUninstallEvent_::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx

  *(_QWORD *)(a2 + 56) = winrt::hstring::c_str((winrt::hstring *)(a2 + 48));
  v3 = winrt::to_hresult((_DWORD *)(a2 + 168));
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[56],winrt::hresult,unsigned short const *>(
    v4,
    v3,
    (__int64 *)(a2 + 56));
  return 0LL;
}
