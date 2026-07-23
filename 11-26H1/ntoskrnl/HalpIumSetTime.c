/*
 * XREFs of HalpIumSetTime @ 0x14059C130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpIumSetTime()
{
  if ( qword_140FBB4B0 )
    return guard_dispatch_icall_no_overrides(1LL, 0LL);
  else
    return 0x8000000000000003uLL;
}
