/*
 * XREFs of ExpHeapInitPhase1 @ 0x1406D2FE8
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimer @ 0x140456CE0 (ExAllocateTimer.c)
 *     ExpHpEnumerateHeaps @ 0x1404AABAC (ExpHpEnumerateHeaps.c)
 *     ExpPoolMgrPhase1Init @ 0x140CE7998 (ExpPoolMgrPhase1Init.c)
 */

char ExpHeapInitPhase1()
{
  char v0; // bl

  v0 = 0;
  if ( (int)ExpHpEnumerateHeaps(1) >= 0
    && (int)ExpHpEnumerateHeaps(0) >= 0
    && (int)ExpPoolMgrPhase1Init(&dword_140E6BC60) >= 0 )
  {
    *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitRegister.Flags = ExAllocateTimer(
                                                                        (__int64)ExpHpGCTimerCallback,
                                                                        0LL,
                                                                        8u);
    if ( *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitRegister.Flags )
    {
      ExSaPageGroupDescriptorArrayLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)ExAllocateTimer(
                                                                                         (__int64)ExpHpGCTimerCallback,
                                                                                         1LL,
                                                                                         8u);
      if ( ExSaPageGroupDescriptorArrayLock.SchedulingGroup )
      {
        *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.Tag = 0;
        ExSaPageGroupDescriptorArrayLock.SystemCallNumber = 0;
        *((_DWORD *)&ExSaPageGroupDescriptorArrayLock.0 + 1) = 1;
        return 1;
      }
    }
  }
  return v0;
}
