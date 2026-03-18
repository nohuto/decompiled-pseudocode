/*
 * XREFs of PoNotifyMediaBuffering @ 0x140205240
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPriorityThread @ 0x1402052D0 (KeQueryPriorityThread.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // bl
  KPRIORITY PriorityThread; // eax
  int v4; // edx

  v2 = 0;
  KxAcquireSpinLock((PKSPIN_LOCK)&stru_140F11D08.ThreadTimerDelay);
  if ( !LOBYTE(stru_140F11D08.TracingPrivate[0]) )
  {
    v2 = 1;
    LOBYTE(stru_140F11D08.TracingPrivate[0]) = 1;
  }
  BYTE1(stru_140F11D08.TracingPrivate[0]) = a1;
  KxReleaseSpinLock((PKSPIN_LOCK)&stru_140F11D08.ThreadTimerDelay);
  if ( v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    v4 = PriorityThread + 1;
    if ( PriorityThread >= 31 )
      v4 = PriorityThread;
    if ( !a1 && v4 <= 16 )
      v4 = 16;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F11D08.SchedulerAssist, (WORK_QUEUE_TYPE)(v4 + 32));
  }
}
