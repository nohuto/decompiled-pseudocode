/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x18011D2B0
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800A0ECC (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011D254 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlAcquirePebLock @ 0x1800A0FC0 (RtlAcquirePebLock.c)
 */

NTSTATUS RtlpEnsureLiveDeadListsInitialized()
{
  NTSTATUS result; // eax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlAcquirePebLock();
    if ( !g_SxsLiveActivationContexts )
    {
      qword_1801C5E20 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_1801C5E10 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlReleasePebLock();
  }
  return result;
}
