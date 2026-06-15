/*
 * XREFs of sub_1400A56D4 @ 0x1400A56D4
 * Callers:
 *     sub_1400A597C @ 0x1400A597C (sub_1400A597C.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400A5C34 @ 0x1400A5C34 (sub_1400A5C34.c)
 *     sub_1400AB5FC @ 0x1400AB5FC (sub_1400AB5FC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1400A56D4(__int64 a1)
{
  *(_QWORD *)a1 = off_1400F58E8;
  *(_QWORD *)(a1 + 8) = off_1400F58B0;
  *(_QWORD *)(a1 + 16) = off_1400F5838;
  *(_QWORD *)(a1 + 24) = off_1400F5800;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 32), 0, 0);
  *(_OWORD *)(a1 + 72) = xmmword_1400C5548;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_BYTE *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = 0;
  memset((void *)(a1 + 156), 0, 0x1A2uLL);
  *(_QWORD *)(a1 + 576) = 0LL;
  sub_1400A5C34(a1 + 584);
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 744), 0, 0);
  *(_QWORD *)(a1 + 784) = 0LL;
  sub_1400AB5FC(a1 + 792);
  *(_BYTE *)(a1 + 1296) = 1;
  *(_QWORD *)(a1 + 1304) = 0LL;
  *(_QWORD *)(a1 + 1312) = 0LL;
  *(_QWORD *)(a1 + 1320) = 0LL;
  *(_DWORD *)(a1 + 1328) = 0;
  *(_DWORD *)(a1 + 1332) = 1;
  *(_QWORD *)(a1 + 576) = a1 + 156;
  *(_QWORD *)(a1 + 1336) = a1;
  return a1;
}
