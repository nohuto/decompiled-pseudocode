/*
 * XREFs of sub_14008D730 @ 0x14008D730
 * Callers:
 *     sub_14008D508 @ 0x14008D508 (sub_14008D508.c)
 *     sub_14008D61C @ 0x14008D61C (sub_14008D61C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008D730(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)a1 = off_1400BEEB0;
  *(_DWORD *)(a1 + 68) = 1;
  *(_QWORD *)a1 = off_1400BEE00;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
