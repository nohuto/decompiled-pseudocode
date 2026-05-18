/*
 * XREFs of sub_18004DE2C @ 0x18004DE2C
 * Callers:
 *     sub_180043E08 @ 0x180043E08 (sub_180043E08.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 *     sub_1800456D0 @ 0x1800456D0 (sub_1800456D0.c)
 *     sub_180045760 @ 0x180045760 (sub_180045760.c)
 *     sub_18004EF74 @ 0x18004EF74 (sub_18004EF74.c)
 *     sub_18005D8B8 @ 0x18005D8B8 (sub_18005D8B8.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_18004CCFC @ 0x18004CCFC (sub_18004CCFC.c)
 */

_QWORD *__fastcall sub_18004DE2C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  sub_18004232C(a1, &v5);
  sub_18004CCFC(a2, (__int64)&v5, &v7);
  if ( v6 )
    sub_180010EC8(v6);
  return a2;
}
