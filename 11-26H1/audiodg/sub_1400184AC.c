/*
 * XREFs of sub_1400184AC @ 0x1400184AC
 * Callers:
 *     sub_140018470 @ 0x140018470 (sub_140018470.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400184AC(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1073741823;
  *(_QWORD *)a1 = off_1400B80B0;
  *(_QWORD *)(a1 + 8) = off_1400B82A8;
  *(_QWORD *)(a1 + 16) = off_1400B8308;
  sub_1400B6010(qword_1400E8490);
  return sub_140018504(a1);
}
