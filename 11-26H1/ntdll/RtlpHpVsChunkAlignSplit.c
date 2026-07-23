/*
 * XREFs of RtlpHpVsChunkAlignSplit @ 0x180111930
 * Callers:
 *     RtlpHpVsSlotAddSubsegment @ 0x18005E810 (RtlpHpVsSlotAddSubsegment.c)
 *     RtlpHpVsChunkFree @ 0x18008B490 (RtlpHpVsChunkFree.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpVsChunkAlignSplit(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v5; // edx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r8
  unsigned int v8; // edx
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned __int64 v12; // r9

  v5 = WORD1(*(_QWORD *)a3);
  v6 = a3 >> 16;
  v7 = (a3 + 4111) & 0xFFFFFFFFFFFFF000uLL;
  v8 = WORD1(RtlpHpHeapGlobals) ^ (unsigned __int16)v6 ^ v5;
  if ( v7 - a3 >= 16 * (unsigned __int64)v8 )
    return 0LL;
  v9 = v7 - 32;
  v10 = (__int64)(v9 - a3) >> 4;
  v11 = v8 - v10;
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ v6 ^ v10;
  *(_OWORD *)v9 = 0LL;
  *(_WORD *)(v9 + 2) = v11;
  *(_WORD *)(v9 + 4) = v10;
  *(_QWORD *)v9 ^= RtlpHpHeapGlobals ^ v9;
  v12 = v9 + 16LL * v11;
  if ( v12 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    *(_WORD *)(v12 + 4) = WORD2(v12) ^ v11 ^ WORD2(RtlpHpHeapGlobals);
  return v9;
}
