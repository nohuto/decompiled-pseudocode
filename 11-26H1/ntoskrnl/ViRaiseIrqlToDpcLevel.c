/*
 * XREFs of ViRaiseIrqlToDpcLevel @ 0x14064AFA4
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14064ACD8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14064AE3C (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockInitializeResource @ 0x140C3C330 (VfDeadlockInitializeResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x140C3D424 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140C3D4DC (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140C3E500 (ViIsThreadInsidePagingCodePaths.c)
 *     VfDeadlockReleaseResource @ 0x140C4A94C (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
