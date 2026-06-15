/*
 * XREFs of sub_140003424 @ 0x140003424
 * Callers:
 *     sub_1400033B8 @ 0x1400033B8 (sub_1400033B8.c)
 *     sub_1400036C0 @ 0x1400036C0 (sub_1400036C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140003424(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_1400B8320;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 32), 0, 0);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 112) = 10;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 10;
  *(_DWORD *)(a1 + 168) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 176), 0, 0);
  *(_QWORD *)(a1 + 216) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_BYTE *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_WORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = 0;
  return result;
}
