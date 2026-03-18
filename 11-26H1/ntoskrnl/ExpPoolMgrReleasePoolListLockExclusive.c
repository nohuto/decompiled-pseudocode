/*
 * XREFs of ExpPoolMgrReleasePoolListLockExclusive @ 0x1404D15DC
 * Callers:
 *     ExpPoolMgrRegisterPool @ 0x1408474A0 (ExpPoolMgrRegisterPool.c)
 *     ExpPoolMgrUnregisterPool @ 0x1408475D0 (ExpPoolMgrUnregisterPool.c)
 *     ExpPoolMgrSetMaintenanceHint @ 0x140AC38B0 (ExpPoolMgrSetMaintenanceHint.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall ExpPoolMgrReleasePoolListLockExclusive(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
