/*
 * XREFs of sub_140032884 @ 0x140032884
 * Callers:
 *     sub_140032764 @ 0x140032764 (sub_140032764.c)
 *     sub_14004D858 @ 0x14004D858 (sub_14004D858.c)
 * Callees:
 *     sub_140020D50 @ 0x140020D50 (sub_140020D50.c)
 *     sub_1400329B8 @ 0x1400329B8 (sub_1400329B8.c)
 */

__int64 __fastcall sub_140032884(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  sub_1400329B8(a1 + 80);
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  sub_140020D50((_QWORD *)(a1 + 152));
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_DWORD *)(a1 + 208) = 10;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 216), 0, 0);
  *(_DWORD *)(a1 + 256) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 264), 0, 0);
  *(_QWORD *)(a1 + 304) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_DWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_OWORD *)(a1 + 344) = xmmword_1400C5548;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  return result;
}
