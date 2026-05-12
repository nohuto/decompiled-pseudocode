/*
 * XREFs of NvmeAdapterCreateFabricControllerIoQueues @ 0x1400E694C
 * Callers:
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400EA6E0 (NvmeAdapterNvmeControllerBackgroundWork.c)
 *     NvmeAdapterStartFabricNvmeControllerOperations @ 0x1400EE3F8 (NvmeAdapterStartFabricNvmeControllerOperations.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     NvmeAdapterCreateConnectFabricControllerIoQueue @ 0x1400E661C (NvmeAdapterCreateConnectFabricControllerIoQueue.c)
 */

int __fastcall NvmeAdapterCreateFabricControllerIoQueues(__int64 a1)
{
  unsigned __int16 v2; // cx
  __int16 v3; // bx
  unsigned __int16 i; // si
  __int64 v5; // rcx
  int v6; // eax

  v2 = *(_WORD *)(a1 + 20);
  v3 = 0;
  for ( i = 0; i < v2; ++i )
  {
    v5 = *(_QWORD *)(a1 + 728) + 192LL * i;
    v6 = *(_DWORD *)(v5 + 120);
    if ( v6 == 5 || !v6 && (int)NvmeAdapterCreateConnectFabricControllerIoQueue(v5) >= 0 )
      ++v3;
    v2 = *(_WORD *)(a1 + 20);
  }
  *(_WORD *)(a1 + 22) = v3;
  if ( v3 == v2 )
    *(_QWORD *)(a1 + 136) &= 0xFFFFFFFFFFFFCFFFuLL;
  return StorEtwNvmeControllerEvent(
           a1,
           1,
           4LL,
           (__int64)L"CreateIoQueues",
           L"MaxIoQueueCount",
           v2,
           L"IoQueueCount",
           v3,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0,
           (void *)&word_140152E7C,
           0);
}
