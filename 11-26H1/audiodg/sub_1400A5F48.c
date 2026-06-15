/*
 * XREFs of sub_1400A5F48 @ 0x1400A5F48
 * Callers:
 *     sub_1400A6640 @ 0x1400A6640 (sub_1400A6640.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A5F48(__int64 a1)
{
  *(_DWORD *)(a1 + 1472) = -1073741823;
  *(_QWORD *)a1 = off_1400C0678;
  *(_QWORD *)(a1 + 8) = off_1400C0640;
  *(_QWORD *)(a1 + 16) = off_1400C05C8;
  *(_QWORD *)(a1 + 24) = off_1400C0590;
  *(_QWORD *)(a1 + 1344) = off_1400C0558;
  *(_QWORD *)(a1 + 1352) = off_1400C0538;
  *(_QWORD *)(a1 + 1360) = off_1400C0890;
  *(_QWORD *)(a1 + 1464) = off_1400C0860;
  sub_1400B6010(qword_1400E8490);
  return sub_1400A64B8(a1);
}
