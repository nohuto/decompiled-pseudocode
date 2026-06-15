/*
 * XREFs of sub_140056088 @ 0x140056088
 * Callers:
 *     sub_140056250 @ 0x140056250 (sub_140056250.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140056088(__int64 a1)
{
  *(_DWORD *)(a1 + 32) = -1073741823;
  *(_QWORD *)a1 = off_1400BBBD0;
  *(_QWORD *)(a1 + 8) = off_1400BBC80;
  *(_QWORD *)(a1 + 16) = off_1400BBC60;
  *(_QWORD *)(a1 + 24) = off_1400BBBB0;
  sub_1400B6010(qword_1400E8490);
  return sub_140080AC4(a1);
}
