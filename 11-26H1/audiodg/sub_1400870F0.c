/*
 * XREFs of sub_1400870F0 @ 0x1400870F0
 * Callers:
 *     sub_140086DE8 @ 0x140086DE8 (sub_140086DE8.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400870F0(__int64 a1)
{
  *(_QWORD *)(a1 + 32) = 1LL;
  *(_QWORD *)a1 = &off_1400BE7C0;
  *(_QWORD *)(a1 + 8) = off_1400BE798;
  *(_QWORD *)(a1 + 16) = off_1400BE778;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = a1;
  *(_QWORD *)a1 = &off_1400BE948;
  *(_QWORD *)(a1 + 8) = off_1400BE848;
  *(_QWORD *)(a1 + 16) = off_1400BE778;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  return a1;
}
