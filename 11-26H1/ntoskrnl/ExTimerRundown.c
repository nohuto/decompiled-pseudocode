/*
 * XREFs of ExTimerRundown @ 0x140513E74
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 *     ExpCancelTimer @ 0x1406D2CE0 (ExpCancelTimer.c)
 */

void ExTimerRundown()
{
  struct _KTHREAD *CurrentThread; // r14
  void **p_StackBase; // rdi
  KIRQL v2; // bp
  struct _KTHREAD *StackBase; // rcx
  unsigned __int64 *p_KernelWaitTime; // rbx
  KIRQL v5; // r13
  KIRQL v6; // al

  CurrentThread = KeGetCurrentThread();
  p_StackBase = &CurrentThread[1].StackBase;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
  StackBase = (struct _KTHREAD *)CurrentThread[1].StackBase;
  if ( StackBase != (struct _KTHREAD *)&CurrentThread[1].StackBase )
  {
    do
    {
      p_KernelWaitTime = &StackBase[-1].KernelWaitTime;
      ObfReferenceObjectWithTag(&StackBase[-1].KernelWaitTime, 0x75526954u);
      KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit, v2);
      v5 = KeAcquireSpinLockRaiseToDpc(p_KernelWaitTime + 8);
      if ( (p_KernelWaitTime[38] & 1) != 0 && CurrentThread == (struct _KTHREAD *)p_KernelWaitTime[10] )
        ExpCancelTimer((PKTIMER)p_KernelWaitTime);
      KeReleaseSpinLock(p_KernelWaitTime + 8, v5);
      ObfDereferenceObjectWithTag(p_KernelWaitTime, 0x75526954u);
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
      StackBase = (struct _KTHREAD *)*p_StackBase;
      v2 = v6;
    }
    while ( *p_StackBase != p_StackBase );
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit, v2);
}
