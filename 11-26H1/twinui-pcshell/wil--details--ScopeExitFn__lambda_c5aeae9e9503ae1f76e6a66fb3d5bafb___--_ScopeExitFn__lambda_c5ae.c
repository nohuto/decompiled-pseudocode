/*
 * XREFs of wil::details::ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___::_ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___ @ 0x1802C40B8
 * Callers:
 *     _XamlLauncherState::ShowSearchFromOpenStart_::_1_::dtor$0 @ 0x1806EE6BE (_XamlLauncherState--ShowSearchFromOpenStart_--_1_--dtor$0.c)
 * Callees:
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180460070 (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___::_ScopeExitFn__lambda_c5aeae9e9503ae1f76e6a66fb3d5bafb___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
