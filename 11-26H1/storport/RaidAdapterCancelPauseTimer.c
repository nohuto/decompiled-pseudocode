/*
 * XREFs of RaidAdapterCancelPauseTimer @ 0x1400495EC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140028880 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x140060844 (RaidAdapterDeleteAsyncCallbacks.c)
 * Callees:
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x140010F40 (RaidAdapterRestartQueues.c)
 */

BOOLEAN __fastcall RaidAdapterCancelPauseTimer(__int64 a1, struct _KTIMER *a2)
{
  BOOLEAN v3; // bl
  __int64 v4; // r9

  v3 = KeCancelTimer(a2);
  if ( v3 && !(unsigned int)RaidResumeAdapterQueue(a1, 0LL, 0LL, v4) )
    RaidAdapterRestartQueues(a1, 0);
  return v3;
}
