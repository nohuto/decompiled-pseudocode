/*
 * XREFs of ExGenRandom @ 0x140200C10
 * Callers:
 *     RtlRandomEx @ 0x140200BE0 (RtlRandomEx.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x140200DD0 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x140200F50 (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     CcBcbProfiler @ 0x1405424B0 (CcBcbProfiler.c)
 *     KeSelectNodeForAffinityAndPartition @ 0x1405F1434 (KeSelectNodeForAffinityAndPartition.c)
 *     RtlpCreateHeapEncoding @ 0x14061E3EC (RtlpCreateHeapEncoding.c)
 *     RtlHpGlobalsInitialize @ 0x140628520 (RtlHpGlobalsInitialize.c)
 *     MiBuildDynamicRegion @ 0x1406F9C10 (MiBuildDynamicRegion.c)
 *     sub_140717D80 @ 0x140717D80 (sub_140717D80.c)
 *     sub_140782330 @ 0x140782330 (sub_140782330.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083699C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x14083727C (EtwpCovSampStrideSamplerInitialize.c)
 *     CmpCmdInit @ 0x14085AB84 (CmpCmdInit.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiSelectImageBase @ 0x14099BC88 (MiSelectImageBase.c)
 *     MiSelectImageMapAddress @ 0x14099EAF8 (MiSelectImageMapAddress.c)
 *     PspPrepareSystemDllInitBlock @ 0x1409E5658 (PspPrepareSystemDllInitBlock.c)
 *     PspSetupUserStack @ 0x1409E6A04 (PspSetupUserStack.c)
 *     PspWow64InitThreadGuestx86 @ 0x1409E6F68 (PspWow64InitThreadGuestx86.c)
 *     PspNotifyThreadCreation @ 0x1409E7408 (PspNotifyThreadCreation.c)
 *     sub_1409ECA18 @ 0x1409ECA18 (sub_1409ECA18.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140A094D8 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x140A0959C (MiInitializeProcessBottomUpEntropy.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     RtlRandom @ 0x140AEDBF0 (RtlRandom.c)
 *     MiProcessLoadConfigForDriver @ 0x140B079E0 (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x140B0C074 (MiReserveDriverPtes.c)
 *     MiSelectOverflowDllBase @ 0x140B4B79C (MiSelectOverflowDllBase.c)
 *     CcInitializeCacheManager @ 0x140C854E8 (CcInitializeCacheManager.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     IopInitializeInMemoryDumpData @ 0x140CC04C0 (IopInitializeInMemoryDumpData.c)
 *     PspTlsInitialize @ 0x140CDF468 (PspTlsInitialize.c)
 *     ExpInitSystemPhase0 @ 0x140CEA460 (ExpInitSystemPhase0.c)
 *     ExInitializePoolTracker @ 0x140CEC048 (ExInitializePoolTracker.c)
 *     ExpTimerInitialization @ 0x140CEC8C4 (ExpTimerInitialization.c)
 *     ExpPoolMgrInitialize @ 0x140CEDCB4 (ExpPoolMgrInitialize.c)
 *     MiInitializeBootDefaults @ 0x140CF7F98 (MiInitializeBootDefaults.c)
 *     MiAddSubRegionEntropy @ 0x140CFF1C0 (MiAddSubRegionEntropy.c)
 *     MiAssignHalEntropy @ 0x140CFF258 (MiAssignHalEntropy.c)
 *     MiAssignSystemVa @ 0x140CFF388 (MiAssignSystemVa.c)
 *     MiAssignTopLevelRanges @ 0x140CFF498 (MiAssignTopLevelRanges.c)
 *     MiInitializeKernelStacks @ 0x140D02980 (MiInitializeKernelStacks.c)
 *     MiInitializeRelocations @ 0x140D04084 (MiInitializeRelocations.c)
 *     MiInitializeSystemPtes @ 0x140D053C0 (MiInitializeSystemPtes.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExGenRandom(int a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  char *v4; // r10
  unsigned int v5; // ecx
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // edi
  unsigned int v11; // edi
  unsigned int i; // eax
  int v16; // eax
  UCHAR *v17; // rcx
  __int64 v18; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapConfigTableLock.SchedulerApcFill5[64], 0LL) )
      KxWaitForSpinLockAndAcquire(&WheapConfigTableLock.SchedulerApcFill5[64]);
  }
  else
  {
    KiAcquireSpinLockInstrumented(&WheapConfigTableLock.SchedulerApcFill5[64]);
  }
  if ( (_DWORD)v2 == 1 && (v16 = *(_DWORD *)&WheapConfigTableLock.SchedulerApcFill5[72]) != 0 )
  {
    --*(_DWORD *)&WheapConfigTableLock.SchedulerApcFill5[72];
    v10 = *((_DWORD *)&WheapConfigTableLock.SuspendEvent.Header.Lock + (unsigned int)(v16 - 1));
    v17 = &WheapConfigTableLock.SuspendEvent.Header.Type + 4 * (unsigned int)(v16 - 1);
    v18 = 4LL;
    do
    {
      *v17++ = 0;
      --v18;
    }
    while ( v18 );
  }
  else
  {
    v4 = (char *)&ExpLFGRngState + 228 * v2;
    v5 = 0;
    v6 = *((_DWORD *)v4 + 55);
    v7 = *((_DWORD *)v4 + 56);
    if ( v6 != 54 )
      v5 = v6 + 1;
    v8 = v5;
    v9 = 0LL;
    if ( v7 != 54 )
      v9 = (unsigned int)(v7 + 1);
    *(_DWORD *)&v4[4 * v8] -= *(_DWORD *)&v4[4 * v9];
    v10 = *(_DWORD *)&v4[4 * v8];
    *((_DWORD *)v4 + 55) = v8;
    *((_DWORD *)v4 + 56) = v9;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&WheapConfigTableLock.SchedulerApc.SystemArgument1, 0LL);
  else
    KiReleaseSpinLockInstrumented(&WheapConfigTableLock.SchedulerApcFill5[64], retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v11 = ExpRNGAuxiliarySeed ^ v10;
  if ( _bittest64(&KeFeatureBits, 0x20u) )
  {
    for ( i = 0; i < 0xA; ++i )
    {
      __asm { rdrand  edx }
      if ( _CF )
      {
        v11 ^= _EDX;
        return v11;
      }
    }
  }
  return v11;
}
