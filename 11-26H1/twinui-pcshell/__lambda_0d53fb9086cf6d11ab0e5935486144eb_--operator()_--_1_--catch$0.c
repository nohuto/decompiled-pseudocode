/*
 * XREFs of __lambda_0d53fb9086cf6d11ab0e5935486144eb_::operator()_::_1_::catch$0 @ 0x1807011D1
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802D7AF0 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 *     ??$Callback_Error@AEAY0DJ@$$CBGUhresult@winrt@@AEAY00$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0DJ@$$CBG$$QEAUhresult@winrt@@AEAY00$$CBG@Z @ 0x180610F68 (--$Callback_Error@AEAY0DJ@$$CBGUhresult@winrt@@AEAY00$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0.c)
 */

__int64 __fastcall _lambda_0d53fb9086cf6d11ab0e5935486144eb_::operator()_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v2 = winrt::to_hresult((_DWORD *)(a2 + 56));
  CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[57],winrt::hresult,unsigned short const (&)[1]>(
    v3,
    v2,
    v4);
  return 0LL;
}
