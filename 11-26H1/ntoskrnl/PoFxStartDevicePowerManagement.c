/*
 * XREFs of PoFxStartDevicePowerManagement @ 0x1404EAC40
 * Callers:
 *     HalpTimerInitPowerManagement @ 0x14058219C (HalpTimerInitPowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x14058B824 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x1405900B4 (HalpInterruptInitPowerManagement.c)
 *     DifPoFxStartDevicePowerManagementWrapper @ 0x140694070 (DifPoFxStartDevicePowerManagementWrapper.c)
 *     PoFxEnableDStateReporting @ 0x1407CCE40 (PoFxEnableDStateReporting.c)
 *     PoFxRegisterDebugger @ 0x140CD6094 (PoFxRegisterDebugger.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoFxActivateComponent @ 0x14037AAB0 (PoFxActivateComponent.c)
 *     PoFxIdleComponent @ 0x140394FE0 (PoFxIdleComponent.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1404CEE90 (PopFxIncrementDeviceSleepCount.c)
 *     PopFxActivateDevice @ 0x1404D5290 (PopFxActivateDevice.c)
 *     PopFxReinitializeAccountingInstance @ 0x1404E23A0 (PopFxReinitializeAccountingInstance.c)
 *     PopPepDeviceStarted @ 0x1404EADE4 (PopPepDeviceStarted.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140B5EAB8 (PopDiagTraceFxDeviceStartPowerManagement.c)
 */

void __fastcall PoFxStartDevicePowerManagement(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  struct _KLOCK_ENTRIES *v4; // r9
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v6; // rbp
  char SchedulerAssistYieldCounter; // bp
  unsigned int i; // r14d
  KIRQL v9; // al
  int v10; // edx
  KIRQL v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rbp
  KIRQL v14; // r15
  unsigned int v15; // eax
  __int64 v16; // r14
  unsigned int j; // ebp
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  if ( !stru_140E66FF0.SchedulerAssistYieldBoostCount )
  {
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 868); ++i )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * i) + 200LL;
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13);
      if ( !stru_140E66FF0.SchedulerAssistYieldBoostCount )
      {
        PopFxReinitializeAccountingInstance(v13, 1);
        *(_QWORD *)(v13 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v13 + 8) = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v13, v14);
    }
  }
  PopPepDeviceStarted(*(_QWORD *)(BugCheckParameter2 + 56));
  if ( *(_QWORD *)(BugCheckParameter2 + 64) )
  {
    v18 = *(_QWORD *)(BugCheckParameter2 + 72);
    guard_dispatch_icall_no_overrides(18LL, &v18);
  }
  if ( v2 )
  {
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
    v10 = *(_DWORD *)(v2 + 120);
    v11 = v9;
    if ( (*(_DWORD *)(BugCheckParameter2 + 864) & 1) != 0 )
    {
      if ( v10 )
        *(_DWORD *)(v2 + 120) = 0;
    }
    else if ( v10 )
    {
      v15 = *(_DWORD *)(BugCheckParameter2 + 868);
      v16 = *(unsigned int *)(v2 + 120);
      do
      {
        for ( j = 0; j < v15; ++j )
        {
          PoFxActivateComponent(BugCheckParameter2, j, 2);
          v15 = *(_DWORD *)(BugCheckParameter2 + 868);
        }
        --v16;
      }
      while ( v16 );
    }
    _InterlockedOr((volatile signed __int32 *)(v2 + 296), 4u);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88), v11);
    PopDiagTraceFxDeviceStartPowerManagement(v2);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, v4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F123D0.Header.Lock, 0, v6, &qword_140F123D0);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v6 + 33) |= 2u;
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  SchedulerAssistYieldCounter = stru_140E66FF0.SchedulerAssistYieldCounter;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
  if ( SchedulerAssistYieldCounter )
  {
    v12 = *(_QWORD *)(v2 + 32);
    PopFxActivateDevice(v12, 0, 0);
    PopFxIncrementDeviceSleepCount(v12);
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 868) )
  {
    do
      PoFxIdleComponent(BugCheckParameter2, v1++);
    while ( v1 < *(_DWORD *)(BugCheckParameter2 + 868) );
  }
}
