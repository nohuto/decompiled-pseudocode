/*
 * XREFs of _lambda_55084e4f2abaab1e6a5f5781ce063f25_::_lambda_55084e4f2abaab1e6a5f5781ce063f25_ @ 0x180438918
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BF74 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18043D5E0 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801C7E80 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1801C7E80.c)
 */

_QWORD *__fastcall lambda_55084e4f2abaab1e6a5f5781ce063f25_::_lambda_55084e4f2abaab1e6a5f5781ce063f25_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  *a1 = a2;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    a1 + 1,
    a3);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 2),
    a4);
  a1[2] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  return a1;
}
