/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_382bf80ec225943cc46d0801556c31b2__void_::___abi_FunctorCapture__lambda_382bf80ec225943cc46d0801556c31b2__void_ @ 0x180679BD4
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_382bf80ec225943cc46d0801556c31b2__void_::_scalar_deleting_destructor_ @ 0x18067A160 (Platform--Details--__abi_FunctorCapture__lambda_382bf80ec225943cc46d0801556c31b2__void_--_scalar.c)
 * Callees:
 *     ??1?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180679C20 (--1-$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void **__fastcall Platform::Details::__abi_FunctorCapture__lambda_382bf80ec225943cc46d0801556c31b2__void_::___abi_FunctorCapture__lambda_382bf80ec225943cc46d0801556c31b2__void_(
        _QWORD *a1)
{
  void **result; // rax

  wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::~com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(a1 + 1);
  result = &Platform::Details::__abi_CaptureBase::`vftable';
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  return result;
}
