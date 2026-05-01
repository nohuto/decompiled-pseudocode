/*
 * XREFs of wil::details::ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___::_ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___ @ 0x1802C40E0
 * Callers:
 *     _XamlLauncherState::Toggle_::_1_::dtor$0 @ 0x1806EE750 (_XamlLauncherState--Toggle_--_1_--dtor$0.c)
 * Callees:
 *     ??$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1804604DC (--$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___::_ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
