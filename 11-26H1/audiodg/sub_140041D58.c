/*
 * XREFs of sub_140041D58 @ 0x140041D58
 * Callers:
 *     sub_14006488C @ 0x14006488C (sub_14006488C.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140041D58(__int64 a1)
{
  *(_QWORD *)(a1 + 40) = 1LL;
  *(_QWORD *)a1 = &off_1400BADC0;
  *(_QWORD *)(a1 + 8) = off_1400BAE18;
  *(_QWORD *)(a1 + 16) = off_1400BADF8;
  *(_QWORD *)(a1 + 24) = off_1400BAE68;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = &off_1400BC5F0;
  *(_QWORD *)(a1 + 8) = off_1400BC530;
  *(_QWORD *)(a1 + 16) = off_1400BADF8;
  *(_QWORD *)(a1 + 24) = off_1400BC580;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 64), 0, 0);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = 10;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 200) = 10;
  *(_BYTE *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0LL;
  return a1;
}
