/*
 * XREFs of sub_140012C9C @ 0x140012C9C
 * Callers:
 *     sub_140012B40 @ 0x140012B40 (sub_140012B40.c)
 * Callees:
 *     sub_140007FAC @ 0x140007FAC (sub_140007FAC.c)
 *     sub_1400119BC @ 0x1400119BC (sub_1400119BC.c)
 *     sub_1400182D4 @ 0x1400182D4 (sub_1400182D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140012C9C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  float v4; // xmm4_4
  int v5; // xmm5_4

  sub_1400182D4();
  *(_QWORD *)a1 = off_1400B8528;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 16), 0, 0);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 17;
  *(_QWORD *)(a1 + 88) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 10;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 76) = 1061158912;
  *(_DWORD *)(a1 + 80) = 1048576000;
  *(_DWORD *)(a1 + 84) = 1074790400;
  sub_140007FAC(a1 + 56);
  sub_1400119BC(a1 + 128, v2, 0.75, 0.25, 1074790400);
  sub_1400119BC(a1 + 200, v3, v4, 0.25, v5);
  return a1;
}
