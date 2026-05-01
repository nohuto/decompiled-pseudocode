/*
 * XREFs of wil::details::ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___::_ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___ @ 0x1800999B8
 * Callers:
 *     _XamlLauncherState::OnStartLaunchResult_::_1_::dtor$0 @ 0x1806EE69A (_XamlLauncherState--OnStartLaunchResult_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@Z @ 0x1800991D4 (--$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@.c)
 */

int __fastcall wil::details::ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___::_ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___(
        __int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return StartWindowTelemetry::OnStartLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &,long const &>(
             (_DWORD *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL),
             (int *)(a1 + 16));
  }
  return result;
}
