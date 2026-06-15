/*
 * XREFs of sub_14000A628 @ 0x14000A628
 * Callers:
 *     sub_140008840 @ 0x140008840 (sub_140008840.c)
 *     sub_14000A6C4 @ 0x14000A6C4 (sub_14000A6C4.c)
 *     sub_140082034 @ 0x140082034 (sub_140082034.c)
 * Callees:
 *     sub_1400440C4 @ 0x1400440C4 (sub_1400440C4.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_14000A628(_QWORD *a1, __int64 a2)
{
  *a1 = off_1400BC6D0;
  a1[2] = *(_QWORD *)(a2 + 16);
  a1[13] = 0LL;
  a1[15] = 0LL;
  a1[18] = 0LL;
  a1[19] = 0LL;
  a1[21] = 0LL;
  sub_1400440C4();
  return a1;
}
