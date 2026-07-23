/*
 * XREFs of ExpHeapInitPhase1 @ 0x1406D7018
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExAllocateTimer @ 0x14044E550 (ExAllocateTimer.c)
 *     ExpHpEnumerateHeaps @ 0x1404A423C (ExpHpEnumerateHeaps.c)
 *     ExpPoolMgrPhase1Init @ 0x140CEDD38 (ExpPoolMgrPhase1Init.c)
 */

char ExpHeapInitPhase1()
{
  char v0; // bl

  v0 = 0;
  if ( (int)ExpHpEnumerateHeaps(1) >= 0
    && (int)ExpHpEnumerateHeaps(0) >= 0
    && (int)ExpPoolMgrPhase1Init(&dword_140E6BF60) >= 0 )
  {
    ExSaPageGroupDescriptorArrayLock.StackLimit = (void *volatile)ExAllocateTimer(
                                                                    (__int64)ExpHpGCTimerCallback,
                                                                    0LL,
                                                                    8u);
    if ( ExSaPageGroupDescriptorArrayLock.StackLimit )
    {
      ExSaPageGroupDescriptorArrayLock.TrapFrame = (_KTRAP_FRAME *)ExAllocateTimer(
                                                                     (__int64)ExpHpGCTimerCallback,
                                                                     1LL,
                                                                     8u);
      if ( ExSaPageGroupDescriptorArrayLock.TrapFrame )
      {
        LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadLock) = 0;
        ExSaPageGroupDescriptorArrayLock.StackBase = (void *)1;
        return 1;
      }
    }
  }
  return v0;
}
