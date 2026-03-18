/*
 * XREFs of CmpUnLockFreezeQueue @ 0x140770C7C
 * Callers:
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
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
