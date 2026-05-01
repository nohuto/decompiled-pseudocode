/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageInstallEvent_::_1_::catch$24 @ 0x1806CDB03
 * Callers:
 *     <none>
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802D7AF0 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$Callback_Error@AEAY0DG@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0DG@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x180610E20 (--$Callback_Error@AEAY0DG@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0DG@$$CB.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageInstallEvent_::_1_::catch_24(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rcx

  *(_QWORD *)(a2 + 56) = winrt::hstring::c_str((winrt::hstring *)(a2 + 32));
  v3 = winrt::to_hresult((_DWORD *)(a2 + 152));
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[54],winrt::hresult,unsigned short const *>(
    v4,
    v3,
    (__int64 *)(a2 + 56));
  return 0LL;
}
