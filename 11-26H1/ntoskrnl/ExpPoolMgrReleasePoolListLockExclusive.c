/*
 * XREFs of ExpPoolMgrReleasePoolListLockExclusive @ 0x1404CB00C
 * Callers:
 *     ExpPoolMgrRegisterPool @ 0x14084D700 (ExpPoolMgrRegisterPool.c)
 *     ExpPoolMgrUnregisterPool @ 0x14084D830 (ExpPoolMgrUnregisterPool.c)
 *     ExpPoolMgrSetMaintenanceHint @ 0x140AC5520 (ExpPoolMgrSetMaintenanceHint.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
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
