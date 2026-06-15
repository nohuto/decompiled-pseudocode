/*
 * XREFs of sub_140033D90 @ 0x140033D90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140033D90(__int64 a1)
{
  __int128 v3; // [rsp+38h] [rbp-20h] BYREF

  v3 = *(_OWORD *)(a1 - 56);
  EtwEventActivityIdControl(4LL, &v3);
  sub_1400B6010(*(_QWORD *)(a1 + 24));
  EtwEventActivityIdControl(4LL, &v3);
  return 0LL;
}
