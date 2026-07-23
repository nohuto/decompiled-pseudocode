/*
 * XREFs of MiRemovePendingBadPageNode @ 0x1406F65E0
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x1406F6A08 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall MiRemovePendingBadPageNode(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2EC90);
  v2 = (_QWORD *)qword_140E2EC80;
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
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140E2EC80, (__int64)v2);
    v3 = (_QWORD *)qword_140E2ECA8;
    if ( *(PVOID **)qword_140E2ECA8 != &qword_140E2ECA0 )
      __fastfail(3u);
    v2[1] = qword_140E2ECA8;
    *v2 = &qword_140E2ECA0;
    *v3 = v2;
    qword_140E2ECA8 = (__int64)v2;
    if ( (unsigned __int64)++qword_140E2ECB0 >= 0x20 && !byte_140E2ECB8 )
    {
      stru_140E2ECC0.Parameter = 0LL;
      stru_140E2ECC0.WorkerRoutine = (void (__fastcall *)(void *))MiDeletePendingBadPageNodesAwaitingDeleteList;
      stru_140E2ECC0.List.Flink = 0LL;
      ExQueueWorkItem(&stru_140E2ECC0, DelayedWorkQueue);
      byte_140E2ECB8 = 1;
    }
  }
  else
  {
    --qword_140E2EC98;
  }
  --qword_140E2EC88;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EC90);
}
