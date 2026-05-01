/*
 * XREFs of _lambda_cab7c03a2b5ac7190be81e45414ea272_::_lambda_cab7c03a2b5ac7190be81e45414ea272_ @ 0x1804A2C60
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x1804A3304 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_cab7c03a2b5ac7190be81e45414ea272_::_lambda_cab7c03a2b5ac7190be81e45414ea272_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *result; // rax

  a1[3] = a5;
  a1[4] = a6;
  a1[5] = a7;
  a1[6] = a8;
  result = a1;
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return result;
}
