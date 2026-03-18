/*
 * XREFs of ExpPoolMgrReleasePoolListLockShared @ 0x1404CA9F4
 * Callers:
 *     ExpPoolMgrGetNextPoolCommon @ 0x140AC379C (ExpPoolMgrGetNextPoolCommon.c)
 *     ExpPoolMgrResolveMaintenanceHint @ 0x140AC3850 (ExpPoolMgrResolveMaintenanceHint.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void __fastcall ExpPoolMgrReleasePoolListLockShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((unsigned __int64)v1);
  KeLeaveCriticalRegion();
}
