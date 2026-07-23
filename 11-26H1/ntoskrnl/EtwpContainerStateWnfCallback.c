/*
 * XREFs of EtwpContainerStateWnfCallback @ 0x1406C74C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1406C79F8 (EtwpQueryPartitionRegistryInformation.c)
 */

__int64 EtwpContainerStateWnfCallback()
{
  __int64 v0; // rbx

  v0 = EtwpHostSiloState;
  if ( !*(_DWORD *)(EtwpHostSiloState + 4432) )
  {
    EtwpQueryPartitionRegistryInformation(
      EtwpHostSiloState + 4448,
      EtwpHostSiloState + 4488,
      EtwpHostSiloState + 4496,
      EtwpHostSiloState + 4500,
      EtwpHostSiloState + 4480,
      EtwpHostSiloState + 4464);
    ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v0 + 4440), NormalWorkQueue);
    *(_DWORD *)(v0 + 4432) = 1;
  }
  return 0LL;
}
