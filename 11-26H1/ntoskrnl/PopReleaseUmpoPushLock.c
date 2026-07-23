/*
 * XREFs of PopReleaseUmpoPushLock @ 0x140AEE150
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426614 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140AA77A8 (PopUmpoProcessMessage.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void PopReleaseUmpoPushLock()
{
  signed __int64 v0; // rdx
  __int64 v1; // rtt

  _m_prefetchw((char *)&PopPdcDeviceListLock.116 + 4);
  v0 = *(_QWORD *)((char *)&PopPdcDeviceListLock.116 + 4) - 16LL;
  if ( (*(_QWORD *)((char *)&PopPdcDeviceListLock.116 + 4) & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (*(_BYTE *)(&PopPdcDeviceListLock.MiscFlags + 1) & 2) != 0
    || (v1 = *(__int64 *)((char *)&PopPdcDeviceListLock.116 + 4),
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)((char *)&PopPdcDeviceListLock.116 + 4),
                v0,
                *(signed __int64 *)((char *)&PopPdcDeviceListLock.116 + 4))) )
  {
    ExfReleasePushLock(($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&PopPdcDeviceListLock.116 + 4));
  }
  KeAbPostRelease((unsigned __int64)&PopPdcDeviceListLock.116 + 4);
  KeLeaveCriticalRegion();
}
