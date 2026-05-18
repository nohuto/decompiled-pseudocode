/*
 * XREFs of sub_180022534 @ 0x180022534
 * Callers:
 *     sub_180021AE8 @ 0x180021AE8 (sub_180021AE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_180021CA8 @ 0x180021CA8 (sub_180021CA8.c)
 *     sub_180022448 @ 0x180022448 (sub_180022448.c)
 */

__int64 *__fastcall sub_180022534(__int64 *a1)
{
  __int64 v2; // rax
  GUID pguid; // [rsp+28h] [rbp-58h] BYREF
  GUID rguid; // [rsp+38h] [rbp-48h] BYREF
  __int128 v6; // [rsp+48h] [rbp-38h]
  __int128 v7; // [rsp+58h] [rbp-28h]
  __int64 v8; // [rsp+68h] [rbp-18h]

  pguid = 0LL;
  if ( CoCreateGuid(&pguid) )
  {
    sub_18001DCFC(&qword_1801BD1F8, 4);
    sub_180021CA8(a1);
  }
  else
  {
    v8 = 0LL;
    rguid = pguid;
    v6 = 0LL;
    v7 = 0LL;
    sub_180022448(&rguid);
    v2 = sub_18001C514(56LL);
    if ( v2 )
    {
      *(GUID *)v2 = rguid;
      *(_OWORD *)(v2 + 16) = v6;
      *(_OWORD *)(v2 + 32) = v7;
      *(_QWORD *)(v2 + 48) = v8;
    }
    *a1 = v2;
  }
  return a1;
}
