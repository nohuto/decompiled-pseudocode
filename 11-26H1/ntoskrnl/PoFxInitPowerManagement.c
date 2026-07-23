/*
 * XREFs of PoFxInitPowerManagement @ 0x140CD6FEC
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage @ 0x140603D34 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopFxInitializeWorkPool @ 0x1407D0630 (PopFxInitializeWorkPool.c)
 */

__int64 PoFxInitPowerManagement()
{
  __int64 result; // rax

  Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage();
  PopFxBlockingDeviceListLock.FreezeFlags = 6;
  PopFxBlockingDeviceListLock.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)9;
  PopFxBlockingDeviceListLock.GlobalForegroundListEntry.Flink = (struct _LIST_ENTRY *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
  *(_QWORD *)&PopFxBlockingDeviceListLock.ForegroundLossTime = &PopFxBlockingDeviceListLock.ForegroundLossTime;
  *(_QWORD *)&PopFxBlockingDeviceListLock.AbCompletedIoQoSBoostCount = &PopFxBlockingDeviceListLock.PriorityFloorSummary;
  *(_QWORD *)&PopFxBlockingDeviceListLock.PriorityFloorSummary = &PopFxBlockingDeviceListLock.PriorityFloorSummary;
  *(_QWORD *)&PopFxBlockingDeviceListLock.SuspendEvent.Header.Lock = &PopFxBlockingDeviceListLock.SchedulerApcFill5[80];
  *(_QWORD *)&PopFxBlockingDeviceListLock.SchedulerApcFill5[80] = &PopFxBlockingDeviceListLock.SchedulerApcFill5[80];
  PopFxBlockingDeviceListLock.InitialStack = PopFxResidentTimeoutRoutine;
  PopFxBlockingDeviceListLock.MutantListHead.Flink = (struct _LIST_ENTRY *)&PopFxBlockingDeviceListLock.ThreadListEntry.Blink;
  PopFxBlockingDeviceListLock.ThreadListEntry.Blink = (struct _LIST_ENTRY *)&PopFxBlockingDeviceListLock.ThreadListEntry.Blink;
  PopFxBlockingDeviceListLock.PropagateBoostsEntry.Next = (struct _SINGLE_LIST_ENTRY *)&PopFxBlockingDeviceListLock.SchedulerSharedSystemSlot;
  PopFxBlockingDeviceListLock.SchedulerSharedSystemSlot = &PopFxBlockingDeviceListLock.SchedulerSharedSystemSlot;
  *(_QWORD *)&PopFxBlockingDeviceListLock.WaitRegister.Flags = PopFxResidentTimeoutDpcRoutine;
  PopFxBlockingDeviceListLock.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)&PopFxBlockingDeviceListLock.ApcState.ApcListHead[0].Blink;
  PopFxBlockingDeviceListLock.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)&PopFxBlockingDeviceListLock.ApcState.ApcListHead[0].Blink;
  *(_QWORD *)&PopFxBlockingDeviceListLock.Timer.Header.Lock = &PopFxBlockingDeviceListLock.RelativeTimerBias;
  PopFxBlockingDeviceListLock.RelativeTimerBias = (unsigned __int64)&PopFxBlockingDeviceListLock.RelativeTimerBias;
  PopFxBlockingDeviceListLock.Queue = (_DISPATCHER_HEADER *volatile)&PopFxBlockingDeviceListLock.RelativeTimerBias;
  PopFxActiveIdleThreshold *= 10000;
  PopFxBlockingDeviceListLock.Teb = 0LL;
  PopFxBlockingDeviceListLock.WaitListEntry.Blink = 0LL;
  PopFxBlockingDeviceListLock.SchedulerApc.SystemArgument1 = 0LL;
  PopFxBlockingDeviceListLock.StackLimit = 0LL;
  PopFxBlockingDeviceListLock.SListFaultAddress = 0LL;
  *(_QWORD *)&PopFxBlockingDeviceListLock.Header.Lock = 0LL;
  PopFxBlockingDeviceListLock.ThreadListEntry.Flink = 0LL;
  PopFxBlockingDeviceListLock.AbEntryCountValue = 0;
  PopFxBlockingDeviceListLock.SecureThreadCookie = 1;
  LODWORD(PopFxBlockingDeviceListLock.KernelStack) = 275;
  *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&PopFxBlockingDeviceListLock.116 + 4) = 0LL;
  PopFxBlockingDeviceListLock.TrapFrame = 0LL;
  PopFxBlockingDeviceListLock.SchedulingGroup = 0LL;
  PopFxBlockingDeviceListLock.ApcState.ApcListHead[1].Blink = 0LL;
  HIDWORD(PopFxBlockingDeviceListLock.WaitBlockList) = 0;
  LOWORD(PopFxBlockingDeviceListLock.WaitBlockList) = 0;
  BYTE3(PopFxBlockingDeviceListLock.WaitBlockList) = 0;
  if ( (unsigned int)PopFxActiveIdleLevel >= 3 )
    PopFxActiveIdleLevel = 1;
  PopFxBlockingDeviceListLock.Timer.Header.WaitListHead.Flink = 0LL;
  memset_0((char *)&PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[0].Flink + 1, 0, 0x6FuLL);
  PopFxBlockingDeviceListLock.SavedApcStateFill[0] = 1;
  if ( !PopSleepStudyDisabled )
  {
    if ( (PopSleepStudyDeviceAccountingLevel & 1) != 0 )
    {
      dword_140E676E0 = 1;
    }
    else if ( (PopSleepStudyDeviceAccountingLevel & 2) != 0 )
    {
      dword_140E676E0 = 2;
    }
    else if ( (PopSleepStudyDeviceAccountingLevel & 4) != 0 )
    {
      dword_140E676E0 = 3;
    }
  }
  *(_QWORD *)&PopFxBlockingDeviceListLock.PriorityFloorCounts[8] = PopFxBlockingDeviceListLock.PriorityFloorCounts;
  *(_QWORD *)PopFxBlockingDeviceListLock.PriorityFloorCounts = PopFxBlockingDeviceListLock.PriorityFloorCounts;
  PopFxInitializeWorkPool((struct _KSEMAPHORE *)&PopFxBlockingDeviceListLock.ReadTransferCount, 0LL);
  PopFxInitializeWorkPool((struct _KSEMAPHORE *)&PopFxBlockingDeviceListLock.Timer.DueTime, 0LL);
  *(_QWORD *)&PopDirectedDripsDiagLock.SchedulerApcFill5[80] = 9LL;
  PopDirectedDripsDiagLock.GlobalForegroundListEntry.Flink = (struct _LIST_ENTRY *)&PopDirectedDripsDiagLock.ForegroundLossTime;
  *(_QWORD *)&PopDirectedDripsDiagLock.ForegroundLossTime = &PopDirectedDripsDiagLock.ForegroundLossTime;
  PopDirectedDripsDiagLock.SchedulerApc.Reserved[0] = PopPepIdleTimeoutRoutine;
  PopDirectedDripsDiagLock.IoSelfBoostsEntry.Next = (struct _SINGLE_LIST_ENTRY *)PopPepIdleTimeoutDpcRoutine;
  PopDirectedDripsDiagLock.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&PopDirectedDripsDiagLock.SuspendEvent;
  *(_QWORD *)&PopDirectedDripsDiagLock.SuspendEvent.Header.Lock = &PopDirectedDripsDiagLock.SuspendEvent;
  qword_140F0AD70 = 0LL;
  *(_QWORD *)&PopDirectedDripsDiagLock.PriorityFloorSummary = 0LL;
  PopDirectedDripsDiagLock.SchedulerApc.Reserved[1] = 0LL;
  PopDirectedDripsDiagLock.SchedulerApc.ApcListEntry.Flink = 0LL;
  *(_DWORD *)&PopDirectedDripsDiagLock.AbWaitEntryCount = 275;
  *(_QWORD *)PopDirectedDripsDiagLock.PriorityFloorCounts = 0LL;
  *(_QWORD *)&PopDirectedDripsDiagLock.PriorityFloorCounts[24] = 0LL;
  PopDirectedDripsDiagLock.PropagateBoostsEntry.Next = 0LL;
  PopDirectedDripsDiagLock.SuspendEvent.Header.WaitListHead.Blink = 0LL;
  HIDWORD(PopDirectedDripsDiagLock.MutantListHead.Blink) = 0;
  LOWORD(PopDirectedDripsDiagLock.MutantListHead.Blink) = 0;
  BYTE3(PopDirectedDripsDiagLock.MutantListHead.Blink) = 0;
  *(_DWORD *)&PopFxBlockingDeviceListLock.PriorityFloorCounts[20] = 0;
  PopFxPlatformInterface = 0LL;
  if ( PopWatchdogResumeTimeout )
    *(_DWORD *)&PopFxBlockingDeviceListLock.PriorityFloorCounts[20] = 1000 * (PopWatchdogResumeTimeout + 120);
  result = (unsigned int)PopWatchdogSleepTimeout;
  *(_DWORD *)&PopFxBlockingDeviceListLock.PriorityFloorCounts[16] = 0;
  if ( (_DWORD)PopWatchdogSleepTimeout )
  {
    result = (unsigned int)(PopWatchdogSleepTimeout + 120);
    *(_DWORD *)&PopFxBlockingDeviceListLock.PriorityFloorCounts[16] = 1000 * result;
  }
  return result;
}
