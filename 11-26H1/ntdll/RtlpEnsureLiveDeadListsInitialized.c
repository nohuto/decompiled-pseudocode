/*
 * XREFs of RtlpEnsureLiveDeadListsInitialized @ 0x18011D500
 * Callers:
 *     RtlpMoveActCtxToFreeList @ 0x1800A1D9C (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011D4A4 (RtlpPlaceActivationContextOnLiveList.c)
 * Callees:
 *     RtlAcquirePebLock @ 0x1800A1E90 (RtlAcquirePebLock.c)
 */

__int64 RtlpEnsureLiveDeadListsInitialized()
{
  __int64 result; // rax

  if ( !g_SxsLiveActivationContexts )
  {
    RtlAcquirePebLock();
    if ( !g_SxsLiveActivationContexts )
    {
      qword_1801C6E20 = (__int64)&g_SxsLiveActivationContexts;
      g_SxsLiveActivationContexts = (__int64)&g_SxsLiveActivationContexts;
      qword_1801C6E10 = (__int64)&g_SxsFreeActivationContexts;
      g_SxsFreeActivationContexts = (__int64)&g_SxsFreeActivationContexts;
    }
    return RtlReleasePebLock();
  }
  return result;
}
