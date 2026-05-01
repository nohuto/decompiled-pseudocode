/*
 * XREFs of wil::details::ScopeExitFn__lambda_2a9e0a7dd9133e37589162ae9468c05b___::_ScopeExitFn__lambda_2a9e0a7dd9133e37589162ae9468c05b___ @ 0x18058A3CC
 * Callers:
 *     _HotkeyHandler::HandleHotkey_::_1_::dtor$1 @ 0x1806D04ED (_HotkeyHandler--HandleHotkey_--_1_--dtor$1.c)
 * Callees:
 *     ?_ResetState@HotkeyHandler@@AEAAXXZ @ 0x18058D320 (-_ResetState@HotkeyHandler@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_2a9e0a7dd9133e37589162ae9468c05b___::_ScopeExitFn__lambda_2a9e0a7dd9133e37589162ae9468c05b___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    HotkeyHandler::_ResetState(*(HotkeyHandler **)a1);
  }
}
