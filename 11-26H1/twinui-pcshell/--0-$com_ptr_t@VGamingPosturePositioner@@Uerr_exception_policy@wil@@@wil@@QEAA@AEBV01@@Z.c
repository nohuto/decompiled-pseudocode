/*
 * XREFs of ??0?$com_ptr_t@VGamingPosturePositioner@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1804F6CA8
 * Callers:
 *     _lambda_fe44875c696bc544c1b0599fc0c72566_::_lambda_invoker_cdecl_ @ 0x1804F2670 (_lambda_fe44875c696bc544c1b0599fc0c72566_--_lambda_invoker_cdecl_.c)
 *     wistd::__function::__func__lambda_54d8d267cf1bb52faa04d9a854e7adf8__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1804F8710 (wistd--__function--__func__lambda_54d8d267cf1bb52faa04d9a854e7adf8__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>::com_ptr_t<GamingPosturePositioner,wil::err_exception_policy>(
        _QWORD *a1)
{
  __int64 v2; // rcx

  v2 = GamingPosturePositioner::s_instance;
  *a1 = GamingPosturePositioner::s_instance;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
