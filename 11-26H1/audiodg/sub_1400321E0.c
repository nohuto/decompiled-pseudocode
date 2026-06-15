/*
 * XREFs of sub_1400321E0 @ 0x1400321E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400321E0(__int64 a1)
{
  __int64 v2; // r9
  __int128 v4; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_OWORD *)(a1 - 56);
  EtwEventActivityIdControl(4LL, &v4);
  sub_1400B6010(a1);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    sub_1400B6010(v2);
  EtwEventActivityIdControl(4LL, &v4);
  return 2147500034LL;
}
