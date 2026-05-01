/*
 * XREFs of wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl(void)_::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl(void)_ @ 0x18044CD84
 * Callers:
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18044E708 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl(void)_::__move @ 0x180450DE0 (wistd--__function--__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl_void__::__func__lambda_a5401b786254c66bf4b54925497f2665__void___cdecl_void__(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_18071AFB8;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  return a1;
}
