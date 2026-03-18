/*
 * XREFs of MiUnlockPartitionMappedWriter @ 0x140496C74
 * Callers:
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x140496920 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x1404973CC (MiDeleteMappedMdls.c)
 *     MiAllocateMappedWriterMdls @ 0x1404B64F0 (MiAllocateMappedWriterMdls.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockPartitionMappedWriter(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = a1 + 736;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 736), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 736));
  KeAbPostRelease(v3);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    KiCheckForKernelApcDelivery(v5, v4);
}
