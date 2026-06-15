/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4b31922d8a1cd873a528cca5d3f4e6eb__void_::_Move @ 0x180040E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_4b31922d8a1cd873a528cca5d3f4e6eb__void_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  *a2 = off_1800536D0;
  v2 = a1[1];
  a1[1] = 0LL;
  a2[1] = v2;
  a2[2] = a1[2];
  v3 = a1[3];
  a1[3] = 0LL;
  a2[3] = v3;
  return a2;
}
