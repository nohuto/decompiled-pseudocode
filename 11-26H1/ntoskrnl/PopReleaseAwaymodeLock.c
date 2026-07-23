/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140C0E9F0
 * Callers:
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopPowerRequestCallbackAwayModeRequired @ 0x140B3CE50 (PopPowerRequestCallbackAwayModeRequired.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void PopReleaseAwaymodeLock()
{
  signed __int64 v0; // rdx
  __int64 v1; // rtt

  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock.ReservedPreviousReadyTimeValue);
  v0 = *(_QWORD *)&PpmIdlePolicyLock.ReservedPreviousReadyTimeValue - 16LL;
  if ( (*(_QWORD *)&PpmIdlePolicyLock.ReservedPreviousReadyTimeValue & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (PpmIdlePolicyLock.ReservedPreviousReadyTimeValue & 2) != 0
    || (v1 = *(_QWORD *)&PpmIdlePolicyLock.ReservedPreviousReadyTimeValue,
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&PpmIdlePolicyLock.ReservedPreviousReadyTimeValue,
                v0,
                *(signed __int64 *)&PpmIdlePolicyLock.ReservedPreviousReadyTimeValue)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock.ReservedPreviousReadyTimeValue);
  }
  KeAbPostRelease((unsigned __int64)&PpmIdlePolicyLock.ReservedPreviousReadyTimeValue);
  KeLeaveCriticalRegion();
}
