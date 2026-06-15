/*
 * XREFs of sub_140070910 @ 0x140070910
 * Callers:
 *     sub_14007054C @ 0x14007054C (sub_14007054C.c)
 * Callees:
 *     sub_140027630 @ 0x140027630 (sub_140027630.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140070910(__int64 a1)
{
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_OWORD *)(a1 + 104);
  EtwEventActivityIdControl(4LL, &v3);
  sub_140027630(a1);
  return EtwEventActivityIdControl(4LL, &v3);
}
