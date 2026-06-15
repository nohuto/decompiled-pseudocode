/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Copy @ 0x180024B00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180024B30 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = off_180053180;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(a2 + 1, a1 + 8);
  return v2;
}
