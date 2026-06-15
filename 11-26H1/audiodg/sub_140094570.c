/*
 * XREFs of sub_140094570 @ 0x140094570
 * Callers:
 *     sub_1400942C8 @ 0x1400942C8 (sub_1400942C8.c)
 *     sub_14009441C @ 0x14009441C (sub_14009441C.c)
 * Callees:
 *     sub_140094610 @ 0x140094610 (sub_140094610.c)
 */

__int64 __fastcall sub_140094570(__int64 a1)
{
  __int64 result; // rax

  sub_140094610();
  *(_QWORD *)a1 = off_1400BF368;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 16), 0, 0);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 80) = -1;
  *(_DWORD *)(a1 + 84) = -1;
  result = a1;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
