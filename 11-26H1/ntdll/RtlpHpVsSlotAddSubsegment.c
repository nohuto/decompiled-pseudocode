/*
 * XREFs of RtlpHpVsSlotAddSubsegment @ 0x18005E810
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x18005E538 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpHpVsFreeChunkInsert @ 0x1800E63DC (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180111930 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsSlotAddSubsegment(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 *v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rax

  *(_WORD *)(a3 + 34) = (unsigned __int64)(a2 - a1) >> 6;
  v6 = a2 + 32;
  v7 = (__int64 *)(a2 + 40);
  v8 = *v7 ^ v6;
  if ( (*(_QWORD *)v8 ^ v8) != v6 )
    __fastfail(3u);
  v9 = a3 ^ v6;
  *(_QWORD *)a3 = v9;
  *(_QWORD *)(a3 + 8) = a3 ^ v8;
  *(_QWORD *)v8 = a3 ^ v8;
  *v7 = v9;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((a3 + 80) & 0xFFF) != 0 )
  {
    v11 = RtlpHpVsChunkAlignSplit(v8, a3, a3 + 48);
    if ( v11 )
      RtlpHpVsFreeChunkInsert(a1, a2, a3, v11);
  }
  return RtlpHpVsFreeChunkInsert(a1, a2, a3, a3 + 48);
}
