/*
 * XREFs of wil::details::ScopeExitFn__lambda_557533e1077ddeee944c0bcfbf919c05___::_ScopeExitFn__lambda_557533e1077ddeee944c0bcfbf919c05___ @ 0x1802AA638
 * Callers:
 *     _XamlLauncherState::OnCortanaLaunchResult_::_1_::dtor$0 @ 0x1806C6883 (_XamlLauncherState--OnCortanaLaunchResult_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@Z @ 0x180230EC4 (--$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry.c)
 */

int __fastcall wil::details::ScopeExitFn__lambda_557533e1077ddeee944c0bcfbf919c05___::_ScopeExitFn__lambda_557533e1077ddeee944c0bcfbf919c05___(
        __int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return StartWindowTelemetry::OnCortanaLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &,long const &>(
             (_DWORD *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL),
             (int *)(a1 + 16));
  }
  return result;
}
