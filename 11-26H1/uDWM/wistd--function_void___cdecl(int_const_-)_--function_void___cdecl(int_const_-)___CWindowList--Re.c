/*
 * XREFs of wistd::function_void___cdecl(int_const_&)_::function_void___cdecl(int_const_&)___CWindowList::RegisterTransparencySystemPolicyChangeEvent_::_2_::_lambda_1__void_ @ 0x1800308D8
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18003053C (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x180030920 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_int_const____::function_void___cdecl_int_const______CWindowList::RegisterTransparencySystemPolicyChangeEvent_::_2_::_lambda_1__void_(
        CFadeOut *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx

  *((_QWORD *)a1 + 14) = 0LL;
  if ( CFadeOut::IsIndependent(a1) )
  {
    v2[2] = v1;
    v2[1] = off_1800F1E50;
    v2[14] = v2 + 1;
  }
  return v2;
}
