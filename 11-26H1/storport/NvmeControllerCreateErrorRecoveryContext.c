/*
 * XREFs of NvmeControllerCreateErrorRecoveryContext @ 0x1400F2248
 * Callers:
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerCreateCommandTimeoutDetectThread @ 0x1400F2140 (NvmeControllerCreateCommandTimeoutDetectThread.c)
 */

__int64 __fastcall NvmeControllerCreateErrorRecoveryContext(_QWORD *DeferredContext)
{
  __int64 Pool; // rax
  int CommandTimeoutDetectThread; // ebx
  void *v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  ULONGLONG *v8; // rbx

  Pool = RaidAllocatePool(72LL, 1752LL, 1380147538LL, *(_QWORD *)(DeferredContext[16] + 8LL));
  DeferredContext[161] = Pool;
  if ( Pool )
  {
    *(_QWORD *)(Pool + 32) = Pool + 64;
    *(_QWORD *)(DeferredContext[161] + 40LL) = *(_QWORD *)(DeferredContext[161] + 32LL) + 64LL;
    *(_QWORD *)(*(_QWORD *)(DeferredContext[161] + 32LL) + 16LL) = *(_QWORD *)(DeferredContext[161] + 40LL) + 256LL;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(DeferredContext[161] + 32LL) + 16LL) + 63LL) = 10;
    v6 = *(_QWORD *)(*(_QWORD *)(DeferredContext[161] + 32LL) + 16LL);
    *(_QWORD *)(v6 + 64) = v6 + 72;
    *(_QWORD *)(*(_QWORD *)(DeferredContext[161] + 40LL) + 240LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DeferredContext[161] + 32LL)
                                                                                          + 16LL)
                                                                              + 64LL)
                                                                  + 160LL;
    v7 = *(_QWORD *)(*(_QWORD *)(DeferredContext[161] + 40LL) + 240LL);
    *(_QWORD *)(v7 + 8) = v7 + 16;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(DeferredContext[161] + 40LL) + 240LL) + 5LL) = 10;
    InitializeSListHead(*(PSLIST_HEADER *)(DeferredContext[161] + 32LL));
    KeInitializeEvent((PRKEVENT)(*(_QWORD *)(DeferredContext[161] + 32LL) + 24LL), SynchronizationEvent, 0);
    *(_DWORD *)(*(_QWORD *)(DeferredContext[161] + 40LL) + 196LL) = 2;
    KeInitializeEvent((PRKEVENT)(*(_QWORD *)(DeferredContext[161] + 40LL) + 200LL), SynchronizationEvent, 0);
    v8 = *(ULONGLONG **)(DeferredContext[161] + 40LL);
    *v8 = KeQueryUnbiasedInterruptTime();
    CommandTimeoutDetectThread = NvmeControllerCreateCommandTimeoutDetectThread(DeferredContext);
    if ( CommandTimeoutDetectThread >= 0 )
    {
      KeInitializeDpc(
        (PRKDPC)(*(_QWORD *)(DeferredContext[161] + 40LL) + 64LL),
        (PKDEFERRED_ROUTINE)NvmeControllerCommandTimeoutDetectDpcRoutine,
        DeferredContext);
      KeInitializeTimer((PKTIMER)(*(_QWORD *)(DeferredContext[161] + 40LL) + 128LL));
      return (unsigned int)CommandTimeoutDetectThread;
    }
  }
  else
  {
    CommandTimeoutDetectThread = -1073741670;
  }
  v4 = (void *)DeferredContext[161];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x52436152u);
    DeferredContext[161] = 0LL;
  }
  return (unsigned int)CommandTimeoutDetectThread;
}
