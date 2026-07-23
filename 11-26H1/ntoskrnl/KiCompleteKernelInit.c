/*
 * XREFs of KiCompleteKernelInit @ 0x140BF96A8
 * Callers:
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeAttachProcess @ 0x1403111B0 (KeAttachProcess.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiSetProcessorIdle @ 0x14041CED0 (KiSetProcessorIdle.c)
 *     KiBuildShareCountListForSubNodeByAffinity @ 0x14043F3F0 (KiBuildShareCountListForSubNodeByAffinity.c)
 *     KeInitializeTimer2 @ 0x14044E740 (KeInitializeTimer2.c)
 *     KeInitializeDpc @ 0x14047B3C0 (KeInitializeDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAcquirePrcbLocksForGroupAffinity @ 0x1405E7850 (KiAcquirePrcbLocksForGroupAffinity.c)
 *     KiReleasePrcbLocksForGroupAffinity @ 0x1405E7C38 (KiReleasePrcbLocksForGroupAffinity.c)
 *     KiInitializeProcessorXSaveStructures @ 0x1405EF7B4 (KiInitializeProcessorXSaveStructures.c)
 *     KiAbCompleteInitialization @ 0x1405F9E8C (KiAbCompleteInitialization.c)
 *     KiWriteRankListMembersUnderLock @ 0x1405FDD10 (KiWriteRankListMembersUnderLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KiAddCpuToSystemCpuPartition @ 0x140BFB4BC (KiAddCpuToSystemCpuPartition.c)
 *     KiCreateCpuSetForProcessor @ 0x140BFB578 (KiCreateCpuSetForProcessor.c)
 */

__int64 __fastcall KiCompleteKernelInit(__int64 a1, __int64 a2, int a3)
{
  char v3; // di
  __int64 v5; // r12
  unsigned __int8 CurrentIrql; // cl
  __int64 v8; // rsi
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  unsigned __int16 *v11; // r14
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rdx
  LARGE_INTEGER PerformanceFrequency[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v19[64]; // [rsp+50h] [rbp-29h] BYREF

  v3 = 0;
  PerformanceFrequency[0].QuadPart = 0LL;
  v5 = a2;
  v18[0] = 0LL;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 14504) = KiMaximumDpcQueueDepth;
    *(_DWORD *)(a1 + 14512) = KiMinimumDpcRate;
    *(_DWORD *)(a1 + 34388) = KiAdjustDpcThreshold;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  _enable();
  KeAttachProcess(PsInitialSystemProcess);
  if ( !a3 )
  {
    KiAbCompleteInitialization();
    KiSupervisorXStateFeaturesLock.KernelShadowStackBase = 0LL;
    KiSupervisorXStateFeaturesLock.KernelShadowStackInitial = &KiSupervisorXStateFeaturesLock.KernelShadowStack;
    KiSupervisorXStateFeaturesLock.KernelShadowStack = &KiSupervisorXStateFeaturesLock.KernelShadowStack;
    KeInitializeTimer2(
      (__int64)&KiSupervisorXStateFeaturesLock.ThreadListEntry.Blink,
      (__int64)KiForegroundTimerCallback,
      0LL,
      8LL);
    KeInitializeDpc(
      (PRKDPC)&KiSupervisorXStateFeaturesLock.WriteOperationCount,
      (PKDEFERRED_ROUTINE)KiProcessPendingForegroundBoosts,
      0LL);
    KeInitializeDpc(
      (PRKDPC)&KiSupervisorXStateFeaturesLock.SchedulerAssist,
      (PKDEFERRED_ROUTINE)KiTriggerForegroundBoostDpc,
      0LL);
    KeInitializeDpc(
      (PRKDPC)&KiSupervisorXStateFeaturesLock.Spare35[1],
      (PKDEFERRED_ROUTINE)KiUpdateVpBackingThreadPriorityDpcRoutine,
      0LL);
    BYTE1(KiSupervisorXStateFeaturesLock.Spare35[1]) = 2;
    KiSupervisorXStateFeaturesLock.ExtendedFeatureDisableMask = (unsigned __int64)&KiSupervisorXStateFeaturesLock.KernelShadowStackLimit;
    KiSupervisorXStateFeaturesLock.KernelShadowStackLimit.AllFields = (unsigned __int64)&KiSupervisorXStateFeaturesLock.KernelShadowStackLimit;
    KiSupervisorXStateFeaturesLock.WpsFeedback = 0LL;
    KeQueryPerformanceCounter(PerformanceFrequency);
    KiSchedulerAssistYieldCounterThreshold = 100;
    byte_140F26C0C = 0;
    stru_140FC11F0.SavedApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)(50
                                                                             * PerformanceFrequency[0].QuadPart
                                                                             / 1000);
    KeRegisterBugCheckReasonCallback(
      &unk_140F26BE0,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)KiSchedulerAssistBugCheckAddPagesCallback,
      KbCallbackAddPages,
      (PUCHAR)"KeSchedulerAssist");
    KiIntSteerTriageCallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(
      &KiIntSteerTriageCallbackRecord,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)KiIntSteerCallbackRecordTriageCallback,
      KbCallbackTriageDumpData,
      (PUCHAR)"KeIntSteer");
  }
  KiInitializeProcessorXSaveStructures(a1);
  v8 = *(_QWORD *)(a1 + 192);
  _interlockedbittestandset64((volatile signed __int32 *)(v8 + 80), *(unsigned __int8 *)(a1 + 209));
  _interlockedbittestandset64((volatile signed __int32 *)(v8 + 112), *(unsigned __int8 *)(a1 + 209));
  memset_0(v19, 0, sizeof(v19));
  v9 = *(unsigned __int8 *)(a1 + 208);
  *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
  LOWORD(PerformanceFrequency[1].LowPart) = v9;
  PerformanceFrequency[0] = *(LARGE_INTEGER *)(a1 + 36536);
  KiAcquirePrcbLocksForGroupAffinity((__int128 *)PerformanceFrequency);
  v10 = ~*(_QWORD *)(a1 + 36512);
  *(_BYTE *)(a1 + 35) = 1;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), v10);
  v11 = (unsigned __int16 *)(v8 + 136);
  v12 = *(_QWORD *)(v8 + 128);
  v13 = *(_QWORD *)(a1 + 200);
  v14 = v13 | v12 & ~*(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v8 + 184) & 2) != 0 )
  {
    KiBuildShareCountListForSubNodeByAffinity(v19, *v11, v13 | v12, v14, 1);
    KiWriteRankListMembersUnderLock((unsigned __int8 *)(v8 + 512), (__int64)v19, *(_QWORD *)(a1 + 36512));
  }
  if ( (*(_BYTE *)(v8 + 184) & 4) != 0 )
  {
    KiBuildShareCountListForSubNodeByAffinity(v19, *v11, *(_QWORD *)(v8 + 128) | *(_QWORD *)(a1 + 200), v14, 2);
    KiWriteRankListMembersUnderLock((unsigned __int8 *)(v8 + 576), (__int64)v19, *(_QWORD *)(a1 + 36536));
  }
  KiReleasePrcbLocksForGroupAffinity((__int64)PerformanceFrequency);
  KiAcquirePrcbLocksForIsolationUnit(a1, 0, (unsigned __int64 *)v18);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v3 = 1;
    KiSetProcessorIdle(a1, 1, 1);
    KiUpdateThreadQosGroupingSummaries(a1);
  }
  KiUpdateThreadPriority(a1, v15, v5, 0, v3);
  KiReleasePrcbLocksForIsolationUnit(v18);
  KiAddCpuToSystemCpuPartition(a1);
  return KiCreateCpuSetForProcessor(a1);
}
