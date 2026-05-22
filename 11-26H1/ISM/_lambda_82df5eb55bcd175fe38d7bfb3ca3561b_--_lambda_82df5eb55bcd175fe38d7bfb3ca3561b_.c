/*
 * XREFs of _lambda_82df5eb55bcd175fe38d7bfb3ca3561b_::_lambda_82df5eb55bcd175fe38d7bfb3ca3561b_ @ 0x18016DE38
 * Callers:
 *     ?CreatePVPrincipal@MPCConstantManagerClient@@AEAA?AV?$com_ptr_t@VAsyncPVPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$AsyncDeferral@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@@Z @ 0x1801714C4 (-CreatePVPrincipal@MPCConstantManagerClient@@AEAA-AV-$com_ptr_t@VAsyncPVPrincipal@@Uerr_exceptio.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall lambda_82df5eb55bcd175fe38d7bfb3ca3561b_::_lambda_82df5eb55bcd175fe38d7bfb3ca3561b_(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v4; // rcx

  *a1 = a2;
  a1[1] = *a3;
  v4 = a1 + 2;
  *v4 = a3[1];
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v4);
  return a1;
}
