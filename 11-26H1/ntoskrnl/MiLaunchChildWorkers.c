/*
 * XREFs of MiLaunchChildWorkers @ 0x1405172B8
 * Callers:
 *     MiUseThreads @ 0x1403C3644 (MiUseThreads.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1402052D0 (KeQueryPriorityThread.c)
 *     PsReferencePartitionSafe @ 0x140258850 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1403830D0 (ExQueueWorkItemToPartition.c)
 *     MiGetNextAffinityWalker @ 0x1403E99EC (MiGetNextAffinityWalker.c)
 */

__int64 __fastcall MiLaunchChildWorkers(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v3; // edi
  __int64 v4; // r13
  _QWORD *v5; // rsi
  KPRIORITY PriorityThread; // r12d
  _QWORD *v7; // rbx
  unsigned int i; // r15d
  __int64 v10; // rbx
  __int64 v11; // rbx

  v1 = *(_DWORD *)(a1 + 32);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (_QWORD *)(a1 + 544);
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  v7 = v5;
  for ( i = 0; i < v1; ++i )
  {
    if ( v4 && !PsReferencePartitionSafe(v4) )
    {
      if ( !i )
        *(_DWORD *)(a1 + 32) = 0;
      return 0LL;
    }
    if ( (int)MiGetNextAffinityWalker(a1 + 120, (__int64)(v7 + 5)) >= 0 )
    {
      if ( !*(_DWORD *)(a1 + 132) )
      {
        *((_DWORD *)v7 + 11) = -1;
        ++v3;
      }
    }
    else
    {
      *((_DWORD *)v7 + 11) = -2;
    }
    v7[3] = v7;
    v7[2] = MiThreadWorker;
    *v7 = 0LL;
    v7 += 17;
  }
  if ( v3 )
  {
    v1 -= v3;
    v10 = v3;
    do
    {
      ExQueueWorkItemToPartition(v5, PriorityThread + 32, (unsigned __int16)KeNumberNodes);
      v5 += 17;
      --v10;
    }
    while ( v10 );
  }
  if ( v1 )
  {
    v11 = v1;
    do
    {
      ExQueueWorkItemToPartition(v5, PriorityThread + 32, *(_DWORD *)(a1 + 80));
      v5 += 17;
      --v11;
    }
    while ( v11 );
  }
  return 1LL;
}
