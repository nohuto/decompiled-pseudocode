/*
 * XREFs of VrpRelinquishDiffHiveEntryTransitionOwner @ 0x140979D00
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x140979448 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14097955C (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeWakeWaitChain @ 0x140273700 (KeWakeWaitChain.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
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
