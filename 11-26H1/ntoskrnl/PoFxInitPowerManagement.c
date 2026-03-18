/*
 * XREFs of PoFxInitPowerManagement @ 0x140CD0E44
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage @ 0x140601284 (Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopFxInitializeWorkPool @ 0x1407CD590 (PopFxInitializeWorkPool.c)
 */

__int64 PoFxInitPowerManagement()
{
  __int64 result; // rax

  Feature_Sx_PEP_Notification_Synchronization__private_ReportUsage();
  BYTE2(stru_140F12420.ThreadLock) = 6;
  *(_QWORD *)&stru_140F12420.Timer.Header.Lock = 9LL;
  qword_140F123E8 = (__int64)&qword_140F123E0;
  qword_140F123E0 = (ULONG_PTR)&qword_140F123E0;
  qword_140F123C8 = (__int64)&qword_140F123C0;
  qword_140F123C0 = (__int64)&qword_140F123C0;
  stru_140F12420.QueueListEntry.Flink = (struct _LIST_ENTRY *)&stru_140F12420.512;
  *(_QWORD *)&stru_140F12420.ThreadFlags2 = &stru_140F12420.512;
  stru_140F12420.WaitBlockList = (_KWAIT_BLOCK *)PopFxResidentTimeoutRoutine;
  stru_140F12420.StackLimit = &stru_140F12420.InitialStack;
  stru_140F12420.InitialStack = &stru_140F12420.InitialStack;
  *(_QWORD *)&stru_140F12420.CurrentRunTime = &stru_140F12420.CycleTime;
  stru_140F12420.CycleTime = (volatile unsigned __int64)&stru_140F12420.CycleTime;
  stru_140F12420.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)PopFxResidentTimeoutDpcRoutine;
  stru_140F12420.Timer.Header.WaitListHead.Blink = &stru_140F12420.Timer.Header.WaitListHead;
  stru_140F12420.Timer.Header.WaitListHead.Flink = &stru_140F12420.Timer.Header.WaitListHead;
  qword_140F123F8 = (__int64)&qword_140F123F0;
  qword_140F123F0 = (ULONG_PTR)&qword_140F123F0;
  qword_140F12400 = (__int64)&qword_140F123F0;
  PopFxActiveIdleThreshold *= 10000;
  *(_QWORD *)&qword_140F123D0.Header.Lock = 0LL;
  stru_140F12420.StateSaveArea = 0LL;
  *(_QWORD *)&stru_140F12420.PriorityFloorCounts[24] = 0LL;
  stru_140F12420.WaitListEntry.Flink = 0LL;
  *(_QWORD *)&stru_140F12420.Header.Lock = 0LL;
  stru_140F12420.QuantumTarget = 0LL;
  LOWORD(stru_140F12420.ThreadLock) = 0;
  HIDWORD(stru_140F12420.ThreadLock) = 1;
  stru_140F12420.SystemCallNumber = 275;
  stru_140F12420.ApcState.ApcListHead[0].Blink = 0LL;
  *(_OWORD *)&stru_140F12420.ApcStateFill[32] = 0uLL;
  stru_140F12420.TrapFrame = 0LL;
  stru_140F12420.Timer.DueTime.QuadPart = 0LL;
  stru_140F12420.Timer.Period = 0;
  stru_140F12420.Timer.Processor = 0;
  stru_140F12420.Timer.TimerDifObjTracking = 0;
  if ( (unsigned int)PopFxActiveIdleLevel >= 3 )
    PopFxActiveIdleLevel = 1;
  stru_140F12420.WaitBlock[0].WaitListEntry.Flink = 0LL;
  memset_0(&stru_140F12420.WaitBlockFill11[33], 0, 0x6FuLL);
  stru_140F12420.WaitBlockFill5[32] = 1;
  if ( !HIDWORD(stru_140F10828.KernelShadowStack) )
  {
    if ( (PopSleepStudyDeviceAccountingLevel & 1) != 0 )
    {
      LODWORD(stru_140E66FF0.SchedulerAssistLastYieldBoostTime) = 1;
    }
    else if ( (PopSleepStudyDeviceAccountingLevel & 2) != 0 )
    {
      LODWORD(stru_140E66FF0.SchedulerAssistLastYieldBoostTime) = 2;
    }
    else if ( (PopSleepStudyDeviceAccountingLevel & 4) != 0 )
    {
      LODWORD(stru_140E66FF0.SchedulerAssistLastYieldBoostTime) = 3;
    }
  }
  qword_140F12418 = (__int64)&qword_140F12410;
  qword_140F12410 = (__int64)&qword_140F12410;
  PopFxInitializeWorkPool((struct _KSEMAPHORE *)&unk_140F12260, 0LL);
  PopFxInitializeWorkPool((struct _KSEMAPHORE *)&stru_140F12420.Process, 0LL);
  *(_QWORD *)&qword_140F0B000.Header.Lock = 9LL;
  PopDirectedDripsUmLock.Padding[4] = (unsigned __int64)&PopDirectedDripsUmLock.Padding[3];
  PopDirectedDripsUmLock.Padding[3] = (unsigned __int64)&PopDirectedDripsUmLock.Padding[3];
  qword_140F0B090 = (__int64)PopPepIdleTimeoutRoutine;
  qword_140F0B058 = (__int64)PopPepIdleTimeoutDpcRoutine;
  qword_140F0B010 = (__int64)&qword_140F0B008;
  qword_140F0B008 = (__int64)&qword_140F0B008;
  qword_140F0A9D0 = 0LL;
  *(_QWORD *)&qword_140F0AFD0.Header.Lock = 0LL;
  qword_140F0B098 = 0LL;
  qword_140F0B080 = 0LL;
  dword_140F0B040.TargetInfoAsUlong = 275;
  qword_140F0B060 = 0LL;
  qword_140F0B078 = 0LL;
  qword_140F0B050 = 0LL;
  qword_140F0B018 = 0LL;
  dword_140F0B03C = 0;
  word_140F0B038 = 0;
  byte_140F0B03B = 0;
  dword_140F12408 = 0;
  PopFxPlatformInterface = 0LL;
  if ( PopWatchdogResumeTimeout )
    dword_140F12408 = 1000 * (PopWatchdogResumeTimeout + 120);
  result = (unsigned int)PopWatchdogSleepTimeout;
  dword_140F123D8 = 0;
  if ( (_DWORD)PopWatchdogSleepTimeout )
  {
    result = (unsigned int)(PopWatchdogSleepTimeout + 120);
    dword_140F123D8 = 1000 * result;
  }
  return result;
}
