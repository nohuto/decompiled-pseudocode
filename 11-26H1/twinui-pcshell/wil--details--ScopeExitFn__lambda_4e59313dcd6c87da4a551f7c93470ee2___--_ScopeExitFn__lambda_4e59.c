/*
 * XREFs of wil::details::ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___::_ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___ @ 0x1801E8CB8
 * Callers:
 *     _XamlLauncherState::OnCortanaDismissRequested_::_1_::dtor$0 @ 0x1806DAFFE (_XamlLauncherState--OnCortanaDismissRequested_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801E8D7C (--$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___::_ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaDismissRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
