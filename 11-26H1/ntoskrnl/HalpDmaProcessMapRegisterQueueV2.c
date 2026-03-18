/*
 * XREFs of HalpDmaProcessMapRegisterQueueV2 @ 0x140359B80
 * Callers:
 *     IoFreeMapRegistersV2 @ 0x140359AC0 (IoFreeMapRegistersV2.c)
 *     HalPutScatterGatherListV2 @ 0x14035B580 (HalPutScatterGatherListV2.c)
 *     HalpGrowMapBufferWorker @ 0x1404EE5A0 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpDmaFreeMapRegisters @ 0x140359820 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     IoFreeAdapterChannelV2 @ 0x14035AD80 (IoFreeAdapterChannelV2.c)
 *     HalpQueueMapBufferWorker @ 0x14043E34C (HalpQueueMapBufferWorker.c)
 *     HalpDmaDequeueAdapter @ 0x140589338 (HalpDmaDequeueAdapter.c)
 *     HalpDmaQueueAdapter @ 0x140589508 (HalpDmaQueueAdapter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
