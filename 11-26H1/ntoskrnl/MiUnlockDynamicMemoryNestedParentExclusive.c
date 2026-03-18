/*
 * XREFs of MiUnlockDynamicMemoryNestedParentExclusive @ 0x1406EA248
 * Callers:
 *     MiReturnPartitionPagesToParent @ 0x1407098B8 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockDynamicMemoryNestedParentExclusive(__int64 a1)
{
  __int64 v1; // rbx

  v1 = **(_QWORD **)(*(_QWORD *)(a1 + 256) + 72LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 264));
  KeAbPostRelease(v1 + 264);
}
