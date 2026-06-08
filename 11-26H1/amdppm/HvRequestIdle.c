/*
 * XREFs of HvRequestIdle @ 0x140006150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvRequestIdle(__int128 *a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a1;
  ((void (__fastcall *)(__int128 *))qword_140015998)(&v2);
  return 0LL;
}
