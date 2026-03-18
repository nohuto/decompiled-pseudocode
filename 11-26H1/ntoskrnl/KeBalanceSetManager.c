/*
 * XREFs of KeBalanceSetManager @ 0x1405F79E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     MiBroadcastPeriodicEventToChildPartitions @ 0x1402A6E2C (MiBroadcastPeriodicEventToChildPartitions.c)
 *     MiSystemPeriodicTick @ 0x1402A6FA0 (MiSystemPeriodicTick.c)
 *     MiPartitionPeriodicTick @ 0x1402A703C (MiPartitionPeriodicTick.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExpScanGeneralLookasideList @ 0x140433770 (ExpScanGeneralLookasideList.c)
 *     ExpScanSystemLookasideList @ 0x14043387C (ExpScanSystemLookasideList.c)
 *     KePulseEvent @ 0x1404C7410 (KePulseEvent.c)
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
  $7593FFE5FD7F8AD12EB10858261A32F1 *p_KernelShadowStack; // rdx
  __int64 **p_Blink; // rcx
  int v13; // eax

  KeSetPriorityThread(KeGetCurrentThread(), 19);
  v0 = 8;
  LODWORD(KsepShimDbLock.KernelWaitTime) = (unsigned __int64)((0x8F0D180
                                                             * (unsigned __int128)*(unsigned __int64 *)&stru_140FC01F0.SavedApcStateFill[40]) >> 64) >> KiMaximumIncrementShiftCount;
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSupervisorXStateFeaturesLock.NpxState, Executive, 0, 0, 0LL);
    MiBroadcastPeriodicEventToChildPartitions();
    MiPartitionPeriodicTick((__int64)&MiSystemPartition);
    MiSystemPeriodicTick();
    if ( VslpSecureKernelPeriodicTickWorkItem.WorkerRoutine
      && !_InterlockedCompareExchange(&VslpSecureKernelPeriodicTickWorkItemActive, 1, 0) )
    {
      ExQueueWorkItem(&VslpSecureKernelPeriodicTickWorkItem, CriticalWorkQueue);
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
    if ( (unsigned __int8)EtwpBootPhase > 1u && !--EtwpBufferAdjustmentCount )
    {
      EtwpBufferAdjustmentCount = 8;
      if ( !_InterlockedCompareExchange(&EtwpBufferAdjustmentActive, 1, 0) )
        ExQueueWorkItem(&EtwpAdjustBuffersWorkItem, DelayedWorkQueue);
    }
    if ( PsAltSystemCallRegistrationLock.CycleTime )
    {
      v13 = PspJobTimeLimitsCount;
      if ( PspJobTimeLimitsCount )
      {
        --PspJobTimeLimitsCount;
        if ( v13 == 1 )
        {
          _m_prefetchw(&PsAltSystemCallRegistrationLock.ExpectedRunTime);
          if ( (_InterlockedOr((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.ExpectedRunTime, 5u) & 4) == 0 )
            ExQueueWorkItem((PWORK_QUEUE_ITEM)&PsAltSystemCallRegistrationLock.SchedulingGroup, DelayedWorkQueue);
        }
      }
    }
    if ( !--v0 )
    {
      v0 = 8;
      if ( !_InterlockedCompareExchange(&KiStackOutSwapRequest, 1, 0) )
      {
        KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.StackLimit, 1, 0);
        KePulseEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.WpsFeedback, 1, 0);
      }
    }
    if ( stru_140F12D20.SchedulerApcFill3[40] )
    {
      if ( *(&KsepShimDbLock.ReservedPreviousReadyTimeValue + 1) != (unsigned int)((((MEMORY[0xFFFFF78000000004]
                                                                                    * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                                                                                  + ((MEMORY[0xFFFFF78000000004]
                                                                                    * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 12) )
        *(&KsepShimDbLock.ReservedPreviousReadyTimeValue + 1) = (((MEMORY[0xFFFFF78000000004]
                                                                 * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
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
    p_KernelShadowStack = &ExSaPageGroupDescriptorArrayLock.1008;
    p_Blink = (__int64 **)&ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  }
  else
  {
    p_KernelShadowStack = ($7593FFE5FD7F8AD12EB10858261A32F1 *)&ExSaPageGroupDescriptorArrayLock.KernelShadowStack;
    p_Blink = (__int64 **)&ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase;
  }
  ExpScanGeneralLookasideList(p_Blink, (KSPIN_LOCK *)p_KernelShadowStack, 3);
LABEL_23:
  if ( ++ExpScanCount == 3 )
    ExpScanCount = 0;
  goto LABEL_25;
}
