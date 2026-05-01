/*
 * XREFs of wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x18044D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl(void)_::___func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl(void)_ @ 0x18044CEC0 (wistd--__function--__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl(void)_--___func.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl_void__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl_void__::___func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl_void__(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
