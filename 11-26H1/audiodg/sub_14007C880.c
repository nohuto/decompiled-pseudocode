/*
 * XREFs of sub_14007C880 @ 0x14007C880
 * Callers:
 *     sub_14007BEA4 @ 0x14007BEA4 (sub_14007BEA4.c)
 *     sub_14007CBB4 @ 0x14007CBB4 (sub_14007CBB4.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14007CF28 @ 0x14007CF28 (sub_14007CF28.c)
 */

__int64 __fastcall sub_14007C880(_BYTE *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-40h] BYREF
  __int64 v4; // [rsp+28h] [rbp-38h]
  __int64 v5; // [rsp+30h] [rbp-30h]
  __int64 v6; // [rsp+38h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-20h]
  __int64 v8; // [rsp+48h] [rbp-18h]

  if ( a1[56] )
  {
    v3 = 0x418A073AA3BC1C75LL;
    v4 = 0x418A073AA3BC2475LL;
    v5 = 0x418A073AA3BC2C75LL;
    result = sub_14007CF28(&v3, 3LL, a1);
  }
  if ( a1[120] )
  {
    v3 = 0x418A073AA3BC3475LL;
    v4 = 0x418A073AA3BC3C75LL;
    v5 = 0x418A073AA3BC4475LL;
    result = sub_14007CF28(&v3, 3LL, a1 + 64);
  }
  if ( a1[184] )
  {
    v3 = 0x418A073AA3BC4C75LL;
    v4 = 0x418A073AA3BC5475LL;
    v5 = 0x418A073AA3BC5C75LL;
    v6 = 0x418A073AA3BC6475LL;
    v7 = 0x418A073AA3BC6C75LL;
    v8 = 0x418A073AA3BC7475LL;
    return sub_14007CF28(&v3, 6LL, a1 + 128);
  }
  return result;
}
