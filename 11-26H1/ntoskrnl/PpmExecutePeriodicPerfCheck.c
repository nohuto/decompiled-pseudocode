/*
 * XREFs of PpmExecutePeriodicPerfCheck @ 0x14046A810
 * Callers:
 *     KiUpdateTime @ 0x14021D690 (KiUpdateTime.c)
 *     PpmCheckTimerCallback @ 0x14060A690 (PpmCheckTimerCallback.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeDisableInterrupts @ 0x1402BA170 (KeDisableInterrupts.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 */

void PpmExecutePeriodicPerfCheck()
{
  _KTRAP_FRAME *TrapFrame; // rdi
  unsigned __int64 FirstArgument; // rbx
  struct _LIST_ENTRY *InterruptTimePrecise; // rbp
  bool v3; // r14
  struct _LIST_ENTRY *Blink; // r9
  unsigned __int64 v5; // r10
  signed __int64 v6; // rcx
  unsigned __int64 v7; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v10; // eax
  __int64 v11; // rdx
  unsigned __int32 v12; // ett
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  TrapFrame = PopSleepstudySessionLock.TrapFrame;
  if ( PopSleepstudySessionLock.TrapFrame )
  {
    if ( *(_DWORD *)&PopSleepstudySessionLock.AffinityPrimaryGroup )
    {
      FirstArgument = (unsigned int)KeMinimumIncrement;
      if ( PopSleepstudySessionLock.FirstArgument > (void *)(unsigned int)KeMinimumIncrement )
        FirstArgument = (unsigned __int64)PopSleepstudySessionLock.FirstArgument;
      InterruptTimePrecise = (struct _LIST_ENTRY *)RtlGetInterruptTimePrecise(&v14);
    }
    else
    {
      FirstArgument = (unsigned int)KeTimeIncrement;
      if ( PopSleepstudySessionLock.FirstArgument > (void *)(unsigned int)KeTimeIncrement )
        FirstArgument = (unsigned __int64)PopSleepstudySessionLock.FirstArgument;
      InterruptTimePrecise = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
    }
    if ( (char *)TrapFrame + FirstArgument <= (char *)InterruptTimePrecise )
    {
      v3 = KeDisableInterrupts();
      KxAcquireSpinLock((PKSPIN_LOCK)&PopSleepstudySessionLock.320);
      Blink = PopSleepstudySessionLock.WaitBlock[0].WaitListEntry.Blink;
      if ( (char *)PopSleepstudySessionLock.WaitBlock[0].WaitListEntry.Blink + (FirstArgument >> 1) <= (char *)InterruptTimePrecise )
      {
        LODWORD(v5) = 0;
        v6 = (signed __int64)InterruptTimePrecise;
        if ( TrapFrame != (_KTRAP_FRAME *)1 )
        {
          if ( !*(_DWORD *)&PopSleepstudySessionLock.AffinityPrimaryGroup
            && (char *)TrapFrame + FirstArgument + (unsigned int)KeMaximumIncrement > (char *)InterruptTimePrecise )
          {
            v6 = (signed __int64)TrapFrame + FirstArgument;
          }
          v7 = v6 - FirstArgument - (_QWORD)TrapFrame;
          if ( *(_DWORD *)&PopSleepstudySessionLock.AffinityPrimaryGroup )
          {
            if ( (char *)PopSleepstudySessionLock.WaitBlock[0].WaitListEntry.Blink + FirstArgument < (char *)InterruptTimePrecise
              && v7 >= FirstArgument )
            {
              if ( v7 >= 0x989680 )
                v7 = 10000000LL;
              v5 = v7 / FirstArgument;
            }
          }
          else if ( (char *)PopSleepstudySessionLock.WaitBlock[0].WaitListEntry.Blink
                  + (unsigned int)KeMaximumIncrement
                  + FirstArgument < (char *)InterruptTimePrecise
                 && v7 >= FirstArgument )
          {
            LODWORD(v5) = 64;
            if ( (unsigned int)(v7 / FirstArgument) < 0x40 )
              LODWORD(v5) = v7 / FirstArgument;
          }
        }
        if ( TrapFrame == (_KTRAP_FRAME *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)&PopSleepstudySessionLock.TrapFrame,
                                            v6,
                                            (signed __int64)TrapFrame) )
        {
          PopSleepstudySessionLock.WaitBlock[0].WaitListEntry.Blink = InterruptTimePrecise;
          KiInsertQueueDpc((ULONG_PTR)&PopSleepstudySessionLock.WaitBlock[0].Object, (unsigned int)v5, 0LL, 0LL, 0);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        _InterlockedAnd64((volatile signed __int64 *)&PopSleepstudySessionLock.320, 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)&PopSleepstudySessionLock.320, retaddr);
      if ( v3 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v10 = *SchedulerAssist;
          do
          {
            v11 = v10;
            LODWORD(v11) = v10 & 0xFFDFFFFF;
            v12 = v10;
            v10 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v10 & 0xFFDFFFFF, v10);
          }
          while ( v12 != v10 );
          if ( (v10 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v11, SchedulerAssist, Blink);
        }
        _enable();
      }
    }
  }
}
