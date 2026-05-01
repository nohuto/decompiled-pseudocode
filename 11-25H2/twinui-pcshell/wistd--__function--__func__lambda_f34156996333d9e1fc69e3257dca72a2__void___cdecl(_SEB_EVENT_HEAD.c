/*
 * XREFs of wistd::__function::__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl(_SEB_EVENT_HEADER_const_&)_::__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl(_SEB_EVENT_HEADER_const_&)_ @ 0x1802E1084
 * Callers:
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1802369B0 (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl(_SEB_EVENT_HEADER_const_&)_::__move @ 0x1802E1FB0 (wistd--__function--__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl(_S_ea_1802E1FB0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl__SEB_EVENT_HEADER_const____::__func__lambda_f34156996333d9e1fc69e3257dca72a2__void___cdecl__SEB_EVENT_HEADER_const____(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_180705368;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  return a1;
}
