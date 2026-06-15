/*
 * XREFs of sub_1400896EC @ 0x1400896EC
 * Callers:
 *     sub_1400892B4 @ 0x1400892B4 (sub_1400892B4.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400896EC(__int64 a1)
{
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 80) = 1LL;
  *(_QWORD *)a1 = off_1400BEA30;
  *(_QWORD *)(a1 + 8) = off_1400BEA08;
  *(_QWORD *)(a1 + 56) = off_1400BE9E8;
  *(_QWORD *)(a1 + 64) = off_1400BE9B8;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BEA30;
  *(_QWORD *)(a1 + 8) = off_1400BEAB8;
  *(_QWORD *)(a1 + 56) = off_1400BE9E8;
  *(_QWORD *)(a1 + 64) = off_1400BEA88;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  return a1;
}
