/*
 * XREFs of std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Move @ 0x180114660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rax
  _QWORD *result; // rax

  *a2 = off_180177960;
  v2 = a1[3];
  a1[3] = 0LL;
  v3 = a1[2];
  a1[2] = 0LL;
  v4 = a1[1];
  a1[1] = 0LL;
  a2[1] = v4;
  result = a2;
  a2[2] = v3;
  a2[3] = v2;
  return result;
}
