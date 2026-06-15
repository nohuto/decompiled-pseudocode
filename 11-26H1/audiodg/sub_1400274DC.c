/*
 * XREFs of sub_1400274DC @ 0x1400274DC
 * Callers:
 *     sub_1400274A0 @ 0x1400274A0 (sub_1400274A0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400274DC(__int64 a1)
{
  *(_DWORD *)(a1 + 224) = -1073741823;
  *(_QWORD *)a1 = &off_1400B9870;
  *(_QWORD *)(a1 + 8) = off_1400B9930;
  *(_QWORD *)(a1 + 16) = off_1400B9A50;
  *(_QWORD *)(a1 + 24) = off_1400B9958;
  *(_QWORD *)(a1 + 152) = off_1400B9C90;
  *(_QWORD *)(a1 + 160) = off_1400B9978;
  sub_1400B6010(qword_1400E8490);
  return sub_140027570(a1);
}
