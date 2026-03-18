/*
 * XREFs of ViRaiseIrqlToDpcLevel @ 0x1406473C4
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1406470F8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14064725C (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockInitializeResource @ 0x140C36320 (VfDeadlockInitializeResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x140C37414 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140C374CC (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140C384F0 (ViIsThreadInsidePagingCodePaths.c)
 *     VfDeadlockReleaseResource @ 0x140C4493C (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140C47314 (VfDeadlockAcquireResource.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 ViRaiseIrqlToDpcLevel()
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v1; // cl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v1 = KeGetCurrentIrql();
    if ( v1 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v1, 2);
  }
  return CurrentIrql;
}
