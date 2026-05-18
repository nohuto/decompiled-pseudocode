/*
 * XREFs of sub_180096A20 @ 0x180096A20
 * Callers:
 *     sub_1800973C0 @ 0x1800973C0 (sub_1800973C0.c)
 * Callees:
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800968F4 @ 0x1800968F4 (sub_1800968F4.c)
 */

_QWORD *__fastcall sub_180096A20(__int64 a1)
{
  *(_BYTE *)(a1 + 440) = 1;
  sub_1800968F4((__int64 *)(a1 + 8), a1 + 264);
  sub_180013540((__int64 *)(a1 + 392), (_QWORD *)(a1 + 424));
  return sub_18009698C(a1);
}
