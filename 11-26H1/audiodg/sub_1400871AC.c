/*
 * XREFs of sub_1400871AC @ 0x1400871AC
 * Callers:
 *     sub_140086EA4 @ 0x140086EA4 (sub_140086EA4.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400871AC(__int64 a1)
{
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = off_1400BE670;
  *(_QWORD *)(a1 + 8) = off_1400BE648;
  *(_QWORD *)(a1 + 16) = off_1400BE628;
  *(_QWORD *)(a1 + 24) = off_1400BE608;
  *(_QWORD *)(a1 + 32) = off_1400BE5D8;
  *(_QWORD *)(a1 + 40) = off_1400BE5B8;
  *(_QWORD *)(a1 + 48) = off_1400BE598;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400BE820;
  *(_QWORD *)(a1 + 8) = off_1400BE920;
  *(_QWORD *)(a1 + 16) = off_1400BE900;
  *(_QWORD *)(a1 + 24) = off_1400BE8E0;
  *(_QWORD *)(a1 + 32) = off_1400BE8B0;
  *(_QWORD *)(a1 + 40) = off_1400BE890;
  *(_QWORD *)(a1 + 48) = off_1400BE870;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  return a1;
}
