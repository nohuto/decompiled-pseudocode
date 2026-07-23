/*
 * XREFs of ExpPoolMgrReleasePoolListLockShared @ 0x1404C4424
 * Callers:
 *     ExpPoolMgrGetNextPoolCommon @ 0x140AC540C (ExpPoolMgrGetNextPoolCommon.c)
 *     ExpPoolMgrResolveMaintenanceHint @ 0x140AC54C0 (ExpPoolMgrResolveMaintenanceHint.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
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
