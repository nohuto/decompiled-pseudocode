/*
 * XREFs of sub_1400A5E80 @ 0x1400A5E80
 * Callers:
 *     sub_1400A65F0 @ 0x1400A65F0 (sub_1400A65F0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A5E80(__int64 a1)
{
  *(_DWORD *)(a1 + 1504) = -1073741823;
  *(_QWORD *)a1 = off_1400C0CB8;
  *(_QWORD *)(a1 + 8) = off_1400C0C80;
  *(_QWORD *)(a1 + 16) = off_1400C0C08;
  *(_QWORD *)(a1 + 24) = off_1400C0BD0;
  *(_QWORD *)(a1 + 1376) = off_1400C0B98;
  *(_QWORD *)(a1 + 1384) = off_1400C0B78;
  *(_QWORD *)(a1 + 1392) = off_1400C03D8;
  *(_QWORD *)(a1 + 1496) = off_1400C0EB0;
  *(_QWORD *)(a1 + 1592) = off_1400C0E80;
  *(_QWORD *)(a1 + 1600) = off_1400C0E58;
  *(_QWORD *)(a1 + 1608) = off_1400C0E38;
  sub_1400B6010(qword_1400E8490);
  return sub_1400A60A8(a1);
}
