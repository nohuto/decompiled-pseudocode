/*
 * XREFs of wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x18010D570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_::___func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_ @ 0x18010D468 (wistd--__function--__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl(void)_--___func.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl_void__::___func__lambda_1c2d9c2341627a6028dc340da6842d54__void___cdecl_void__(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
