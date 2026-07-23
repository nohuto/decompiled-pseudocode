/*
 * XREFs of ExpHpGCTimerCallback @ 0x1404EA110
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExpSelectGCWorkQueue @ 0x140522408 (ExpSelectGCWorkQueue.c)
 */

void __fastcall ExpHpGCTimerCallback(__int64 a1, void *a2)
{
  struct _WORK_QUEUE_ITEM *p_CurrentRunTime; // rbx
  WORK_QUEUE_TYPE v3; // eax

  p_CurrentRunTime = (struct _WORK_QUEUE_ITEM *)&ExSaPageGroupDescriptorArrayLock.CurrentRunTime;
  if ( (_DWORD)a2 != 1 )
    p_CurrentRunTime = (struct _WORK_QUEUE_ITEM *)&ExSaPageGroupDescriptorArrayLock.WaitRegister;
  p_CurrentRunTime->WorkerRoutine = (void (__fastcall *)(void *))ExpHpCompactionRoutine;
  p_CurrentRunTime->Parameter = a2;
  p_CurrentRunTime->List.Flink = 0LL;
  v3 = (unsigned int)ExpSelectGCWorkQueue((unsigned int)a2);
  ExQueueWorkItem(p_CurrentRunTime, v3);
}
