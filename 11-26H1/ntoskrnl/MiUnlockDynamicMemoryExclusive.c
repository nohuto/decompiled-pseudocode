/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x14052A718
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x1406E88D0 (MiFreeUnusedPfnPages.c)
 *     MiClearPartitionPageBitMap @ 0x140708808 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPageNodes @ 0x140708F28 (MiInsertPartitionPageNodes.c)
 *     MiRebuildPartitionMemoryBlock @ 0x1407095C0 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x1407098B8 (MiReturnPartitionPagesToParent.c)
 *     MiReleaseAddMemoryLocks @ 0x140866D0C (MiReleaseAddMemoryLocks.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14087CD4C (MiUpdatePartitionLargePfnBitMap.c)
 *     MiNodeZeroConductor @ 0x140B27510 (MiNodeZeroConductor.c)
 *     MiInitializeMirroring @ 0x140CF8AE4 (MiInitializeMirroring.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = a1 + 264;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 264));
  KeAbPostRelease(v3);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
