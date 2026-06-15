/*
 * XREFs of sub_140024E3C @ 0x140024E3C
 * Callers:
 *     sub_140024A80 @ 0x140024A80 (sub_140024A80.c)
 * Callees:
 *     sub_140007FAC @ 0x140007FAC (sub_140007FAC.c)
 *     sub_1400119BC @ 0x1400119BC (sub_1400119BC.c)
 *     sub_1400250E0 @ 0x1400250E0 (sub_1400250E0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140024E3C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  float v4; // xmm4_4
  int v5; // xmm5_4

  sub_1400250E0();
  *(_QWORD *)a1 = off_1400B96B8;
  *(_QWORD *)(a1 + 8) = off_1400B9730;
  if ( qword_1400E84B8 )
    sub_1400B6010(qword_1400E84B8);
  *(_QWORD *)a1 = off_1400B96D8;
  *(_QWORD *)(a1 + 8) = off_1400B9660;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 24), 0, 0);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 17;
  *(_QWORD *)(a1 + 96) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 10;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 84) = 1061158912;
  *(_DWORD *)(a1 + 88) = 1048576000;
  *(_DWORD *)(a1 + 92) = 1074790400;
  sub_140007FAC(a1 + 64);
  sub_1400119BC(a1 + 136, v2, 0.75, 0.25, 1074790400);
  sub_1400119BC(a1 + 208, v3, v4, 0.25, v5);
  *(_QWORD *)(a1 + 280) = 0LL;
  return a1;
}
