/*
 * XREFs of PpmCheckStart @ 0x14025699C
 * Callers:
 *     PpmCheckPeriodicStart @ 0x1402568F0 (PpmCheckPeriodicStart.c)
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     PpmEventTracePerfCheckStart @ 0x140256A98 (PpmEventTracePerfCheckStart.c)
 *     PpmCheckRun @ 0x140256BB0 (PpmCheckRun.c)
 *     PpmHeteroHgsCheckContainmentDecision @ 0x1402589C8 (PpmHeteroHgsCheckContainmentDecision.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x140258A18 (PpmPerfSetAllDomainsToUpdate.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PpmCheckStart(int a1)
{
  __int64 v1; // rbx
  _BOOL8 v2; // rdi
  int v4; // edx
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  LODWORD(PopSleepstudySessionLock.SchedulingGroup) = a1;
  *(_DWORD *)&PopSleepstudySessionLock.SavedApcStateFill[16] = 0;
  LODWORD(PopSleepstudySessionLock.ApcState.ApcListHead[0].Flink) = 1;
  memset_0(&PopSleepstudySessionLock.SavedApcStateFill[40], 0, 0xC0uLL);
  PopSleepstudySessionLock.SavedApcState.ApcListHead[0].Blink = &PopSleepstudySessionLock.SavedApcState.ApcListHead[1];
  *(_QWORD *)&PopSleepstudySessionLock.SystemCallNumber = RtlGetInterruptTimePrecise(&v5);
  *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[8] = *(_QWORD *)&PopSleepstudySessionLock.SystemCallNumber;
  PpmEventTracePerfCheckStart(PopSleepstudySessionLock.TrapFrame, (unsigned int)v1);
  *(_DWORD *)&PopSleepstudySessionLock.WaitBlockFill11[100] = 0;
  *(_QWORD *)&PopSleepstudySessionLock.WaitBlockFill11[16] = *(_QWORD *)(PopSleepstudySessionLock.NpxState + 8 * v1);
  v2 = stru_140F11D08.KernelShadowStack >= (void *)MEMORY[0xFFFFF78000000008];
  if ( *(_KSCHEDULING_GROUP *volatile *)((char *)&PopSleepstudySessionLock.SchedulingGroup + 4) != (_KSCHEDULING_GROUP *volatile)__PAIR64__(stru_140F11D08.Spare35[0] >= MEMORY[0xFFFFF78000000008], v2) )
  {
    PpmPerfSetAllDomainsToUpdate();
    *(_DWORD *)&PopSleepstudySessionLock.WaitRegister.Flags = v4;
    HIDWORD(PopSleepstudySessionLock.SchedulingGroup) = v2;
    PpmHeteroHgsCheckContainmentDecision();
  }
  return PpmCheckRun(0LL, 0LL, 0LL, 0LL);
}
