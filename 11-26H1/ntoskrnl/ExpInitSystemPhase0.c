/*
 * XREFs of ExpInitSystemPhase0 @ 0x140CE40C0
 * Callers:
 *     ExInitSystem @ 0x140CE3E7C (ExInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline @ 0x140576470 (Feature_LookasideDepthManager__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlHpGlobalsInitialize @ 0x1406254D0 (RtlHpGlobalsInitialize.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExGetSuiteMask @ 0x1408369AC (ExGetSuiteMask.c)
 */

char ExpInitSystemPhase0()
{
  struct _LIST_ENTRY *v0; // rax
  KSPIN_LOCK *p_Policy; // rdi
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
  ExSaPageGroupDescriptorArrayLock.SystemAffinityTokenListHead.Next = (struct _SINGLE_LIST_ENTRY *)&ExSaPageGroupDescriptorArrayLock.Spare36;
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.Spare36 = &ExSaPageGroupDescriptorArrayLock.Spare36;
  ExSaPageGroupDescriptorArrayLock.QueuedScb = (_KSCB *)&ExSaPageGroupDescriptorArrayLock.OtherTransferCount;
  ExSaPageGroupDescriptorArrayLock.OtherTransferCount = (__int64)&ExSaPageGroupDescriptorArrayLock.OtherTransferCount;
  ExSaPageGroupDescriptorArrayLock.KernelShadowStackLimit.AllFields = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase;
  ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase = &ExSaPageGroupDescriptorArrayLock.KernelShadowStackBase;
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.SchedulerAssistPriorityFloor = &ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  ExSaPageGroupDescriptorArrayLock.InGlobalUpdateVpThreadPriorityList = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock.InGlobalUpdateVpThreadPriorityList;
  ExpSysDbgLock.ThreadListEntry.Blink = &ExpSysDbgLock.ThreadListEntry;
  ExpSysDbgLock.ThreadListEntry.Flink = &ExpSysDbgLock.ThreadListEntry;
  WheapConfigTableLock.WaitBlock[0].Thread = (struct _KTHREAD *)-40000000LL;
  LODWORD(ExSaPageGroupDescriptorArrayLock.WriteOperationCount) = 1;
  ExSaPageGroupDescriptorArrayLock.OtherOperationCount = 0LL;
  LODWORD(ExSaPageGroupDescriptorArrayLock.ReadTransferCount) = 0;
  LOWORD(ExSaPageGroupDescriptorArrayLock.WriteTransferCount) = 1;
  BYTE2(ExSaPageGroupDescriptorArrayLock.WriteTransferCount) = 6;
  HIDWORD(ExSaPageGroupDescriptorArrayLock.WriteTransferCount) = 0;
  ExSaPageGroupDescriptorArrayLock.KernelShadowStack = 0LL;
  ExSaPageGroupDescriptorArrayLock.GlobalUpdateVpThreadPriorityListEntry.Flink = 0LL;
  if ( (unsigned __int64)&ExpSysDbgLock.792 < 0xFFFF800000000000uLL
    || MmDeterminePoolType((unsigned __int64)&ExpSysDbgLock.792) == 256 )
  {
    ExpTraceLogBadResourceAddress((unsigned __int64)&ExpSysDbgLock.792, retaddr);
  }
  memset_0(&ExpSysDbgLock.PropagateBoostsEntry, 0, 0x50uLL);
  v0 = 0LL;
  ExpSysDbgLock.SchedulerSharedSystemSlot = &ExpSysDbgLock.792;
  *(_QWORD *)&ExpSysDbgLock.AbWaitEntryCount = &ExpSysDbgLock.792;
  *(_QWORD *)ExpSysDbgLock.PriorityFloorCounts = 0LL;
  *(_QWORD *)&ExpSysDbgLock.PriorityFloorCounts[8] = 0LL;
  ExpSysDbgLock.InGlobalForegroundList = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
    if ( NormalizationListLock.SchedulingGroup
      && (v2 = (unsigned __int16 *)RtlStdLogStackTrace((PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy, 1),
          (v3 = (__int64 *)v2) != 0LL) )
    {
      RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v2);
      v5 = RecordedStackTraceIndex;
      if ( !RecordedStackTraceIndex )
        RtlStdReleaseStackTrace((__int64)p_Policy, v3);
    }
    else
    {
      v5 = 0;
    }
    v0 = (struct _LIST_ENTRY *)v5;
  }
  ExpSysDbgLock.GlobalForegroundListEntry.Flink = v0;
  *(&ExpSysDbgLock.ForegroundLossTime + 1) = -1;
  ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&ExpSysDbgLock.792);
  __incgsdword(0x9098u);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
    PerfLogExecutiveResourceInitialize(65544, (__int64)&ExpSysDbgLock.792, 0, 0);
  v7 = (*(_DWORD *)(KeLoaderBlock_0 + 264) & 4) != 0;
  ExpPlatformBinaryLock.WaitBlock[0].SparePtr = 0LL;
  BYTE4(ExpSysDbgLock.SuspendEvent.Header.WaitListHead.Blink) = v7;
  if ( CmSuiteBufferType == 7 )
  {
    v8 = MmWriteableSharedUserData;
    *(_DWORD *)(v8 + 720) = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  }
  v9 = (unsigned __int64)(unsigned int)ExGenRandom(1, v6) << 32;
  RtlpBootStatHandleLock.SListFaultAddress = (void *)(v9 | (unsigned int)ExGenRandom(1, v10));
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
