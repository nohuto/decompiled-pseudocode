/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x14037AE50
 * Callers:
 *     ExpUpdateTimerConfiguration @ 0x14037BB10 (ExpUpdateTimerConfiguration.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     KeSetTimeAdjustment @ 0x14037B11C (KeSetTimeAdjustment.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x14037B19C (KiSendClockInterruptToTargetProcessor.c)
 *     KiSetNextClockTickDueTime @ 0x14037B480 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14037BA10 (KiSetClockTimerKTimerDeadlines.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14040D2D0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14040D968 (KiSetClockIntervalToMinimumRequested.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rcx
  LARGE_INTEGER InterruptTimePrecise; // rbp
  unsigned int v6; // edi
  unsigned __int64 Root; // rdx
  BOOLEAN v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  int v14; // ebp
  _QWORD *v15; // rcx
  char *v16; // rax
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
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
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.Timer.TimerListEntry.Blink, 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExpSysDbgLock.Timer.TimerListEntry.Blink);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExpSysDbgLock.Timer.TimerListEntry.Blink);
  }
  v4 = KeGetCurrentIrql();
  if ( (_BYTE)v4 != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v4, 15LL);
  InterruptTimePrecise.QuadPart = 0LL;
  *(_DWORD *)(v2 + 24) = 0;
  if ( *(_QWORD *)v2 )
  {
    v6 = ExpLastRequestedTime;
    if ( LOBYTE(ExpSysDbgLock.Timer.Header.WaitListHead.Flink) )
      RtlRbRemoveNode(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)&ExpSysDbgLock.Teb);
    HIDWORD(ExpSysDbgLock.Timer.Header.WaitListHead.Flink) = v6;
    if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
    {
      if ( KiClockIntervalRequests.Root )
        Root = (unsigned __int64)KiClockIntervalRequests.Root ^ (unsigned __int64)&KiClockIntervalRequests;
      else
        Root = 0LL;
    }
    else
    {
      Root = (unsigned __int64)KiClockIntervalRequests.Root;
    }
    v8 = 0;
    if ( Root )
    {
      while ( 1 )
      {
        while ( v6 < *(_DWORD *)(Root + 28) )
        {
          v9 = *(_QWORD *)Root;
          if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_27;
            v9 ^= Root;
          }
          if ( !v9 )
            goto LABEL_27;
          Root = v9;
        }
        v10 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= Root;
        }
        if ( !v10 )
          break;
        Root = v10;
      }
      v8 = 1;
    }
LABEL_27:
    RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v8, (PRTL_BALANCED_NODE)&ExpSysDbgLock.Teb);
    LOBYTE(ExpSysDbgLock.Timer.Header.WaitListHead.Flink) = 1;
    KePseudoHrTimeIncrement = v6;
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( KiClockTimerReducePreciseTimeQueries )
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))KiSetClockTimerKTimerDeadlines)(
        KeGetCurrentPrcb(),
        (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
        0LL);
      LOBYTE(v11) = 1;
      v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD))KiSetNextClockTickDueTime)(
              (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
              v11);
    }
    else
    {
      v12 = KiSetClockIntervalToMinimumRequested();
    }
    v14 = v12;
    if ( LODWORD(ExpSysDbgLock.Timer.Header.WaitListHead.Blink) )
    {
      LOBYTE(v13) = 1;
      PoTraceSystemTimerResolutionKernel(v6, LODWORD(ExpSysDbgLock.Timer.Header.WaitListHead.Blink), v13);
    }
    KiSendClockInterruptToTargetProcessor((unsigned int)KiClockTimerOwner);
    **(_DWORD **)v2 = v14;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)&ExpSysDbgLock.Timer.TimerListEntry.Blink, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&ExpSysDbgLock.Timer.TimerListEntry.Blink, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0xFu);
  __writecr8(0xFuLL);
  v15 = *(_QWORD **)(v2 + 8);
  if ( v15 )
    *(_DWORD *)(v2 + 24) = KeSetTimeAdjustment(*v15);
  v16 = *(char **)(v2 + 16);
  if ( v16 )
    KeTimeSynchronization = *v16;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
