/*
 * XREFs of sub_1400704A0 @ 0x1400704A0
 * Callers:
 *     sub_1400706C0 @ 0x1400706C0 (sub_1400706C0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400704A0(__int64 a1)
{
  *(_DWORD *)(a1 + 248) = -1073741823;
  *(_QWORD *)a1 = off_1400BD0B0;
  *(_QWORD *)(a1 + 8) = off_1400BCDB0;
  *(_QWORD *)(a1 + 16) = off_1400BD058;
  *(_QWORD *)(a1 + 24) = off_1400BCF08;
  *(_QWORD *)(a1 + 152) = off_1400BCCC8;
  *(_QWORD *)(a1 + 160) = off_1400BCF48;
  *(_QWORD *)(a1 + 224) = off_1400BD078;
  *(_QWORD *)(a1 + 232) = off_1400BCDF8;
  *(_QWORD *)(a1 + 240) = off_1400BCCE8;
  sub_1400B6010(qword_1400E8490);
  return sub_14007054C(a1);
}
