/*
 * XREFs of MiUnmapPfns @ 0x14086D48C
 * Callers:
 *     MiAddPhysicalMemory @ 0x14086B3FC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     MiDeleteDynamicPfns @ 0x1406ECE7C (MiDeleteDynamicPfns.c)
 *     MiPhysicalMemoryEverRemoved @ 0x1406EEB94 (MiPhysicalMemoryEverRemoved.c)
 */

void __fastcall MiUnmapPfns(__int64 a1)
{
  int v1; // ebx

  v1 = *(_DWORD *)(a1 + 40);
  if ( (v1 & 1) != 0 )
    LOBYTE(v1) = v1 & 0xD6 | 0x20;
  MiDeleteDynamicPfns(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), v1);
  if ( (v1 & 2) == 0 )
    MiPhysicalMemoryEverRemoved(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), 0);
  if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
  {
    qword_140E37E88 += *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)qword_140E37E88 >= 0x5555 && !BYTE4(stru_140E37F48.Header.WaitListHead.Flink) )
    {
      stru_140E37E68.List.Flink = 0LL;
      stru_140E37E68.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
      stru_140E37E68.Parameter = &MiSystemPartition;
      ExQueueWorkItem(&stru_140E37E68, DelayedWorkQueue);
      BYTE4(stru_140E37F48.Header.WaitListHead.Flink) = 1;
    }
  }
}
