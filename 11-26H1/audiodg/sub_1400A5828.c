/*
 * XREFs of sub_1400A5828 @ 0x1400A5828
 * Callers:
 *     sub_1400A5A40 @ 0x1400A5A40 (sub_1400A5A40.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400A5C34 @ 0x1400A5C34 (sub_1400A5C34.c)
 *     sub_1400AB5FC @ 0x1400AB5FC (sub_1400AB5FC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1400A5828(__int64 a1)
{
  *(_QWORD *)a1 = off_1400F5988;
  *(_QWORD *)(a1 + 8) = off_1400F58B0;
  *(_QWORD *)(a1 + 16) = off_1400F5838;
  *(_QWORD *)(a1 + 24) = off_1400F5950;
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
  memset((void *)(a1 + 156), 0, 0x1C0uLL);
  *(_QWORD *)(a1 + 608) = 0LL;
  sub_1400A5C34(a1 + 616);
  *(_QWORD *)(a1 + 760) = 0LL;
  *(_QWORD *)(a1 + 768) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 776), 0, 0);
  *(_QWORD *)(a1 + 816) = 0LL;
  sub_1400AB5FC(a1 + 824);
  *(_BYTE *)(a1 + 1328) = 1;
  *(_QWORD *)(a1 + 1336) = 0LL;
  *(_QWORD *)(a1 + 1344) = 0LL;
  *(_QWORD *)(a1 + 1352) = 0LL;
  *(_DWORD *)(a1 + 1360) = 0;
  *(_DWORD *)(a1 + 1364) = 1;
  *(_QWORD *)(a1 + 608) = a1 + 156;
  *(_QWORD *)(a1 + 1368) = a1;
  return a1;
}
