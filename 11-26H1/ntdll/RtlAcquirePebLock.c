/*
 * XREFs of RtlAcquirePebLock @ 0x1800A0FC0
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800A0ECC (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011D254 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x18011D2B0 (RtlpEnsureLiveDeadListsInitialized.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlAcquirePebLock(void)
{
  return RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
