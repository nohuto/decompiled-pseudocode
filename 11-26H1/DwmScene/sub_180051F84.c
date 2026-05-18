/*
 * XREFs of sub_180051F84 @ 0x180051F84
 * Callers:
 *     sub_180050930 @ 0x180050930 (sub_180050930.c)
 *     sub_1800BA530 @ 0x1800BA530 (sub_1800BA530.c)
 * Callees:
 *     sub_180028D1C @ 0x180028D1C (sub_180028D1C.c)
 *     sub_180051F28 @ 0x180051F28 (sub_180051F28.c)
 */

_QWORD *__fastcall sub_180051F84(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180028D1C((__int64)a1);
  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  sub_180051F28(a1 + 12);
  result = a1;
  a1[14] = 0LL;
  a1[15] = 0LL;
  return result;
}
