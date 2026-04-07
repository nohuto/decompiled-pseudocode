/*
 * XREFs of wil::details::lambda_call__lambda_9386b12ae35c35732eac3f1b7854206a___::_lambda_call__lambda_9386b12ae35c35732eac3f1b7854206a___ @ 0x1800D0898
 * Callers:
 *     _CTopLevelWindow3D::StartMinimizeAnimationForDisplayChange_::_1_::dtor$0 @ 0x1800ED247 (_CTopLevelWindow3D--StartMinimizeAnimationForDisplayChange_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_9386b12ae35c35732eac3f1b7854206a___::_lambda_call__lambda_9386b12ae35c35732eac3f1b7854206a___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 569) = 0;
  }
  return result;
}
