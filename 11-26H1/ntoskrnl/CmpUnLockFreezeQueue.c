/*
 * XREFs of CmpUnLockFreezeQueue @ 0x140773C7C
 * Callers:
 *     CmThawRegistry @ 0x14085D580 (CmThawRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 */

void CmpUnLockFreezeQueue()
{
  signed __int64 v0; // rdx
  __int64 v1; // rtt

  _m_prefetchw(&CmpFreezeListLock);
  v0 = *(_QWORD *)&CmpFreezeListLock.Header.Lock - 16LL;
  if ( (*(_QWORD *)&CmpFreezeListLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpFreezeListLock.Header.Type & 2) != 0
    || (v1 = *(_QWORD *)&CmpFreezeListLock.Header.Lock,
        v1 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpFreezeListLock,
                v0,
                *(signed __int64 *)&CmpFreezeListLock.Header.Lock)) )
  {
    ExfReleasePushLock(&CmpFreezeListLock);
  }
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock);
}
