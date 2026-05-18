/*
 * XREFs of sub_1800BA660 @ 0x1800BA660
 * Callers:
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 */

_QWORD *__fastcall sub_1800BA660(_QWORD *a1, unsigned __int64 a2)
{
  _BYTE *v4; // r9
  _BYTE v6[3]; // [rsp+45h] [rbp-13h] BYREF

  v4 = v6;
  do
  {
    *--v4 = a2 % 0xA + 48;
    a2 /= 0xAuLL;
  }
  while ( a2 );
  sub_1800276A8(a1, v4, v6);
  return a1;
}
