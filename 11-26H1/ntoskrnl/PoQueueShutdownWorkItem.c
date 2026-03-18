/*
 * XREFs of PoQueueShutdownWorkItem @ 0x1407CF170
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 */

NTSTATUS __stdcall PoQueueShutdownWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  NTSTATUS v2; // ebx
  struct _LIST_ENTRY *WriteTransferCount; // rax

  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.PriorityFloorSummary);
  v2 = 0;
  if ( BYTE2(stru_140E66FF0.Padding[1]) )
  {
    WriteTransferCount = (struct _LIST_ENTRY *)stru_140F11D08.WriteTransferCount;
    if ( *(struct _KTHREAD **)stru_140F11D08.WriteTransferCount != (struct _KTHREAD *)&stru_140F11D08.ReadTransferCount )
      __fastfail(3u);
    WorkItem->List.Flink = (struct _LIST_ENTRY *)&stru_140F11D08.ReadTransferCount;
    WorkItem->List.Blink = WriteTransferCount;
    WriteTransferCount->Flink = &WorkItem->List;
    stru_140F11D08.WriteTransferCount = (__int64)WorkItem;
  }
  else
  {
    v2 = -1073741077;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.PriorityFloorSummary);
  return v2;
}
