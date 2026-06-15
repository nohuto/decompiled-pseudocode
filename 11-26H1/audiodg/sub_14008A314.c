/*
 * XREFs of sub_14008A314 @ 0x14008A314
 * Callers:
 *     sub_14008A224 @ 0x14008A224 (sub_14008A224.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008A314(__int64 a1)
{
  *(_QWORD *)a1 = off_1400BEA60;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = off_1400BEB10;
  *(_QWORD *)(a1 + 48) = off_1400BEAE0;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BEB68;
  *(_QWORD *)(a1 + 48) = off_1400BEB38;
  *(_QWORD *)(a1 + 64) = 0LL;
  return a1;
}
