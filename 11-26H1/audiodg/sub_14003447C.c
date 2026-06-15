/*
 * XREFs of sub_14003447C @ 0x14003447C
 * Callers:
 *     sub_140034440 @ 0x140034440 (sub_140034440.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003447C(__int64 a1)
{
  *(_DWORD *)(a1 + 344) = -1073741823;
  *(_QWORD *)a1 = off_1400B8060;
  *(_QWORD *)(a1 + 8) = off_1400B8040;
  *(_QWORD *)(a1 + 16) = off_1400B8510;
  *(_QWORD *)(a1 + 24) = off_1400B8418;
  sub_1400B6010(qword_1400E8490);
  return sub_1400344E0(a1);
}
