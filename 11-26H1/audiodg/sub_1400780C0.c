/*
 * XREFs of sub_1400780C0 @ 0x1400780C0
 * Callers:
 *     sub_140078820 @ 0x140078820 (sub_140078820.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_1400780C0(_QWORD *a1)
{
  *a1 = off_1400BE3D0;
  a1[1] = off_1400BE3B0;
  a1[2] = off_1400BE368;
  sub_140003238(a1 + 9);
  return sub_140016EDC((__int64)a1);
}
