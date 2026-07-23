/*
 * XREFs of KiSaveCurrentEtwTraceBuffer @ 0x1405EB290
 * Callers:
 *     KiCollectTriageDumpDataBlocks @ 0x1405EA4DC (KiCollectTriageDumpDataBlocks.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     EtwGetProcessorBuffer @ 0x1406C7360 (EtwGetProcessorBuffer.c)
 */

char KiSaveCurrentEtwTraceBuffer()
{
  int ProcessorBuffer; // eax
  __int64 v1; // rdx
  ULONG v2; // ecx
  __int64 v3; // rdx
  ULONG v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  ProcessorBuffer = EtwGetProcessorBuffer(2LL, KeGetCurrentPrcb()->Number, &v6);
  if ( ProcessorBuffer >= 0 )
  {
    v1 = 0x2000LL;
    KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v6;
    KiDpcWatchdogConfigurationLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v6 + HIDWORD(v6));
    if ( HIDWORD(v6) >= 0x2000uLL )
    {
      v2 = v6 + HIDWORD(v6) - 0x2000;
    }
    else
    {
      v1 = HIDWORD(v6);
      v2 = v6;
    }
    IoAddTriageDumpDataBlock(v2, (PVOID)v1);
    IoAddTriageDumpDataBlock((ULONG)&KiDpcWatchdogConfigurationLock.Header.WaitListHead.Blink, (PVOID)8);
    LOBYTE(ProcessorBuffer) = IoAddTriageDumpDataBlock(
                                (ULONG)&KiDpcWatchdogConfigurationLock.Header.WaitListHead,
                                (PVOID)8);
  }
  if ( ErrorLogSessionOpened )
  {
    ProcessorBuffer = EtwGetProcessorBuffer((unsigned __int16)IopErrorLogSession, KeGetCurrentPrcb()->Number, &v6);
    if ( ProcessorBuffer >= 0 )
    {
      v3 = 4096LL;
      KiDpcWatchdogConfigurationLock.QuantumTarget = v6;
      KiDpcWatchdogConfigurationLock.SListFaultAddress = (void *)(v6 + HIDWORD(v6));
      if ( HIDWORD(v6) >= 0x1000uLL )
      {
        v4 = v6 + HIDWORD(v6) - 4096;
      }
      else
      {
        v3 = HIDWORD(v6);
        v4 = v6;
      }
      IoAddTriageDumpDataBlock(v4, (PVOID)v3);
      IoAddTriageDumpDataBlock((ULONG)&KiDpcWatchdogConfigurationLock.QuantumTarget, (PVOID)8);
      LOBYTE(ProcessorBuffer) = IoAddTriageDumpDataBlock(
                                  (ULONG)&KiDpcWatchdogConfigurationLock.SListFaultAddress,
                                  (PVOID)8);
    }
  }
  return ProcessorBuffer;
}
