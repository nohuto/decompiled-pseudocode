/*
 * XREFs of _lambda_79917a46c0d9777cd1553539ded46aa9_::_lambda_79917a46c0d9777cd1553539ded46aa9_ @ 0x1804388B8
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BF74 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18043D5E0 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800CD100 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801C7E80 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1801C7E80.c)
 */

__int64 __fastcall lambda_79917a46c0d9777cd1553539ded46aa9_::_lambda_79917a46c0d9777cd1553539ded46aa9_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        _DWORD *a5,
        _QWORD *a6)
{
  *(_QWORD *)a1 = a2;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    (__int64 *)(a1 + 8),
    a3);
  *(_QWORD *)(a1 + 16) = *a4;
  *(_DWORD *)(a1 + 24) = *a5;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 32,
    a6);
  *(_QWORD *)(a1 + 32) = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  return a1;
}
