/*
 * XREFs of RtlReleasePebLock @ 0x1800A1EB0
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800A1D9C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011D4A4 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011D500 (RtlpEnsureLiveDeadListsInitialized.c)
 * Callees:
 *     <none>
 */

__int64 RtlReleasePebLock()
{
  return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
