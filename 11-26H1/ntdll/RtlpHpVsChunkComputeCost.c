/*
 * XREFs of RtlpHpVsChunkComputeCost @ 0x18008BBE4
 * Callers:
 *     RtlpHpVsChunkFree @ 0x18008B490 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800E63DC (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800EC12C (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8030 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsChunkComputeCost(unsigned __int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 *a4)
{
  int v5; // ebx
  __int16 v6; // di
  unsigned __int64 v7; // r11
  __int64 v8; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned int v15; // r8d
  unsigned __int64 v16; // r9
  __int64 result; // rax

  v5 = a1;
  v6 = a1;
  v7 = a1 >> 16;
  v8 = *(_QWORD *)a1 >> 16;
  v10 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (unsigned __int64)(unsigned __int16)(v7 ^ v8));
  v11 = (v10 + (v6 & 0xFFF) + 4095LL) >> 12;
  v12 = (v10 + 4095) >> 12;
  v13 = (v5 + 16 * ((unsigned __int16)v7 ^ (unsigned __int16)v8 ^ WORD1(RtlpHpHeapGlobals)) - a2) & 0xFFFFF000;
  v14 = (v5 - a2 + 4127) & 0xFFFFF000;
  if ( v14 >= v13 )
  {
    v15 = 0;
    v16 = 0LL;
  }
  else
  {
    v15 = v13 - v14;
    v16 = *(_QWORD *)(a2 + 16) & (-1LL << (v14 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v13 - 1) >> 12)));
  }
  *a4 = v16;
  result = (unsigned int)(v11 - v12);
  *a3 = v15 >> 12;
  return result;
}
