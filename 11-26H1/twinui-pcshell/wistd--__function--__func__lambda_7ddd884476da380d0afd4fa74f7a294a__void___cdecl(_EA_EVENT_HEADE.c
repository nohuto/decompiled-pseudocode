/*
 * XREFs of wistd::__function::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl(_EA_EVENT_HEADER_const_&)_::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl(_EA_EVENT_HEADER_const_&)_ @ 0x1802DA4DC
 * Callers:
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18010A4EC (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     wistd::__function::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl(_EA_EVENT_HEADER_const_&)_::__move @ 0x1802DB3D0 (wistd--__function--__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl(_E_ea_1802DB3D0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl__EA_EVENT_HEADER_const____::__func__lambda_7ddd884476da380d0afd4fa74f7a294a__void___cdecl__EA_EVENT_HEADER_const____(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_18072DD88;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  return a1;
}
