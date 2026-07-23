/*
 * XREFs of MiSystemPeriodicTick @ 0x1402A63BC
 * Callers:
 *     KeBalanceSetManager @ 0x1405FA400 (KeBalanceSetManager.c)
 * Callees:
 *     MiAdjustPteBins @ 0x1402A51F0 (MiAdjustPteBins.c)
 *     MiRetryFileOnlyFailedReapPages @ 0x1402A53D0 (MiRetryFileOnlyFailedReapPages.c)
 *     MiFreeDanglingProtos @ 0x1402A5498 (MiFreeDanglingProtos.c)
 *     MiWakeBadPageSignalThread @ 0x1402A55D4 (MiWakeBadPageSignalThread.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1402A5D98 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiFreeDeferredAcceleratorPool @ 0x1402A5E74 (MiFreeDeferredAcceleratorPool.c)
 *     MiCheckLogPinDriverAddresses @ 0x1402A5F6C (MiCheckLogPinDriverAddresses.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     FirstEntrySList @ 0x140735850 (FirstEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char MiSystemPeriodicTick()
{
  PSLIST_ENTRY v1; // rbx
  PSLIST_ENTRY v2; // rcx

  MiReclaimUnusedUltraMdlMaps();
  MiFreeDeferredAcceleratorPool();
  if ( FirstEntrySList((PSLIST_HEADER)&stru_140E2DAB0.QuantumTarget) )
  {
    v1 = RtlpInterlockedFlushSList((PSLIST_HEADER)&stru_140E2DAB0.QuantumTarget);
    while ( v1 )
    {
      v2 = v1;
      v1 = v1->Next;
      ExFreePoolWithTag(v2, 0);
    }
  }
  MiCheckLogPinDriverAddresses();
  if ( stru_140E366D8.FirstArgument && (dword_140E2C8D0 & 0x3FFFFF) != 0 && !stru_140E2C8F0.Parameter )
  {
    stru_140E2C8F0.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140E2C8F0, DelayedWorkQueue);
  }
  MiWakeBadPageSignalThread();
  MiFreeDanglingProtos();
  MiRetryFileOnlyFailedReapPages(0);
  return MiAdjustPteBins();
}
