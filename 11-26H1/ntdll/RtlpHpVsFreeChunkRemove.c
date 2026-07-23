/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x1800EC12C
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18005EA34 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8030 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x18008BBE4 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbRemoveNode @ 0x18008BD00 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, _RTL_RB_TREE *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  int v8; // r8d
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  RtlRbRemoveNode(a2 + 1, (PRTL_BALANCED_NODE)(a4 + 8));
  result = RtlpHpVsChunkComputeCost(a4, a3, &v9, &v10);
  v8 = ((unsigned __int16)*(_QWORD *)a4 ^ (unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)a4) - result - v9;
  if ( *(_WORD *)(a1 + 6) )
  {
    result = *(__int16 *)(a1 + 6);
    _InterlockedAdd64((volatile signed __int64 *)(result + a1 + 32), v8);
  }
  else
  {
    *(_QWORD *)(a1 + 96) += v8;
  }
  return result;
}
