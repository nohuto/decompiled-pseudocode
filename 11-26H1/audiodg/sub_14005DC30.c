/*
 * XREFs of sub_14005DC30 @ 0x14005DC30
 * Callers:
 *     sub_14005E820 @ 0x14005E820 (sub_14005E820.c)
 * Callees:
 *     sub_140026F50 @ 0x140026F50 (sub_140026F50.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_14005DC30(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *a1;
  *a2 = 0LL;
  sub_140026F50(v3, (__int64)&xmmword_1400C9350, a2);
  return a2;
}
