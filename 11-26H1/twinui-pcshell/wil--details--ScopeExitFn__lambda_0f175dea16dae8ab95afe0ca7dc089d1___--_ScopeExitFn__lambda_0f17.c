/*
 * XREFs of wil::details::ScopeExitFn__lambda_0f175dea16dae8ab95afe0ca7dc089d1___::_ScopeExitFn__lambda_0f175dea16dae8ab95afe0ca7dc089d1___ @ 0x1802C3CC0
 * Callers:
 *     _XamlLauncherState::OnStartDestroyed_::_1_::dtor$0 @ 0x1806EE664 (_XamlLauncherState--OnStartDestroyed_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180211160 (--$OnStartDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_0f175dea16dae8ab95afe0ca7dc089d1___::_ScopeExitFn__lambda_0f175dea16dae8ab95afe0ca7dc089d1___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
