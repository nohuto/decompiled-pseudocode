/*
 * XREFs of sub_140077F80 @ 0x140077F80
 * Callers:
 *     sub_140078760 @ 0x140078760 (sub_140078760.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_140077F80(_QWORD *a1)
{
  *a1 = off_1400BE328;
  a1[1] = off_1400BE308;
  a1[2] = off_1400BE188;
  sub_140003238(a1 + 8);
  return sub_140016EDC((__int64)a1);
}
