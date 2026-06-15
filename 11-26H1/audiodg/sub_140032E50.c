/*
 * XREFs of sub_140032E50 @ 0x140032E50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140032E50(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  v7 = *(_OWORD *)(a1 - 56);
  EtwEventActivityIdControl(4LL, &v7);
  *a2 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    sub_1400B6010(v4);
  v5 = sub_1400B6010(0LL);
  EtwEventActivityIdControl(4LL, &v7);
  return v5;
}
