/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_::___abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_ @ 0x1806A072C
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_::_scalar_deleting_destructor_ @ 0x1806A0CC0 (Platform--Details--__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_--_scalar.c)
 * Callees:
 *     ??1?$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1806A0778 (--1-$com_ptr_t@VXamlGamingTaskViewHost@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void **__fastcall Platform::Details::__abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_::___abi_FunctorCapture__lambda_d0a1935d0729a9f12d8e79c8432e6d28__void_(
        _QWORD *a1)
{
  void **result; // rax

  wil::com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>::~com_ptr_t<XamlGamingTaskViewHost,wil::err_exception_policy>(a1 + 1);
  result = &Platform::Details::__abi_CaptureBase::`vftable';
  *a1 = &Platform::Details::__abi_CaptureBase::`vftable';
  return result;
}
