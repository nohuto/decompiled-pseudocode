/*
 * XREFs of sub_1400906C0 @ 0x1400906C0
 * Callers:
 *     sub_14008F534 @ 0x14008F534 (sub_14008F534.c)
 *     sub_14008F640 @ 0x14008F640 (sub_14008F640.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400906C0(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)a1 = off_1400BF098;
  *(_QWORD *)(a1 + 48) = off_1400BF060;
  *(_QWORD *)(a1 + 56) = off_1400BF038;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 116) = 1;
  *(_QWORD *)a1 = off_1400BEF38;
  *(_QWORD *)(a1 + 48) = off_1400BEF00;
  *(_QWORD *)(a1 + 56) = off_1400BEED8;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  return a1;
}
