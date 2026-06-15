/*
 * XREFs of std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Copy @ 0x1800415F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180024B30 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_450436a14271dedc9936bb949bbf07b2__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx

  v3 = a1 + 8;
  *(_QWORD *)a2 = off_180053778;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    (__int64 *)(a2 + 8),
    (__int64 *)(a1 + 8));
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(v3 + 12);
  return a2;
}
