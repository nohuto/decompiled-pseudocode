/*
 * XREFs of std::_Func_impl_no_alloc__lambda_80df7c2b76f58973f9ddec3659020abd__void_GestureHandler___enum_GestureCompletedReason_::_Move @ 0x180146CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_80df7c2b76f58973f9ddec3659020abd__void_GestureHandler___enum_GestureCompletedReason_::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801ED518;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
