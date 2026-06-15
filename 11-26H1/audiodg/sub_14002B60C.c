/*
 * XREFs of sub_14002B60C @ 0x14002B60C
 * Callers:
 *     sub_14002B5C0 @ 0x14002B5C0 (sub_14002B5C0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002B60C(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1073741823;
  *(_QWORD *)a1 = off_1400BA4E0;
  *(_QWORD *)(a1 + 8) = off_1400BA4A8;
  *(_QWORD *)(a1 + 16) = off_1400BA488;
  sub_1400B6010(qword_1400E8490);
  return sub_14002B664(a1);
}
