/*
 * XREFs of sub_1400388C0 @ 0x1400388C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400388C0(__int64 a1)
{
  __int64 v2; // r9
  unsigned int v3; // ebx
  __int128 v5; // [rsp+38h] [rbp-20h] BYREF

  v5 = *(_OWORD *)(a1 - 56);
  EtwEventActivityIdControl(4LL, &v5);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    sub_1400B6010(v2);
  v3 = sub_1400B6010(0LL);
  EtwEventActivityIdControl(4LL, &v5);
  return v3;
}
