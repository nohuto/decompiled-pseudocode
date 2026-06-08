/*
 * XREFs of HvRequestIdle @ 0x140009E00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvRequestIdle(__int128 *a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  ((void (__fastcall *)(__int128 *))qword_140019568)(&v2);
  return 0LL;
}
