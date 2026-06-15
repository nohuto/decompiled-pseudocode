/*
 * XREFs of sub_14004615C @ 0x14004615C
 * Callers:
 *     sub_1400A60D0 @ 0x1400A60D0 (sub_1400A60D0.c)
 *     sub_1400A61CC @ 0x1400A61CC (sub_1400A61CC.c)
 *     sub_1400AB9F0 @ 0x1400AB9F0 (sub_1400AB9F0.c)
 * Callees:
 *     sub_1400461D0 @ 0x1400461D0 (sub_1400461D0.c)
 *     sub_140046234 @ 0x140046234 (sub_140046234.c)
 *     sub_1400462E8 @ 0x1400462E8 (sub_1400462E8.c)
 */

__int64 (__fastcall **__fastcall sub_14004615C(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  *a1 = off_1400BB018;
  a1[56] = off_1400BAFD8;
  sub_1400461D0();
  sub_140046234(a1 + 44);
  sub_1400462E8(a1 + 32);
  a1[20] = &off_1400BA7E8;
  a1[12] = &off_1400BA7E8;
  result = &off_1400BA7E8;
  a1[3] = &off_1400BA7E8;
  return result;
}
