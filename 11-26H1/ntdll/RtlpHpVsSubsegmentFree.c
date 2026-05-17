/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x18008ECDC
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x180013304 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotFreeList @ 0x18008E93C (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsContextCleanup @ 0x18008EBDC (RtlpHpVsContextCleanup.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8860 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)(a1 + 8) ^ a1,
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           0LL);
}
