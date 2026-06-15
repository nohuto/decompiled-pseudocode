/*
 * XREFs of sub_140071F10 @ 0x140071F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140035060 @ 0x140035060 (sub_140035060.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140071F10(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+38h] [rbp-20h] BYREF

  v5 = *(_OWORD *)(a1 - 56);
  v6 = v5;
  EtwEventActivityIdControl(4LL, &v6);
  sub_1400B6010(a1);
  sub_140035060(&v4, *(_QWORD *)(a1 + 24));
  if ( v4 )
    v2 = sub_1400B6010(v4);
  else
    v2 = -2147467262;
  sub_140003238(&v4);
  EtwEventActivityIdControl(4LL, &v6);
  return v2;
}
