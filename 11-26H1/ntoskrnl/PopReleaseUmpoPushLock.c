/*
 * XREFs of PopReleaseUmpoPushLock @ 0x140AEB244
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140437684 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140AAA1C8 (PopUmpoProcessMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

void PopReleaseUmpoPushLock()
{
  signed __int64 v0; // rdx
  __int64 WriteTransferCount; // rtt

  _m_prefetchw(&PopModernStandbyStateNotify.WriteTransferCount);
  v0 = PopModernStandbyStateNotify.WriteTransferCount - 16;
  if ( (PopModernStandbyStateNotify.WriteTransferCount & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (PopModernStandbyStateNotify.WriteTransferCount & 2) != 0
    || (WriteTransferCount = PopModernStandbyStateNotify.WriteTransferCount,
        WriteTransferCount != _InterlockedCompareExchange64(
                                &PopModernStandbyStateNotify.WriteTransferCount,
                                v0,
                                PopModernStandbyStateNotify.WriteTransferCount)) )
  {
    ExfReleasePushLock(&PopModernStandbyStateNotify.WriteTransferCount);
  }
  KeAbPostRelease((unsigned __int64)&PopModernStandbyStateNotify.WriteTransferCount);
  KeLeaveCriticalRegion();
}
