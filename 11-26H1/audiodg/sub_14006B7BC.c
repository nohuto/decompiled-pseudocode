/*
 * XREFs of sub_14006B7BC @ 0x14006B7BC
 * Callers:
 *     sub_14006B800 @ 0x14006B800 (sub_14006B800.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_14006B7BC(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = off_1400BC798;
  sub_1400B6010(qword_1400E8490);
  sub_1400345A8(a1 + 24);
}
