/*
 * XREFs of _dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::ServiceModule_::isInitialized__ @ 0x180007C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL dynamic_initializer_for__Microsoft::WRL::Module_1_Windows::Internal::ServiceModule_::isInitialized__()
{
  BOOL result; // eax

  result = InitOnceExecuteOnce(
             &Microsoft::WRL::Details::OutOfProcModuleBase<Windows::Internal::ServiceModule>::initOnceOutOfProc_,
             _lambda_0436b89998ddae64b987abcfc9f7e79b_::_lambda_invoker_cdecl_,
             0LL,
             0LL);
  byte_1801D7B30 = 1;
  Microsoft::WRL::Module<1,Windows::Internal::ServiceModule>::isInitialized = 1;
  return result;
}
