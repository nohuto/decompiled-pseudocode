/*
 * XREFs of sub_14001D2BC @ 0x14001D2BC
 * Callers:
 *     sub_14001D270 @ 0x14001D270 (sub_14001D270.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001D2BC(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = -1073741823;
  *(_QWORD *)a1 = off_1400B90C0;
  *(_QWORD *)(a1 + 8) = off_1400B9128;
  sub_1400B6010(qword_1400E8490);
  return sub_14001D308(a1);
}
