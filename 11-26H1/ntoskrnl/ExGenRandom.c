/*
 * XREFs of ExGenRandom @ 0x140200C10
 * Callers:
 *     RtlRandomEx @ 0x140200BE0 (RtlRandomEx.c)
 *     ?KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z @ 0x140200DD0 (-KiSetProcessConcurrencyCount@@YAXPEAU_KPROCESS@@T_KI_PROCESS_CONCURRENCY_COUNT@@PEAE@Z.c)
 *     ?KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFINITY_EX@@2PEAE3PEAK@Z @ 0x140200F50 (-KiAdaptThreadIdealProcessorForProcessIdealSetChange@@YAXPEAU_KPROCESS@@PEAU_KTHREAD@@PEAU_KAFFI.c)
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021BA80 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     CcBcbProfiler @ 0x140540030 (CcBcbProfiler.c)
 *     KeSelectNodeForAffinityAndPartition @ 0x1405EEAC4 (KeSelectNodeForAffinityAndPartition.c)
 *     RtlpCreateHeapEncoding @ 0x14061B39C (RtlpCreateHeapEncoding.c)
 *     RtlHpGlobalsInitialize @ 0x1406254D0 (RtlHpGlobalsInitialize.c)
 *     MiBuildDynamicRegion @ 0x1406F4FA0 (MiBuildDynamicRegion.c)
 *     sub_140713090 @ 0x140713090 (sub_140713090.c)
 *     sub_14077F830 @ 0x14077F830 (sub_14077F830.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083075C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x14083103C (EtwpCovSampStrideSamplerInitialize.c)
 *     CmpCmdInit @ 0x140854874 (CmpCmdInit.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140963650 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x140963714 (MiInitializeProcessBottomUpEntropy.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 *     MiSelectImageBase @ 0x1409CACA8 (MiSelectImageBase.c)
 *     MiSelectImageMapAddress @ 0x1409CDB18 (MiSelectImageMapAddress.c)
 *     PspSetupUserStack @ 0x1409EA234 (PspSetupUserStack.c)
 *     PspWow64InitThreadGuestx86 @ 0x1409EA798 (PspWow64InitThreadGuestx86.c)
 *     PspNotifyThreadCreation @ 0x1409EAC38 (PspNotifyThreadCreation.c)
 *     sub_1409F0248 @ 0x1409F0248 (sub_1409F0248.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     PspPrepareSystemDllInitBlock @ 0x140A9A628 (PspPrepareSystemDllInitBlock.c)
 *     RtlRandom @ 0x140AEAE20 (RtlRandom.c)
 *     MiProcessLoadConfigForDriver @ 0x140B0594C (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x140B0A2B4 (MiReserveDriverPtes.c)
 *     MiSelectOverflowDllBase @ 0x140B49A0C (MiSelectOverflowDllBase.c)
 *     CcInitializeCacheManager @ 0x140C7F4E8 (CcInitializeCacheManager.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     IopInitializeInMemoryDumpData @ 0x140CBA480 (IopInitializeInMemoryDumpData.c)
 *     PspTlsInitialize @ 0x140CD90E8 (PspTlsInitialize.c)
 *     ExpInitSystemPhase0 @ 0x140CE40C0 (ExpInitSystemPhase0.c)
 *     ExInitializePoolTracker @ 0x140CE5CA8 (ExInitializePoolTracker.c)
 *     ExpTimerInitialization @ 0x140CE6524 (ExpTimerInitialization.c)
 *     ExpPoolMgrInitialize @ 0x140CE7914 (ExpPoolMgrInitialize.c)
 *     MiInitializeBootDefaults @ 0x140CF1C18 (MiInitializeBootDefaults.c)
 *     MiAddSubRegionEntropy @ 0x140CF8E40 (MiAddSubRegionEntropy.c)
 *     MiAssignHalEntropy @ 0x140CF8ED8 (MiAssignHalEntropy.c)
 *     MiAssignSystemVa @ 0x140CF9008 (MiAssignSystemVa.c)
 *     MiAssignTopLevelRanges @ 0x140CF9118 (MiAssignTopLevelRanges.c)
 *     MiInitializeKernelStacks @ 0x140CFC600 (MiInitializeKernelStacks.c)
 *     MiInitializeRelocations @ 0x140CFDCDC (MiInitializeRelocations.c)
 *     MiInitializeSystemPtes @ 0x140CFF020 (MiInitializeSystemPtes.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  int Flink; // eax
  char *v17; // rcx
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64(
           (volatile signed __int32 *)&WheapConfigTableLock.SuspendEvent.Header.WaitListHead.Blink,
           0LL) )
    {
      KxWaitForSpinLockAndAcquire(&WheapConfigTableLock.SuspendEvent.Header.WaitListHead.Blink);
    }
  }
  else
  {
    KiAcquireSpinLockInstrumented(&WheapConfigTableLock.SuspendEvent.Header.WaitListHead.Blink);
  }
  if ( (_DWORD)v2 == 1 && (Flink = (int)WheapConfigTableLock.ThreadListEntry.Flink) != 0 )
  {
    --LODWORD(WheapConfigTableLock.ThreadListEntry.Flink);
    v10 = *((_DWORD *)&WheapConfigTableLock.ThreadListEntry.Blink + (unsigned int)(Flink - 1));
    v17 = (char *)&WheapConfigTableLock.ThreadListEntry.Blink + 4 * (unsigned int)(Flink - 1);
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
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64((volatile signed __int64 *)&WheapConfigTableLock.SuspendEvent.Header.WaitListHead.Blink, 0LL);
  else
    KiReleaseSpinLockInstrumented(&WheapConfigTableLock.SuspendEvent.Header.WaitListHead.Blink, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v11 = LODWORD(WheapConfigTableLock.SuspendEvent.Header.WaitListHead.Flink) ^ v10;
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
