/*
 * XREFs of sub_14001BF9C @ 0x14001BF9C
 * Callers:
 *     sub_14001BEF8 @ 0x14001BEF8 (sub_14001BEF8.c)
 * Callees:
 *     sub_14001AF20 @ 0x14001AF20 (sub_14001AF20.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001BF9C(__int64 a1)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)(a1 + 8);
  sub_14001AF20(a1 + 8);
  *(_QWORD *)(a1 + 56) = 1LL;
  *(_QWORD *)a1 = &off_1400B9048;
  *v2 = off_1400B90A0;
  *(_QWORD *)(a1 + 16) = off_1400B9000;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400B85D8;
  *v2 = off_1400B85B8;
  *(_QWORD *)(a1 + 16) = off_1400B8630;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_OWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 160));
  InitializeSRWLock((PSRWLOCK)(a1 + 168));
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_BYTE *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_BYTE *)(a1 + 224) = 0;
  return a1;
}
