/*
 * XREFs of ExpHpGCTimerCallback @ 0x1404F0B30
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExpSelectGCWorkQueue @ 0x14051FD64 (ExpSelectGCWorkQueue.c)
 */

void __fastcall ExpHpGCTimerCallback(__int64 a1, void *a2)
{
  struct _WORK_QUEUE_ITEM *p_InitialStack; // rbx
  WORK_QUEUE_TYPE v3; // eax

  p_InitialStack = (struct _WORK_QUEUE_ITEM *)&ExSaPageGroupDescriptorArrayLock.InitialStack;
  if ( (_DWORD)a2 != 1 )
    p_InitialStack = (struct _WORK_QUEUE_ITEM *)&ExSaPageGroupDescriptorArrayLock.CycleTime;
  p_InitialStack->WorkerRoutine = (void (__fastcall *)(void *))ExpHpCompactionRoutine;
  p_InitialStack->Parameter = a2;
  p_InitialStack->List.Flink = 0LL;
  v3 = (unsigned int)ExpSelectGCWorkQueue((unsigned int)a2);
  ExQueueWorkItem(p_InitialStack, v3);
}
