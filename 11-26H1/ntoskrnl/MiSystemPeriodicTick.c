/*
 * XREFs of MiSystemPeriodicTick @ 0x1402A6FA0
 * Callers:
 *     KeBalanceSetManager @ 0x1405F79E0 (KeBalanceSetManager.c)
 * Callees:
 *     MiAdjustPteBins @ 0x1402A5DF8 (MiAdjustPteBins.c)
 *     MiRetryFileOnlyFailedReapPages @ 0x1402A5FD8 (MiRetryFileOnlyFailedReapPages.c)
 *     MiFreeDanglingProtos @ 0x1402A60A0 (MiFreeDanglingProtos.c)
 *     MiWakeBadPageSignalThread @ 0x1402A61DC (MiWakeBadPageSignalThread.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1402A697C (MiReclaimUnusedUltraMdlMaps.c)
 *     MiFreeDeferredAcceleratorPool @ 0x1402A6A58 (MiFreeDeferredAcceleratorPool.c)
 *     MiCheckLogPinDriverAddresses @ 0x1402A6B50 (MiCheckLogPinDriverAddresses.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     FirstEntrySList @ 0x140730C80 (FirstEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char MiSystemPeriodicTick()
{
  PSLIST_ENTRY v1; // rbx
  PSLIST_ENTRY v2; // rcx

  MiReclaimUnusedUltraMdlMaps();
  MiFreeDeferredAcceleratorPool();
  if ( FirstEntrySList((PSLIST_HEADER)&stru_140E2D930.QuantumTarget) )
  {
    v1 = RtlpInterlockedFlushSList((PSLIST_HEADER)&stru_140E2D930.QuantumTarget);
    while ( v1 )
    {
      v2 = v1;
      v1 = v1->Next;
      ExFreePoolWithTag(v2, 0);
    }
  }
  MiCheckLogPinDriverAddresses();
  if ( stru_140E36558.FirstArgument && (dword_140E2C750 & 0x3FFFFF) != 0 && !stru_140E2C770.Parameter )
  {
    stru_140E2C770.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140E2C770, DelayedWorkQueue);
  }
  MiWakeBadPageSignalThread();
  MiFreeDanglingProtos();
  MiRetryFileOnlyFailedReapPages(0);
  return MiAdjustPteBins();
}
