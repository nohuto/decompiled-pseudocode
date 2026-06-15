/*
 * XREFs of sub_14005DDA0 @ 0x14005DDA0
 * Callers:
 *     sub_14005E040 @ 0x14005E040 (sub_14005E040.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005DDA0(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = off_1400BC1D0;
  sub_1400B6010(qword_1400E8490);
  return sub_14005DFA8(a1 + 24);
}
