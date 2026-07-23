/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14093BD10
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x14093B458 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14093B56C (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeWakeWaitChain @ 0x140272C70 (KeWakeWaitChain.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

void __fastcall VrpRelinquishDiffHiveEntryTransitionOwner(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 40;
  *(_QWORD *)(a1 + 40) = 0LL;
  KeWakeWaitChain((__int64 **)(a1 + 48), 0, 0LL);
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
