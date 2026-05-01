/*
 * XREFs of Platform::Details::_dynamic_initializer_for__module___ @ 0x180011620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *Platform::Details::_dynamic_initializer_for__module___()
{
  __int64 *result; // rax

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Platform::Details::InProcModule>::initOnceInProc_,
    _lambda_4fd86d7f339d52492de09ef910ca4095_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  result = &Microsoft::WRL::Details::StaticStorage<Platform::Details::InProcModule,0,int>::instance_;
  byte_180899400 = 1;
  Platform::Details::module_ = (struct Platform::Details::InProcModule *)&Microsoft::WRL::Details::StaticStorage<Platform::Details::InProcModule,0,int>::instance_;
  return result;
}
