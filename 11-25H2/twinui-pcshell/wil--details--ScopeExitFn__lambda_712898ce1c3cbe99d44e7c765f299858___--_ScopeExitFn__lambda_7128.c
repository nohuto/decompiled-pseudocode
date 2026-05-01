/*
 * XREFs of wil::details::ScopeExitFn__lambda_712898ce1c3cbe99d44e7c765f299858___::_ScopeExitFn__lambda_712898ce1c3cbe99d44e7c765f299858___ @ 0x180453C5C
 * Callers:
 *     _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::dtor$1 @ 0x1806C67FE (_XamlLauncherState--OnCortanaFailedToGetForeground_--_1_--dtor$1.c)
 * Callees:
 *     ??$OnCortanaFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@Z @ 0x18045323C (--$OnCortanaFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindow.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_712898ce1c3cbe99d44e7c765f299858___::_ScopeExitFn__lambda_712898ce1c3cbe99d44e7c765f299858___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return StartWindowTelemetry::OnCortanaFailedToGetForeground<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &,long const &>(
             (_DWORD *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL),
             (int *)(a1 + 16));
  }
  return result;
}
