/*
 * XREFs of _lambda_79917a46c0d9777cd1553539ded46aa9_::__lambda_79917a46c0d9777cd1553539ded46aa9_ @ 0x1802C5540
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x180110DD4 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___::_CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___ @ 0x1802C5518 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_79917a46c0d9777cd1553539ded46aa9___--_CTask.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x180431230 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     _UwpWindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$2 @ 0x1806ADA99 (_UwpWindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$2.c)
 *     _WindowWrapperBase::ReconcileSessionIdleTaskCompletion_::_1_::dtor$2 @ 0x1806C40B1 (_WindowWrapperBase--ReconcileSessionIdleTaskCompletion_--_1_--dtor$2.c)
 * Callees:
 *     ??1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18020A528 (--1AddSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 */

void __fastcall lambda_79917a46c0d9777cd1553539ded46aa9_::__lambda_79917a46c0d9777cd1553539ded46aa9_(__int64 a1)
{
  ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::~AddSessionIdleTaskCompletion((ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion *)(a1 + 32));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
