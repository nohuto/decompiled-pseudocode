/*
 * XREFs of _lambda_5fb34dca825284ea67ff945056291927_::_lambda_5fb34dca825284ea67ff945056291927_ @ 0x1804389B8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d5ba9deb2118ce04c264c974195dc07b__void_bool_::_Do_call @ 0x180186970 (std--_Func_impl_no_alloc__lambda_d5ba9deb2118ce04c264c974195dc07b__void_bool_--_Do_call.c)
 *     ?NotifyReadyForPresentationChanged@WindowWrapperBase@@AEAAX_N@Z @ 0x18043CDF4 (-NotifyReadyForPresentationChanged@WindowWrapperBase@@AEAAX_N@Z.c)
 *     wistd::__function::__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_&)_::operator() @ 0x18050F480 (wistd--__function--__func__lambda_9749c4e18566b8d242b244bea4bcaf57__void___cdecl(bool_const_-)_-.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_5fb34dca825284ea67ff945056291927_::_lambda_5fb34dca825284ea67ff945056291927_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _BYTE *a4)
{
  *(_QWORD *)a1 = a2;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (__int64 *)(a1 + 8),
    a3);
  *(_BYTE *)(a1 + 16) = *a4;
  return a1;
}
