/*
 * XREFs of KiSwapStacksAndRetireDpcList @ 0x14072C440
 * Callers:
 *     KiDispatchInterrupt @ 0x140223290 (KiDispatchInterrupt.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x14023F880 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x14023FC00 (KiSearchForNewThreadsWithinSearchContext.c)
 *     KiFlushQueuedDpcsWorker @ 0x1404F2190 (KiFlushQueuedDpcsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSwapStacksAndRetireDpcList(__int64 a1, __int64 a2)
{
  __int64 savedregs; // [rsp+0h] [rbp+0h] BYREF

  *(_QWORD *)(a2 + 64) = &savedregs;
  return KxSwapStacksAndRetireDpcList();
}
