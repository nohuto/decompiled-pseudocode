/*
 * XREFs of sub_14008D790 @ 0x14008D790
 * Callers:
 *     sub_14008D3E4 @ 0x14008D3E4 (sub_14008D3E4.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008D790(__int64 a1)
{
  *(_QWORD *)a1 = off_1400BEA60;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = off_1400BEE60;
  *(_QWORD *)(a1 + 48) = off_1400BEE28;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BEDD8;
  *(_QWORD *)(a1 + 48) = off_1400BEDA0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  return a1;
}
