/*
 * XREFs of sub_14006F0F4 @ 0x14006F0F4
 * Callers:
 *     sub_14006F2D0 @ 0x14006F2D0 (sub_14006F2D0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006F0F4(__int64 a1)
{
  *(_DWORD *)(a1 + 152) = -1073741823;
  *(_QWORD *)a1 = off_1400BC9A0;
  *(_QWORD *)(a1 + 8) = off_1400BC978;
  *(_QWORD *)(a1 + 16) = off_1400BCB48;
  *(_QWORD *)(a1 + 24) = off_1400BCC88;
  sub_1400B6010(qword_1400E8490);
  return sub_14006F158(a1);
}
