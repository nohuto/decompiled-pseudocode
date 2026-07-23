/*
 * XREFs of RtlReleasePebLock @ 0x1800A0FE0
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800A0ECC (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011D254 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011D2B0 (RtlpEnsureLiveDeadListsInitialized.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlReleasePebLock(void)
{
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
