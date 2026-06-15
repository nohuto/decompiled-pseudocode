/*
 * XREFs of sub_140027F4C @ 0x140027F4C
 * Callers:
 *     sub_140027DEC @ 0x140027DEC (sub_140027DEC.c)
 *     sub_14006F158 @ 0x14006F158 (sub_14006F158.c)
 *     sub_14006F310 @ 0x14006F310 (sub_14006F310.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

void __fastcall sub_140027F4C(__int64 a1)
{
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a1 = off_1400B9CB0;
  *(_QWORD *)(a1 + 8) = off_1400B9C68;
  *(_QWORD *)(a1 + 16) = off_1400B9D70;
  *(_QWORD *)(a1 + 24) = off_1400B9B48;
  v2 = *(_OWORD *)(a1 + 104);
  EtwEventActivityIdControl(4LL, &v2);
  EtwEventActivityIdControl(4LL, &v2);
  sub_140003238((__int64 *)(a1 + 144));
  sub_140003238((__int64 *)(a1 + 128));
  sub_140003238((__int64 *)(a1 + 120));
  sub_140003238((__int64 *)(a1 + 88));
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
}
