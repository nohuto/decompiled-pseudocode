/*
 * XREFs of _lambda_55084e4f2abaab1e6a5f5781ce063f25_::__lambda_55084e4f2abaab1e6a5f5781ce063f25_ @ 0x1801D1A54
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x18004BF74 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___::_CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___ @ 0x180438CBC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_55084e4f2abaab1e6a5f5781ce063f25___--_CTask.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18043D5E0 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     _UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$5 @ 0x1806CF15C (_UwpWindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$5.c)
 * Callees:
 *     ??1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801D1A7C (--1RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

void __fastcall lambda_55084e4f2abaab1e6a5f5781ce063f25_::__lambda_55084e4f2abaab1e6a5f5781ce063f25_(__int64 a1)
{
  ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::~RemoveSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)(a1 + 16));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
