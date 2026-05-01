/*
 * XREFs of wil::details::ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___::_ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___ @ 0x180460978
 * Callers:
 *     _XamlLauncherState::Show_::_1_::dtor$0 @ 0x1806EE6AC (_XamlLauncherState--Show_--_1_--dtor$0.c)
 * Callees:
 *     ??$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18045FFF8 (--$ShowCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___::_ScopeExitFn__lambda_36768c68b7a52607c94210d908d64ff1___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ShowCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
