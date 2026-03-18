/*
 * XREFs of MiRemovePendingBadPageNode @ 0x1406F1970
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x1406F1D98 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall MiRemovePendingBadPageNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EB10);
  v2 = (_QWORD *)qword_140E2EB00;
  while ( v2 )
  {
    if ( a1 > v2[3] )
    {
      v2 = (_QWORD *)v2[1];
    }
    else
    {
      if ( a1 >= v2[3] )
        break;
      v2 = (_QWORD *)*v2;
    }
  }
  if ( v2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2EB00, (__int64)v2);
    v3 = (_QWORD *)qword_140E2EB28;
    if ( *(PVOID **)qword_140E2EB28 != &qword_140E2EB20 )
      __fastfail(3u);
    v2[1] = qword_140E2EB28;
    *v2 = &qword_140E2EB20;
    *v3 = v2;
    qword_140E2EB28 = (__int64)v2;
    if ( (unsigned __int64)++qword_140E2EB30 >= 0x20 && !byte_140E2EB38 )
    {
      stru_140E2EB40.Parameter = 0LL;
      stru_140E2EB40.WorkerRoutine = (void (__fastcall *)(void *))MiDeletePendingBadPageNodesAwaitingDeleteList;
      stru_140E2EB40.List.Flink = 0LL;
      ExQueueWorkItem(&stru_140E2EB40, DelayedWorkQueue);
      byte_140E2EB38 = 1;
    }
  }
  else
  {
    --qword_140E2EB18;
  }
  --qword_140E2EB08;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB10);
}
