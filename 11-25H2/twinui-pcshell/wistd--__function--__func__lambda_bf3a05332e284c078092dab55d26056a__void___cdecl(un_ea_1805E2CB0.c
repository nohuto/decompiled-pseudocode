/*
 * XREFs of wistd::__function::__func__lambda_bf3a05332e284c078092dab55d26056a__void___cdecl(unsigned_long_const_&)_::__move @ 0x1805E2CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_bf3a05332e284c078092dab55d26056a__void___cdecl_unsigned_long_const____::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_180730F20;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  a2[2] = result;
  return result;
}
