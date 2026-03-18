/*
 * XREFs of _lambda_b92d923974d1229c2f7b920661264967_::_lambda_b92d923974d1229c2f7b920661264967_ @ 0x1401B3C54
 * Callers:
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401B863C (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_b92d923974d1229c2f7b920661264967_::_lambda_b92d923974d1229c2f7b920661264967_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
