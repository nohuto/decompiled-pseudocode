/*
 * XREFs of wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_&)_::__move @ 0x1804F1910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl_bool_const____::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_180726D38;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  a2[2] = result;
  return result;
}
