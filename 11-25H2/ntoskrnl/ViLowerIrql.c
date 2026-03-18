/*
 * XREFs of ViLowerIrql @ 0x1406082A8
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140608018 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140608178 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockInitializeResource @ 0x140B880D0 (VfDeadlockInitializeResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x140B891A8 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x140B8925C (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140B8A304 (ViIsThreadInsidePagingCodePaths.c)
 *     VfDeadlockReleaseResource @ 0x140B975CC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140B983E4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ViLowerIrql(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1;
  result = KeGetCurrentIrql();
  if ( a1 < (unsigned __int8)result )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a1);
    __writecr8(v1);
  }
  return result;
}
