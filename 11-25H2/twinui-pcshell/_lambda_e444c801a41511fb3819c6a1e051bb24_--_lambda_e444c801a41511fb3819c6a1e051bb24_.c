/*
 * XREFs of _lambda_e444c801a41511fb3819c6a1e051bb24_::_lambda_e444c801a41511fb3819c6a1e051bb24_ @ 0x1805BEC54
 * Callers:
 *     _anonymous_namespace_::ManageTaskbarPin @ 0x1805C3590 (_anonymous_namespace_--ManageTaskbarPin.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_e444c801a41511fb3819c6a1e051bb24_::_lambda_e444c801a41511fb3819c6a1e051bb24_(
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
