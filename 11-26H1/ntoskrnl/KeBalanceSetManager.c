/*
 * XREFs of KeBalanceSetManager @ 0x1405FA400
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MiBroadcastPeriodicEventToChildPartitions @ 0x1402A6248 (MiBroadcastPeriodicEventToChildPartitions.c)
 *     MiSystemPeriodicTick @ 0x1402A63BC (MiSystemPeriodicTick.c)
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExpScanGeneralLookasideList @ 0x140428840 (ExpScanGeneralLookasideList.c)
 *     ExpScanSystemLookasideList @ 0x14042894C (ExpScanSystemLookasideList.c)
 *     KePulseEvent @ 0x1404C0CC0 (KePulseEvent.c)
 */

void __noreturn KeBalanceSetManager()
{
  int v0; // ebx
  ULONG ActiveProcessorCount; // r8d
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // r8d
  int v8; // edx
  __int64 v9; // r10
  unsigned int v10; // ecx
  _KERNEL_SHADOW_STACK_LIMIT *p_ExtendedFeatureDisableMask; // rdx
  __int64 **p_WpsFeedback; // rcx
  int v13; // eax

  KeSetPriorityThread(KeGetCurrentThread(), 19);
  v0 = 8;
  LODWORD(KsepShimDbLock.UserWaitTime) = (unsigned __int64)((0x8F0D180
                                                           * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount;
  while ( 1 )
  {
    KeWaitForSingleObject(&word_140F26BA0, Executive, 0, 0, 0LL);
    MiBroadcastPeriodicEventToChildPartitions();
    MiPartitionPeriodicTick((__int64)&MiSystemPartition);
    MiSystemPeriodicTick();
    if ( VslpReservedTransferLock.StackBase
      && !_InterlockedCompareExchange((volatile signed __int32 *)&VslpReservedTransferLock.CycleTime, 1, 0) )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&VslpReservedTransferLock.InitialStack, CriticalWorkQueue);
    }
    if ( IopIrpCreditsEnabled > 1 )
    {
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount > 1 )
      {
        v2 = 0LL;
        v3 = 0;
        do
        {
          v4 = KiProcessorBlock[v2];
          v2 = (unsigned int)(v2 + 1);
          v3 += *(_DWORD *)(v4 + 11676);
        }
        while ( (unsigned int)v2 < ActiveProcessorCount );
        v5 = 0LL;
        v6 = v3 / (int)ActiveProcessorCount;
        v7 = ActiveProcessorCount - 1;
        v8 = 0;
        do
        {
          v9 = KiProcessorBlock[v5];
          v10 = v6 - *(_DWORD *)(v9 + 11676);
          if ( v6 != *(_DWORD *)(v9 + 11676) )
          {
            _InterlockedAdd((volatile signed __int32 *)(v9 + 11676), v10);
            v8 += v10;
          }
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < v7 );
        if ( v8 )
          _InterlockedAdd((volatile signed __int32 *)(KiProcessorBlock[v5] + 11676), -v8);
      }
    }
    if ( !ExpLookasideMgrEnabled )
      break;
LABEL_25:
    if ( LOBYTE(stru_140F03830.CycleTime) > 1u && !--LODWORD(stru_140F03830.QueueListEntry.Blink) )
    {
      LODWORD(stru_140F03830.QueueListEntry.Blink) = 8;
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)&stru_140F03830.TrapFrame, 1, 0) )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F03830.WaitRegister, DelayedWorkQueue);
    }
    if ( PsAltSystemCallRegistrationLock.ApcState.ApcListHead[0].Flink )
    {
      v13 = PspJobTimeLimitsCount;
      if ( PspJobTimeLimitsCount )
      {
        --PspJobTimeLimitsCount;
        if ( v13 == 1 )
        {
          _m_prefetchw(&PsAltSystemCallRegistrationLock.ApcStateFill[8]);
          if ( (_InterlockedOr((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.ApcStateFill[8], 5u) & 4) == 0 )
            ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.Teb, DelayedWorkQueue);
        }
      }
    }
    if ( !--v0 )
    {
      v0 = 8;
      if ( !_InterlockedCompareExchange(&KiStackOutSwapRequest, 1, 0) )
      {
        KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.Timer.TimerListEntry, 1, 0);
        KePulseEvent(&word_140F26B00, 1, 0);
      }
    }
    if ( BYTE4(stru_140F12EA0.SystemAffinityTokenListHead.Next) )
    {
      if ( HIDWORD(KsepShimDbLock.UserWaitTime) != (unsigned int)((((MEMORY[0xFFFFF78000000004]
                                                                   * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                                                                 + ((MEMORY[0xFFFFF78000000004]
                                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 12) )
        HIDWORD(KsepShimDbLock.UserWaitTime) = (((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                                              + ((MEMORY[0xFFFFF78000000004]
                                                * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 12;
    }
  }
  if ( ExpScanCount )
  {
    if ( ExpScanCount != 1 )
    {
      if ( ExpScanCount == 2 )
        ExpScanSystemLookasideList();
      goto LABEL_23;
    }
    p_ExtendedFeatureDisableMask = (_KERNEL_SHADOW_STACK_LIMIT *)&ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask;
    p_WpsFeedback = (__int64 **)&ExSaPageGroupDescriptorArrayLock.Spare35[1];
  }
  else
  {
    p_ExtendedFeatureDisableMask = &ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit;
    p_WpsFeedback = (__int64 **)&ExSaPageGroupDescriptorArrayLock.WpsFeedback;
  }
  ExpScanGeneralLookasideList(p_WpsFeedback, &p_ExtendedFeatureDisableMask->AllFields, 3);
LABEL_23:
  if ( ++ExpScanCount == 3 )
    ExpScanCount = 0;
  goto LABEL_25;
}
