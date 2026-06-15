/*
 * XREFs of std::_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_::_Move @ 0x180040E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_642215a69899d380996b25cb8587b28c__void_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  *a2 = off_1800536A0;
  v2 = a1[1];
  a1[1] = 0LL;
  a2[1] = v2;
  a2[2] = a1[2];
  v3 = a1[3];
  a1[3] = 0LL;
  a2[3] = v3;
  return a2;
}
