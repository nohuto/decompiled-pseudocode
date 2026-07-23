/*
 * XREFs of HalpDmaProcessMapRegisterQueueV2 @ 0x14035B920
 * Callers:
 *     IoFreeMapRegistersV2 @ 0x14035B860 (IoFreeMapRegistersV2.c)
 *     HalPutScatterGatherListV2 @ 0x14035D320 (HalPutScatterGatherListV2.c)
 *     HalpGrowMapBufferWorker @ 0x1404E7B80 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpDmaFreeMapRegisters @ 0x14035B5C0 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     IoFreeAdapterChannelV2 @ 0x14035CB20 (IoFreeAdapterChannelV2.c)
 *     HalpQueueMapBufferWorker @ 0x140436E5C (HalpQueueMapBufferWorker.c)
 *     HalpDmaDequeueAdapter @ 0x14058BA08 (HalpDmaDequeueAdapter.c)
 *     HalpDmaQueueAdapter @ 0x14058BBD8 (HalpDmaQueueAdapter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaProcessMapRegisterQueueV2(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 MapRegisters; // rax
  int v8; // eax
  unsigned int v9; // r8d

  v2 = a2;
  while ( 1 )
  {
    LOBYTE(a2) = v2;
    result = HalpDmaDequeueAdapter(a1, a2);
    v5 = result;
    if ( !result )
      return result;
    v6 = *(_QWORD *)(result + 352);
    MapRegisters = HalpDmaAllocateMapRegisters(result, *(unsigned int *)(result + 248));
    *(_QWORD *)(v5 + 240) = MapRegisters;
    if ( !MapRegisters )
    {
      HalpDmaQueueAdapter(v5);
      return HalpQueueMapBufferWorker(v5, *(unsigned int *)(v5 + 248));
    }
    v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 48), *(_QWORD *)(v6 + 56), MapRegisters);
    if ( v8 == 3 )
    {
      *(_DWORD *)(v5 + 248) = 0;
      goto LABEL_6;
    }
    if ( v8 == 2 )
    {
LABEL_6:
      v9 = *(_DWORD *)(v5 + 248);
      if ( v9 )
      {
        HalpDmaFreeMapRegisters(v5, *(_QWORD *)(v5 + 240), v9);
        *(_DWORD *)(v5 + 248) = 0;
      }
      IoFreeAdapterChannelV2(v5);
    }
  }
}
