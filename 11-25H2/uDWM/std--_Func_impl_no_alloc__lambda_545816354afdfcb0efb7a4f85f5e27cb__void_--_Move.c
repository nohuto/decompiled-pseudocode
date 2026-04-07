/*
 * XREFs of std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Move @ 0x1800E0DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_545816354afdfcb0efb7a4f85f5e27cb__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_1800F6200;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  a2[1] = v2;
  return a2;
}
