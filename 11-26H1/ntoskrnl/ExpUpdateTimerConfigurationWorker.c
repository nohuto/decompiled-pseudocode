/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x1403790A0
 * Callers:
 *     ExpUpdateTimerConfiguration @ 0x140379D60 (ExpUpdateTimerConfiguration.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     KeSetTimeAdjustment @ 0x14037936C (KeSetTimeAdjustment.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1403793EC (KiSendClockInterruptToTargetProcessor.c)
 *     KiSetNextClockTickDueTime @ 0x1403796D0 (KiSetNextClockTickDueTime.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x140379C60 (KiSetClockTimerKTimerDeadlines.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140418DA0 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140419438 (KiSetClockIntervalToMinimumRequested.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rcx
  __int64 InterruptTimePrecise; // rbp
  unsigned int v6; // edi
  __int64 v7; // rdx
  bool v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  int ClockTickDueTime; // eax
  __int64 v13; // r8
  int v14; // ebp
  _QWORD *v15; // rcx
  char *v16; // rax
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
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
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.WaitBlockFill11[168], 0LL) )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ExpSysDbgLock.WaitBlockFill11[168]);
  }
  else
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ExpSysDbgLock.WaitBlockFill11[168]);
  }
  v4 = KeGetCurrentIrql();
  if ( (_BYTE)v4 != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(v4, 15LL);
  InterruptTimePrecise = 0LL;
  *(_DWORD *)(v2 + 24) = 0;
  if ( *(_QWORD *)v2 )
  {
    v6 = ExpLastRequestedTime;
    if ( LOBYTE(ExpSysDbgLock.QueueListEntry.Blink) )
      RtlRbRemoveNode((__int64)&KiClockIntervalRequests, (__int64)&ExpSysDbgLock.WaitBlock[3].SparePtr);
    HIDWORD(ExpSysDbgLock.QueueListEntry.Blink) = v6;
    if ( (qword_140E66748 & 1) != 0 )
    {
      if ( KiClockIntervalRequests )
        v7 = KiClockIntervalRequests ^ (unsigned __int64)&KiClockIntervalRequests;
      else
        v7 = 0LL;
    }
    else
    {
      v7 = KiClockIntervalRequests;
    }
    v8 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        while ( v6 < *(_DWORD *)(v7 + 28) )
        {
          v9 = *(_QWORD *)v7;
          if ( (qword_140E66748 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_27;
            v9 ^= v7;
          }
          if ( !v9 )
            goto LABEL_27;
          v7 = v9;
        }
        v10 = *(_QWORD *)(v7 + 8);
        if ( (qword_140E66748 & 1) != 0 )
        {
          if ( !v10 )
            break;
          v10 ^= v7;
        }
        if ( !v10 )
          break;
        v7 = v10;
      }
      v8 = 1;
    }
LABEL_27:
    RtlRbInsertNodeEx(
      (unsigned __int64)&KiClockIntervalRequests,
      v7,
      v8,
      (unsigned __int64)&ExpSysDbgLock.LastXStateSaveDebugInfo);
    LOBYTE(ExpSysDbgLock.QueueListEntry.Blink) = 1;
    KePseudoHrTimeIncrement = v6;
    if ( KiClockTimerPerCpuTickScheduling )
    {
      if ( KiClockTimerReducePreciseTimeQueries )
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v19);
      KiSetClockTimerKTimerDeadlines(KeGetCurrentPrcb(), InterruptTimePrecise, 0LL);
      LOBYTE(v11) = 1;
      ClockTickDueTime = KiSetNextClockTickDueTime(InterruptTimePrecise, v11);
    }
    else
    {
      ClockTickDueTime = KiSetClockIntervalToMinimumRequested();
    }
    v14 = ClockTickDueTime;
    if ( ExpSysDbgLock.NextProcessor )
    {
      LOBYTE(v13) = 1;
      PoTraceSystemTimerResolutionKernel(v6, ExpSysDbgLock.NextProcessor, v13);
    }
    KiSendClockInterruptToTargetProcessor((unsigned int)KiClockTimerOwner);
    **(_DWORD **)v2 = v14;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64((volatile signed __int64 *)&ExpSysDbgLock.WaitBlock[3].Thread, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&ExpSysDbgLock.WaitBlock[3].Thread, retaddr);
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
