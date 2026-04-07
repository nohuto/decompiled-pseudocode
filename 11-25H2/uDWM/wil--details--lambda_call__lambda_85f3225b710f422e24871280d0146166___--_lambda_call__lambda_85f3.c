/*
 * XREFs of wil::details::lambda_call__lambda_85f3225b710f422e24871280d0146166___::_lambda_call__lambda_85f3225b710f422e24871280d0146166___ @ 0x1800CFA1C
 * Callers:
 *     _CTopLevelWindow::CreateWindowTarget_::_1_::dtor$0 @ 0x1800ED235 (_CTopLevelWindow--CreateWindowTarget_--_1_--dtor$0.c)
 * Callees:
 *     ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x1800CFE00 (-DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_85f3225b710f422e24871280d0146166___::_lambda_call__lambda_85f3225b710f422e24871280d0146166___(
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
