/*
 * XREFs of sub_1800C0430 @ 0x1800C0430
 * Callers:
 *     sub_1800C1050 @ 0x1800C1050 (sub_1800C1050.c)
 *     sub_1800C13F0 @ 0x1800C13F0 (sub_1800C13F0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800C05D4 @ 0x1800C05D4 (sub_1800C05D4.c)
 */

_QWORD *__fastcall sub_1800C0430(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_1800C05D4(a1, &v4);
  if ( v4 )
  {
    sub_1800BC108(v4, a2);
    if ( v5 )
      sub_180010EC8(v5);
  }
  else
  {
    if ( v5 )
      sub_180010EC8(v5);
    *a2 = 0LL;
  }
  return a2;
}
