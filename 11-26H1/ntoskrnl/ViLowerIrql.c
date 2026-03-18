/*
 * XREFs of ViLowerIrql @ 0x14064738C
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
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
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
