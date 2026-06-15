/*
 * XREFs of sub_140071910 @ 0x140071910
 * Callers:
 *     sub_140071960 @ 0x140071960 (sub_140071960.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_140071910(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = off_1400BD468;
  sub_1400B6010(qword_1400E8490);
  sub_140027570(a1 + 24);
}
