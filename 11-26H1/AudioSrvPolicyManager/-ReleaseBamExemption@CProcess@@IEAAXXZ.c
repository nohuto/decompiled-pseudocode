/*
 * XREFs of ?ReleaseBamExemption@CProcess@@IEAAXXZ @ 0x18002E19C
 * Callers:
 *     _lambda_27ffc4f27c89750b73dd50f8af6b1d3e_::_lambda_invoker_cdecl_ @ 0x18002B860 (_lambda_27ffc4f27c89750b73dd50f8af6b1d3e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800158F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

void __fastcall CProcess::ReleaseBamExemption(void **this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)(this + 67);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 67));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 72,
    0LL);
  if ( v1 )
    LeaveCriticalSection(v1);
}
