/*
 * XREFs of sub_140071864 @ 0x140071864
 * Callers:
 *     sub_140071AE4 @ 0x140071AE4 (sub_140071AE4.c)
 * Callees:
 *     sub_140037E04 @ 0x140037E04 (sub_140037E04.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140071864(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_1400BD468;
  sub_140037E04(a1 + 24);
  *(_QWORD *)(a1 + 248) = a2;
  *(_QWORD *)(a1 + 24) = off_1400BD360;
  *(_QWORD *)(a1 + 32) = off_1400BD440;
  *(_QWORD *)(a1 + 40) = off_1400BD248;
  *(_QWORD *)(a1 + 48) = off_1400BD340;
  *(_QWORD *)(a1 + 176) = off_1400BD420;
  *(_QWORD *)(a1 + 184) = off_1400BD268;
  sub_1400B6010(qword_1400E8490);
  return a1;
}
