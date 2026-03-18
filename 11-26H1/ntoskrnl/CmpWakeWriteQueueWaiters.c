/*
 * XREFs of CmpWakeWriteQueueWaiters @ 0x140AEAA50
 * Callers:
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140856D48 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
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
