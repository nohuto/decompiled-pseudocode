/*
 * XREFs of EmRemoveBadS3PagesCallback @ 0x140790050
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

__int64 __fastcall EmRemoveBadS3PagesCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5, int a6)
{
  if ( !a5 || a6 != 1 )
    return 1LL;
  EmpBadS3Page = *a5;
  PersistBadS3PageWorkItem.Parameter = 0LL;
  PersistBadS3PageWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EmpRemoveBadS3PageWorker;
  PersistBadS3PageWorkItem.List.Flink = 0LL;
  ExQueueWorkItem(&PersistBadS3PageWorkItem, DelayedWorkQueue);
  return 2LL;
}
