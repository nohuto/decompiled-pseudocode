/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x1800ECD3C
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x180013304 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8860 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x18006B794 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbRemoveNode @ 0x18006B8B0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  int v8; // r8d
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  RtlRbRemoveNode(a2 + 16, (__int64)(a4 + 1));
  result = RtlpHpVsChunkComputeCost((unsigned __int64)a4, a3, &v9, &v10);
  v8 = ((unsigned __int16)*a4 ^ (unsigned __int16)RtlpHpHeapGlobals ^ (unsigned __int16)a4) - result - v9;
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
