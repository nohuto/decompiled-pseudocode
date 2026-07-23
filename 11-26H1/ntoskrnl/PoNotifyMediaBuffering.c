/*
 * XREFs of PoNotifyMediaBuffering @ 0x140205320
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPriorityThread @ 0x1402053B0 (KeQueryPriorityThread.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // bl
  KPRIORITY PriorityThread; // eax
  int v4; // edx

  v2 = 0;
  KxAcquireSpinLock(&PpmMediaBufferingWork);
  if ( !byte_140F12568 )
  {
    v2 = 1;
    byte_140F12568 = 1;
  }
  byte_140F12569 = a1;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  if ( v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    v4 = PriorityThread + 1;
    if ( PriorityThread >= 31 )
      v4 = PriorityThread;
    if ( !a1 && v4 <= 16 )
      v4 = 16;
    ExQueueWorkItem(&WorkItem, (WORK_QUEUE_TYPE)(v4 + 32));
  }
}
