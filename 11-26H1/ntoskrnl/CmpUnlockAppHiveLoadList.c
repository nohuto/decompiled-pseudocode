/*
 * XREFs of CmpUnlockAppHiveLoadList @ 0x1408B1198
 * Callers:
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

void CmpUnlockAppHiveLoadList()
{
  PVOID *p_SystemArgument2; // rdx
  _KDPC *Dpc; // rtt

  _m_prefetchw(&CmpKeyLockTracker.Timer.Dpc);
  p_SystemArgument2 = &CmpKeyLockTracker.Timer.Dpc[-1].SystemArgument2;
  if ( ((unsigned __int64)CmpKeyLockTracker.Timer.Dpc & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    p_SystemArgument2 = 0LL;
  if ( ((__int64)CmpKeyLockTracker.Timer.Dpc & 2) != 0
    || (Dpc = CmpKeyLockTracker.Timer.Dpc,
        Dpc != (_KDPC *)_InterlockedCompareExchange64(
                          (volatile signed __int64 *)&CmpKeyLockTracker.Timer.Dpc,
                          (signed __int64)p_SystemArgument2,
                          (signed __int64)CmpKeyLockTracker.Timer.Dpc)) )
  {
    ExfReleasePushLock(&CmpKeyLockTracker.Timer.Dpc);
  }
  KeAbPostRelease((unsigned __int64)&CmpKeyLockTracker.Timer.Dpc);
  KeLeaveCriticalRegion();
}
