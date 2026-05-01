/*
 * XREFs of wil::details::ScopeExitFn__lambda_1a1b69572b2427e301e3b5ddb63e16dd___::_ScopeExitFn__lambda_1a1b69572b2427e301e3b5ddb63e16dd___ @ 0x1801E25F8
 * Callers:
 *     _XamlLauncherState::OnCortanaHidden_::_1_::dtor$0 @ 0x1806DAA75 (_XamlLauncherState--OnCortanaHidden_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801E26C0 (--$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_1a1b69572b2427e301e3b5ddb63e16dd___::_ScopeExitFn__lambda_1a1b69572b2427e301e3b5ddb63e16dd___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
