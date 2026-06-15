/*
 * XREFs of sub_1400A5DB8 @ 0x1400A5DB8
 * Callers:
 *     sub_1400A65A0 @ 0x1400A65A0 (sub_1400A65A0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A5DB8(__int64 a1)
{
  *(_DWORD *)(a1 + 1472) = -1073741823;
  *(_QWORD *)a1 = off_1400C0DD0;
  *(_QWORD *)(a1 + 8) = off_1400C0D98;
  *(_QWORD *)(a1 + 16) = off_1400C0D20;
  *(_QWORD *)(a1 + 24) = off_1400C0998;
  *(_QWORD *)(a1 + 1344) = off_1400C0960;
  *(_QWORD *)(a1 + 1352) = off_1400C0940;
  *(_QWORD *)(a1 + 1360) = off_1400C03D8;
  *(_QWORD *)(a1 + 1464) = off_1400C0910;
  *(_QWORD *)(a1 + 1560) = off_1400C08E0;
  *(_QWORD *)(a1 + 1568) = off_1400C08B8;
  *(_QWORD *)(a1 + 1576) = off_1400C0898;
  sub_1400B6010(qword_1400E8490);
  return sub_1400A6080(a1);
}
