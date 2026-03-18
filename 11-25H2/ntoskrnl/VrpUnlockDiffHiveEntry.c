/*
 * XREFs of VrpUnlockDiffHiveEntry @ 0x1409471A0
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x140947228 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14094AFAC (VrpLoadDifferencingHive.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14094B784 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall VrpUnlockDiffHiveEntry(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
