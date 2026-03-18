/*
 * XREFs of HalpIumSetTime @ 0x1405999B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpIumSetTime()
{
  if ( qword_140FBB110 )
    return guard_dispatch_icall_no_overrides(1LL, 0LL);
  else
    return 0x8000000000000003uLL;
}
