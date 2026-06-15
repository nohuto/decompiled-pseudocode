/*
 * XREFs of std::_Func_impl_no_alloc__lambda_efe6a2a1125c0c889ee2664d28532957__void_::_Copy @ 0x1800CC290
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001D6C8 (--0-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_efe6a2a1125c0c889ee2664d28532957__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 result; // rax

  *a2 = off_180175098;
  a2[1] = *(_QWORD *)(a1 + 8);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
    a2 + 2,
    (volatile int *)(a1 + 16));
  result = v3;
  *(_BYTE *)(v3 + 24) = *(_BYTE *)(v2 + 24);
  return result;
}
