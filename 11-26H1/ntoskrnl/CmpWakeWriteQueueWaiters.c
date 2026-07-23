/*
 * XREFs of CmpWakeWriteQueueWaiters @ 0x140AED540
 * Callers:
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14085D0E0 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

void __fastcall CmpWakeWriteQueueWaiters(struct _KTHREAD *a1, PRKEVENT Event, LONG a3)
{
  PRKEVENT v4; // rax
  struct _KEVENT *Flink; // rbx

  v4 = Event;
  if ( Event )
  {
    do
    {
      Flink = (struct _KEVENT *)v4[1].Header.WaitListHead.Flink;
      v4[1].Header.LockNV = a3;
      KeSetEvent(v4, 0, 0);
      v4 = Flink;
    }
    while ( Flink );
  }
  KeAbPostRelease((unsigned __int64)a1);
}
