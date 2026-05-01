/*
 * XREFs of wil::details::ScopeExitFn__lambda_62b20926283e733a684ec554e5fd09ff___::_ScopeExitFn__lambda_62b20926283e733a684ec554e5fd09ff___ @ 0x18009926C
 * Callers:
 *     _XamlLauncherState::OnSessionBecameActive_::_1_::dtor$0 @ 0x1806DA1B3 (_XamlLauncherState--OnSessionBecameActive_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180099158 (--$OnSessionBecameActive@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SA.c)
 */

int __fastcall wil::details::ScopeExitFn__lambda_62b20926283e733a684ec554e5fd09ff___::_ScopeExitFn__lambda_62b20926283e733a684ec554e5fd09ff___(
        __int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnSessionBecameActive<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
