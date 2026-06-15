/*
 * XREFs of sub_14005FC84 @ 0x14005FC84
 * Callers:
 *     sub_14005F750 @ 0x14005F750 (sub_14005F750.c)
 * Callees:
 *     sub_14005FC70 @ 0x14005FC70 (sub_14005FC70.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005FC84(__int64 a1)
{
  sub_14005FC70(a1);
  *(_QWORD *)a1 = &off_1400BC260;
  *(_QWORD *)(a1 + 8) = off_1400BC2F0;
  *(_QWORD *)(a1 + 16) = off_1400BC298;
  *(_QWORD *)(a1 + 24) = off_1400BC330;
  *(_QWORD *)(a1 + 32) = off_1400BC3F8;
  *(_QWORD *)(a1 + 40) = off_1400BC390;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = &off_1400BC428;
  *(_QWORD *)(a1 + 8) = off_1400BC3B8;
  *(_QWORD *)(a1 + 16) = off_1400BC298;
  *(_QWORD *)(a1 + 24) = off_1400BC2B8;
  *(_QWORD *)(a1 + 32) = off_1400BC460;
  *(_QWORD *)(a1 + 40) = off_1400BC368;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  return a1;
}
