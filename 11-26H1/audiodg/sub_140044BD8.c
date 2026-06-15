/*
 * XREFs of sub_140044BD8 @ 0x140044BD8
 * Callers:
 *     sub_1400447DC @ 0x1400447DC (sub_1400447DC.c)
 * Callees:
 *     sub_1400329F8 @ 0x1400329F8 (sub_1400329F8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140044BD8(__int64 a1)
{
  *(_QWORD *)a1 = &off_1400F57A8;
  *(_QWORD *)(a1 + 8) = &off_1400F5718;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 16), 0, 0);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  sub_1400329F8(a1 + 216);
  *(_BYTE *)(a1 + 416) = 1;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 176) = 1;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  return a1;
}
