/*
 * XREFs of wil::details::lambda_call__CTopLevelWindow::CreateWindowTarget_::_15_::_lambda_1___::_lambda_call__CTopLevelWindow::CreateWindowTarget_::_15_::_lambda_1___ @ 0x1800CAD90
 * Callers:
 *     _CTopLevelWindow::CreateWindowTarget_::_1_::dtor$0 @ 0x1800E919B (_CTopLevelWindow--CreateWindowTarget_--_1_--dtor$0.c)
 * Callees:
 *     ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800CB02C (-DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 */

__int64 __fastcall wil::details::lambda_call__CTopLevelWindow::CreateWindowTarget_::_15_::_lambda_1___::_lambda_call__CTopLevelWindow::CreateWindowTarget_::_15_::_lambda_1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CTopLevelWindow::DestroyWindowTarget(*(CTopLevelWindow **)a1);
  }
  return result;
}
