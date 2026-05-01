/*
 * XREFs of wil::details::ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___::_ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___ @ 0x1802C4610
 * Callers:
 *     _XamlLauncherState::OnStartShown_::_1_::dtor$1 @ 0x1806D091A (_XamlLauncherState--OnStartShown_--_1_--dtor$1.c)
 * Callees:
 *     ??$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1800770F8 (--$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Int.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___::_ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
