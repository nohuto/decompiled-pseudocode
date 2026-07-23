/*
 * XREFs of ExpInitSystemPhase0 @ 0x140CEA460
 * Callers:
 *     ExInitSystem @ 0x140CEA21C (ExInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline @ 0x140578920 (Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlHpGlobalsInitialize @ 0x140628520 (RtlHpGlobalsInitialize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExGetSuiteMask @ 0x14083CBEC (ExGetSuiteMask.c)
 */

char ExpInitSystemPhase0()
{
  __int64 v0; // rax
  KSPIN_LOCK *v1; // rdi
  unsigned __int16 *v2; // rax
  __int64 *v3; // rsi
  int RecordedStackTraceIndex; // eax
  unsigned __int16 v5; // bx
  __int64 v6; // rdx
  bool v7; // cl
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  bool v12; // zf
  char result; // al
  __int128 v14; // [rsp+20h] [rbp-18h]
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  *(_WORD *)(MmWriteableSharedUserData + 726) = 10;
  ExSaPageGroupDescriptorArrayLock.SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)&ExSaPageGroupDescriptorArrayLock.ResourceIndex;
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.ResourceIndex = &ExSaPageGroupDescriptorArrayLock.ResourceIndex;
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.ReservedPreviousReadyTimeValue = &ExSaPageGroupDescriptorArrayLock.AbWaitObject;
  ExSaPageGroupDescriptorArrayLock.AbWaitObject = (void *volatile)&ExSaPageGroupDescriptorArrayLock.AbWaitObject;
  ExSaPageGroupDescriptorArrayLock.Spare35[0] = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock.WpsFeedback;
  ExSaPageGroupDescriptorArrayLock.WpsFeedback = (_KTHREAD_WPS_FEEDBACK *)&ExSaPageGroupDescriptorArrayLock.WpsFeedback;
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.Spare36 = &ExSaPageGroupDescriptorArrayLock.Spare35[1];
  ExSaPageGroupDescriptorArrayLock.Spare35[1] = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock.Spare35[1];
  *(_QWORD *)ExpSysDbgLock.PriorityFloorCounts = &ExpSysDbgLock.IoSelfBoostsEntry;
  ExpSysDbgLock.IoSelfBoostsEntry.Next = &ExpSysDbgLock.IoSelfBoostsEntry;
  WheapConfigTableLock.WaitBlock[0].Thread = (struct _KTHREAD *)-40000000LL;
  LODWORD(ExSaPageGroupDescriptorArrayLock.QueuedScb) = 1;
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.ThreadTimerDelay = 0LL;
  LODWORD(ExSaPageGroupDescriptorArrayLock.TracingPrivate[0]) = 0;
  LOWORD(ExSaPageGroupDescriptorArrayLock.SchedulerAssist) = 1;
  BYTE2(ExSaPageGroupDescriptorArrayLock.SchedulerAssist) = 6;
  HIDWORD(ExSaPageGroupDescriptorArrayLock.SchedulerAssist) = 0;
  ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields = 0LL;
  ExSaPageGroupDescriptorArrayLock.ExtendedFeatureDisableMask = 0LL;
  if ( (unsigned __int64)&ExpSysDbgLock.PriorityFloorCounts[24] < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&ExpSysDbgLock.PriorityFloorCounts[24]) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&ExpSysDbgLock.PriorityFloorCounts[24], retaddr);
  }
  memset_0((void *)&ExpSysDbgLock.AbCompletedIoQoSBoostCount, 0, 0x50uLL);
  v0 = 0LL;
  *(_QWORD *)&ExpSysDbgLock.PriorityFloorSummary = &ExpSysDbgLock.PriorityFloorCounts[24];
  *(_QWORD *)&ExpSysDbgLock.PriorityFloorCounts[24] = &ExpSysDbgLock.PriorityFloorCounts[24];
  ExpSysDbgLock.880 = 0uLL;
  ExpSysDbgLock.QueuedScb = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v1 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
    if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags
      && (v2 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1),
          (v3 = (__int64 *)v2) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v1, v2);
      v5 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)v1, v3);
    }
    else
    {
      v5 = 0;
    }
    v0 = v5;
  }
  ExpSysDbgLock.OtherTransferCount = v0;
  HIDWORD(ExpSysDbgLock.WriteTransferCount) = -1;
  ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&ExpSysDbgLock.PriorityFloorCounts[24]);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&ExpSysDbgLock.PriorityFloorCounts[24], 0, 0);
  v7 = (*(_DWORD *)(KeLoaderBlock_0 + 264) & 4) != 0;
  ExpPlatformBinaryLock.WaitBlock[0].SparePtr = 0LL;
  LOBYTE(ExpSysDbgLock.ThreadTimerDelay) = v7;
  if ( CmSuiteBufferType == 7 )
  {
    v8 = MmWriteableSharedUserData;
    *(_DWORD *)(v8 + 720) = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  }
  v9 = (unsigned __int64)(unsigned int)ExGenRandom(1, v6) << 32;
  RtlpBootStatHandleLock.QuantumTarget = v9 | (unsigned int)ExGenRandom(1, v10);
  RtlHpGlobalsInitialize();
  v14 = 0LL;
  LOBYTE(v14) = 2;
  *(_OWORD *)&NormalizationListLock.InitialStack = v14;
  v11 = *(_QWORD *)(KeLoaderBlock_0 + 240);
  if ( *(_QWORD *)(v11 + 3760) )
    ExpLuid = *(_QWORD *)(v11 + 3760);
  v12 = (unsigned int)Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline() == 0;
  result = 1;
  ExpLookasideMgrEnabled = !v12;
  return result;
}
