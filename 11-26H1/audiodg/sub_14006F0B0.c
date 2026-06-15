/*
 * XREFs of sub_14006F0B0 @ 0x14006F0B0
 * Callers:
 *     sub_14006F250 @ 0x14006F250 (sub_14006F250.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006F0B0(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)a1 = off_1400BCC48;
  sub_1400B6010(qword_1400E8490);
  return sub_14006F158(a1 + 24);
}
