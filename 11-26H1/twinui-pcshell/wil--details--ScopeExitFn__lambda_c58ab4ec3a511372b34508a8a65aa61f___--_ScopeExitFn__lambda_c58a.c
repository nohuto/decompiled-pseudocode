/*
 * XREFs of wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::_ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___ @ 0x1802C4320
 * Callers:
 *     _XamlLauncherState::OnCortanaTransitionRequested_::_1_::dtor$0 @ 0x1806EE652 (_XamlLauncherState--OnCortanaTransitionRequested_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18045FB88 (--$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___::_ScopeExitFn__lambda_c58ab4ec3a511372b34508a8a65aa61f___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaTransitionRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
