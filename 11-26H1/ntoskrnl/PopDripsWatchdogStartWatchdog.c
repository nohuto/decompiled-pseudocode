/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x140A3C690
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PopCalculateIdleInformation @ 0x140434E0C (PopCalculateIdleInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409D92BC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A3C818 (PopDripsWatchdogScheduleNextTimer.c)
 */

void PopDripsWatchdogStartWatchdog()
{
  signed __int32 Blink; // eax
  signed __int32 v1; // ett
  void *v2; // rdi
  void *v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  void *v6; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  PiDmObjectManagerAcquireExclusiveLock((struct _ERESOURCE *)&PopAdaptiveStandbyLock.QuantumTarget);
  if ( ((__int64)PopAdaptiveStandbyLock.FirstArgument & 2) != 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmLock.Header.WaitListHead.Blink);
    Blink = (signed __int32)PopDirectedDripsUmLock.Header.WaitListHead.Blink;
    do
    {
      v1 = Blink;
      Blink = _InterlockedCompareExchange(
                (volatile signed __int32 *)&PopDirectedDripsUmLock.Header.WaitListHead.Blink,
                Blink,
                Blink);
    }
    while ( v1 != Blink );
    if ( !Blink )
    {
      v2 = (void *)MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)&v4);
      v3 = *(void **)&PopSleepstudySessionLock.PriorityFloorSummary;
      if ( (PopAdaptiveStandbyLock.WaitBlockFill4[4] & 1) != 0 )
      {
        PopAdaptiveStandbyLock.WaitBlock[0].SpareLong = 0;
        *(_OWORD *)&PopAdaptiveStandbyLock.WaitBlockFill11[56] = v4;
        *(_DWORD *)&PopAdaptiveStandbyLock.WaitBlockFill11[24] = PopAdaptiveStandbyLock.Header.WaitListHead.Blink;
        PopAdaptiveStandbyLock.WaitBlock[0].Object = v2;
        PopAdaptiveStandbyLock.WaitBlock[0].WaitListEntry.Blink = 0LL;
        *(_OWORD *)&PopAdaptiveStandbyLock.WaitBlockFill11[72] = v5;
        PopAdaptiveStandbyLock.WaitBlock[0].SparePtr = v2;
        PopAdaptiveStandbyLock.WaitBlock[1].SparePtr = v6;
        PopDripsWatchdogScheduleNextTimer(&PopAdaptiveStandbyLock.TrapFrame);
      }
      if ( (PopAdaptiveStandbyLock.NpxState & 0x100000000LL) != 0 )
      {
        PopAdaptiveStandbyLock.SavedApcState.ApcListHead[0].Flink = 0LL;
        memset_0(&PopAdaptiveStandbyLock.SavedApcStateFill[8], 0, 0x50uLL);
        *(_DWORD *)&PopAdaptiveStandbyLock.SavedApcStateFill[36] = DWORD1(xmmword_140F0FEA0);
        *(_OWORD *)&PopAdaptiveStandbyLock.SchedulerApc.Type = v4;
        *(_QWORD *)&PopAdaptiveStandbyLock.SavedApcStateFill[40] = qword_140E26FA0;
        *(_OWORD *)&PopAdaptiveStandbyLock.SchedulerApcFill5[16] = v5;
        PopAdaptiveStandbyLock.SchedulerApc.Reserved[0] = v6;
        PopDripsWatchdogScheduleNextTimer(&PopAdaptiveStandbyLock.WaitBlockFill11[96]);
      }
      LODWORD(PopAdaptiveStandbyLock.FirstArgument) |= 4u;
      PopAdaptiveStandbyLock.SchedulerApc.Reserved[2] = v3;
    }
  }
  ExReleaseResourceLite((PERESOURCE)&PopAdaptiveStandbyLock.QuantumTarget);
  KeLeaveCriticalRegion();
}
