/*
 * XREFs of wistd::function_void___cdecl(int_const_&)_::function_void___cdecl(int_const_&)___lambda_20fdf1c36a5152f84d2b416543516248__void_ @ 0x1800E2404
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x1800629A0 (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?IsIndependent@CFadeOut@@UEAA_NXZ @ 0x180072C30 (-IsIndependent@CFadeOut@@UEAA_NXZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_int_const____::function_void___cdecl_int_const______lambda_20fdf1c36a5152f84d2b416543516248__void_(
        CFadeOut *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx

  *((_QWORD *)a1 + 14) = 0LL;
  if ( CFadeOut::IsIndependent(a1) )
  {
    v2[2] = v1;
    v2[1] = off_1800F6500;
    v2[14] = v2 + 1;
  }
  return v2;
}
