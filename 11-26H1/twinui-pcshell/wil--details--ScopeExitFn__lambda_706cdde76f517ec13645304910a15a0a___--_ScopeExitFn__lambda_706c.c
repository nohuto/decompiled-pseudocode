/*
 * XREFs of wil::details::ScopeExitFn__lambda_706cdde76f517ec13645304910a15a0a___::_ScopeExitFn__lambda_706cdde76f517ec13645304910a15a0a___ @ 0x1802B4BE4
 * Callers:
 *     _XamlLauncherState::OnSessionBecameIdle_::_1_::dtor$0 @ 0x1806DA1C5 (_XamlLauncherState--OnSessionBecameIdle_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnSessionBecameIdle@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180225754 (--$OnSessionBecameIdle@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_706cdde76f517ec13645304910a15a0a___::_ScopeExitFn__lambda_706cdde76f517ec13645304910a15a0a___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnSessionBecameIdle<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
