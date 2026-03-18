/*
 * XREFs of ViDeadlockDetectionLock @ 0x140C37460
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
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall ViDeadlockDetectionLock(int a1)
{
  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&ViDeadlockDatabaseLock);
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(&ViDeadlockDatabaseLock);
  }
}
