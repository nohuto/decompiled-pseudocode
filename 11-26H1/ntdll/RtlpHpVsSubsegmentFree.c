/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x1800E0704
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18005EA34 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsSlotFreeList @ 0x1800E0364 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsContextCleanup @ 0x1800E0604 (RtlpHpVsContextCleanup.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1800F8030 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)(a1 + 8) ^ a1,
           a2,
           16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3),
           0LL);
}
