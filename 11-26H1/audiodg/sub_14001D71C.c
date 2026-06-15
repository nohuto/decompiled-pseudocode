/*
 * XREFs of sub_14001D71C @ 0x14001D71C
 * Callers:
 *     sub_14001D6E0 @ 0x14001D6E0 (sub_14001D6E0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14001D71C(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1073741823;
  *(_QWORD *)a1 = off_1400BA388;
  *(_QWORD *)(a1 + 8) = off_1400BA310;
  *(_QWORD *)(a1 + 16) = off_1400BA330;
  sub_1400B6010(qword_1400E8490);
  return sub_14001D774(a1);
}
