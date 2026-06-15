/*
 * XREFs of wistd::__function::__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl(void)_::__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl(void)_ @ 0x180154938
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_f74592632540feccec9f4b5e07595a4c__void_ @ 0x180153BD8 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_f74592632540feccec9f4b.c)
 *     wistd::__function::__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl(void)_::__move @ 0x1801585E0 (wistd--__function--__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl_void__::__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl_void__(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_18017AD78;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  return a1;
}
