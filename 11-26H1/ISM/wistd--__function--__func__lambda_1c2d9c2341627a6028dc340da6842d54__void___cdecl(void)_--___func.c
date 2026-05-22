/*
 * XREFs of wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_::___func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_ @ 0x18010D468
 * Callers:
 *     wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x18010D570 (wistd--__function--__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_--_scalar.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void **__fastcall wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl_void__::___func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl_void__(
        _QWORD *a1)
{
  void **result; // rax

  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a1 + 1);
  result = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  return result;
}
