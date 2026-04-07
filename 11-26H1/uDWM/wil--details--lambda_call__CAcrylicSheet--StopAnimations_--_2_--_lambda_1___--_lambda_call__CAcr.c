/*
 * XREFs of wil::details::lambda_call__CAcrylicSheet::StopAnimations_::_2_::_lambda_1___::_lambda_call__CAcrylicSheet::StopAnimations_::_2_::_lambda_1___ @ 0x18008D7E0
 * Callers:
 *     _CAcrylicSheet::StopAnimations_::_1_::dtor$0 @ 0x1800E7C8F (_CAcrylicSheet--StopAnimations_--_1_--dtor$0.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x18005E680 (-UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 */

__int64 __fastcall wil::details::lambda_call__CAcrylicSheet::StopAnimations_::_2_::_lambda_1___::_lambda_call__CAcrylicSheet::StopAnimations_::_2_::_lambda_1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CAcrylicSheet::UnRegisterGlobalTimer(*(CAcrylicSheet **)a1);
  }
  return result;
}
