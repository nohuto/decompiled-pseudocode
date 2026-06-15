/*
 * XREFs of sub_14007054C @ 0x14007054C
 * Callers:
 *     sub_14007045C @ 0x14007045C (sub_14007045C.c)
 *     sub_1400704A0 @ 0x1400704A0 (sub_1400704A0.c)
 *     sub_140070680 @ 0x140070680 (sub_140070680.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140006B48 @ 0x140006B48 (sub_140006B48.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140027DEC @ 0x140027DEC (sub_140027DEC.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_140070910 @ 0x140070910 (sub_140070910.c)
 */

void __fastcall sub_14007054C(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+28h] [rbp-30h]
  __int128 v4; // [rsp+38h] [rbp-20h] BYREF

  v3 = *(_OWORD *)(a1 + 104);
  v4 = v3;
  EtwEventActivityIdControl(4LL, &v4);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  sub_140070910(a1);
  sub_140018FF0(&v2);
  EtwEventActivityIdControl(4LL, &v4);
  sub_140003238((__int64 *)(a1 + 328));
  sub_140003238((__int64 *)(a1 + 320));
  sub_140003238((__int64 *)(a1 + 312));
  sub_140003238((__int64 *)(a1 + 304));
  sub_140027DEC(a1);
  sub_140006B48(a1 + 256);
}
