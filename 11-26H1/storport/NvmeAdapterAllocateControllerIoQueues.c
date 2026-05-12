/*
 * XREFs of NvmeAdapterAllocateControllerIoQueues @ 0x1400E46F0
 * Callers:
 *     NvmeAdapterConnectFabricNvmeController @ 0x1400E5CC8 (NvmeAdapterConnectFabricNvmeController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeAdapterFreeControllerIoQueues @ 0x1400E8D9C (NvmeAdapterFreeControllerIoQueues.c)
 */

__int64 __fastcall NvmeAdapterAllocateControllerIoQueues(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 Pool; // rax
  unsigned int i; // esi
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = 0;
  Pool = RaidAllocatePool(
           64LL,
           192LL * *(unsigned __int16 *)(a1 + 20),
           1380147538LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 728) = Pool;
  if ( Pool )
  {
    if ( (*(_BYTE *)(a1 + 136) & 0x40) != 0 )
    {
      for ( i = 0; i < *(unsigned __int16 *)(a1 + 20); ++i )
      {
        v5 = RaidAllocatePool(64LL, 5672LL, 1095655762LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
        v6 = 192LL * i;
        *(_QWORD *)(*(_QWORD *)(a1 + 728) + v6 + 96) = v5;
        if ( !*(_QWORD *)(*(_QWORD *)(a1 + 728) + v6 + 96) )
          goto LABEL_7;
      }
    }
  }
  else
  {
LABEL_7:
    v2 = -1073741801;
    NvmeAdapterFreeControllerIoQueues(a1);
  }
  return v2;
}
