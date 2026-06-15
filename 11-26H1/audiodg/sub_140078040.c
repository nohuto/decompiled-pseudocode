/*
 * XREFs of sub_140078040 @ 0x140078040
 * Callers:
 *     sub_1400787E0 @ 0x1400787E0 (sub_1400787E0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_140078040(_QWORD *a1)
{
  *a1 = off_1400BE418;
  a1[1] = off_1400BE2E8;
  a1[2] = off_1400BE2A0;
  sub_140003238(a1 + 9);
  sub_140003238(a1 + 8);
  return sub_140016EDC((__int64)a1);
}
