/*
 * XREFs of sub_14007045C @ 0x14007045C
 * Callers:
 *     sub_140070640 @ 0x140070640 (sub_140070640.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007045C(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = off_1400BCF28;
  sub_1400B6010(qword_1400E8490);
  return sub_14007054C(a1 + 24);
}
