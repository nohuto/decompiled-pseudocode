/*
 * XREFs of _CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::_lambda_1_ @ 0x18020897C
 * Callers:
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x1802088B0 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::_lambda_1_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *result; // rax

  a1[3] = a5;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
