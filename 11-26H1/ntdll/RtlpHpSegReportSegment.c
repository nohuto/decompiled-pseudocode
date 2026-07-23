/*
 * XREFs of RtlpHpSegReportSegment @ 0x180095938
 * Callers:
 *     RtlpHpSegWalk @ 0x180094C1C (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x180095A00 (RtlpHpSegPageRangeCountCommittedPages.c)
 */

__int64 __fastcall RtlpHpSegReportSegment(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  int v9; // eax
  __int64 result; // rax

  v3 = *(unsigned __int8 *)(a1 + 10);
  v7 = (unsigned int)-*(_DWORD *)a1;
  v8 = a3 + 32LL * *(unsigned __int8 *)(a1 + 10);
  v9 = v3 + RtlpHpSegPageRangeCountCommittedPages(a1, v8, (unsigned int)(256 - v3));
  *(_QWORD *)(a2 + 8) = v7;
  v9 <<= 12;
  *(_DWORD *)(a2 + 24) = v9;
  *(_DWORD *)(a2 + 28) = v7 - v9;
  *(_QWORD *)a2 = a3;
  *(_WORD *)(a2 + 18) = 2;
  *(_BYTE *)(a2 + 17) = 0;
  *(_QWORD *)(a2 + 32) = (*(_QWORD *)a1 & v8) + ((unsigned int)((v8 - (*(_QWORD *)a1 & v8)) >> 5) << *(_BYTE *)(a1 + 8));
  result = (*(_QWORD *)a1 & (v8 + 8160))
         + ((unsigned int)((v8 + 8160 - (*(_QWORD *)a1 & (v8 + 8160))) >> 5) << *(_BYTE *)(a1 + 8));
  *(_QWORD *)(a2 + 40) = result;
  return result;
}
