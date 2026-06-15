/*
 * XREFs of sub_140003C3C @ 0x140003C3C
 * Callers:
 *     sub_140003CFC @ 0x140003CFC (sub_140003CFC.c)
 *     sub_14004D97C @ 0x14004D97C (sub_14004D97C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140003C3C(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 144), 0, 0);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_OWORD *)(a1 + 208) = xmmword_1400C5548;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 224), 0, 0);
  result = a1;
  *(_BYTE *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0LL;
  return result;
}
