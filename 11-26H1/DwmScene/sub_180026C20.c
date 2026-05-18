/*
 * XREFs of sub_180026C20 @ 0x180026C20
 * Callers:
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180024D18 @ 0x180024D18 (sub_180024D18.c)
 *     sub_1800262D4 @ 0x1800262D4 (sub_1800262D4.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 */

void __fastcall sub_180026C20(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  sub_180029EF8(a1 + 3);
  sub_1800262D4((__int64)a1);
  sub_180012B20(&v4);
  v2 = v4;
  a1[54] = v4;
  v3 = v2 - a1[53];
  a1[59] = v3;
  sub_180024D18(v3);
  sub_18001DCFC(&qword_1801BD228, 3);
}
