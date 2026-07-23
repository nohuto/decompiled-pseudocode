/*
 * XREFs of MiFlushDeferredRetpolineImageLoadEvents @ 0x140873ACC
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140B21560 (MiLogNonRetpolineImageLoadEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 MiFlushDeferredRetpolineImageLoadEvents()
{
  struct _KTHREAD *Lock; // rdi
  unsigned int *Thread; // rbx
  __int64 v2; // rcx

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    Thread = (unsigned int *)stru_140E2D2D0.WaitBlock[2].Thread;
    if ( stru_140E2D2D0.WaitBlock[2].Thread == (struct _KTHREAD *)&stru_140E2D2D0.WaitBlockFill11[120] )
      break;
    if ( (unsigned __int8 *)stru_140E2D2D0.WaitBlock[2].Thread->Header.WaitListHead.Flink != &stru_140E2D2D0.WaitBlockFill11[120]
      || (v2 = *(_QWORD *)stru_140E2D2D0.WaitBlock[2].Thread,
          *(struct _KTHREAD **)(*(_QWORD *)stru_140E2D2D0.WaitBlock[2].Thread + 8LL) != stru_140E2D2D0.WaitBlock[2].Thread) )
    {
      __fastfail(3u);
    }
    stru_140E2D2D0.WaitBlock[2].Thread = *(struct _KTHREAD **)stru_140E2D2D0.WaitBlock[2].Thread;
    *(_QWORD *)(v2 + 8) = &stru_140E2D2D0.WaitBlock[2].Thread;
    MiLogNonRetpolineImageLoadEvent(Thread + 4, Thread[8], Thread[9]);
    ExFreePoolWithTag(Thread, 0);
  }
  return MmReleaseLoadLock(Lock);
}
