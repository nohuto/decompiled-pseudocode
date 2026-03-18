/*
 * XREFs of IoFreeAdapterChannelV2 @ 0x14035AD80
 * Callers:
 *     HalpDmaProcessMapRegisterQueueV2 @ 0x140359B80 (HalpDmaProcessMapRegisterQueueV2.c)
 *     HalAllocateAdapterChannelV2 @ 0x140359DA0 (HalAllocateAdapterChannelV2.c)
 *     HalBuildScatterGatherListV2 @ 0x14035A080 (HalBuildScatterGatherListV2.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     IoFreeMapRegistersV2 @ 0x140359AC0 (IoFreeMapRegistersV2.c)
 *     KeRemoveDeviceQueue @ 0x140359C70 (KeRemoveDeviceQueue.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035A8E0 (HalpDmaAllocateMapRegisters.c)
 *     HalpQueueMapBufferWorker @ 0x14043E34C (HalpQueueMapBufferWorker.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpDmaQueueAdapter @ 0x140589508 (HalpDmaQueueAdapter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoFreeAdapterChannelV2(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 *v4; // r14
  unsigned int v5; // r8d
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 MapRegisters; // rax

  v1 = 0;
  v2 = a1;
  CurrentIrql = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    v1 = 1;
  }
  v4 = (__int64 *)(v2 + 240);
  while ( 1 )
  {
    v5 = *(_DWORD *)(v2 + 248);
    if ( v5 )
      IoFreeMapRegistersV2(v2, *v4, v5);
    result = (__int64)KeRemoveDeviceQueue((PKDEVICE_QUEUE)(v2 + 184));
    v9 = result;
    if ( !result )
      break;
    *(_QWORD *)(v2 + 352) = result;
    *(_DWORD *)(v2 + 248) = *(_DWORD *)(result + 40);
    v10 = *(unsigned int *)(result + 40);
    if ( (_DWORD)v10 && *(_QWORD *)(v2 + 160) )
    {
      MapRegisters = HalpDmaAllocateMapRegisters(v2, v10, v7, v8);
      *v4 = MapRegisters;
      v11 = MapRegisters;
      if ( !MapRegisters )
      {
        HalpDmaQueueAdapter(v2);
        result = HalpQueueMapBufferWorker(v2, *(unsigned int *)(v9 + 40));
        break;
      }
      v4 = (__int64 *)(v2 + 240);
    }
    else
    {
      *v4 = 0LL;
      v11 = 0LL;
      *(_DWORD *)(v2 + 248) = 0;
    }
    *(_QWORD *)(v2 + 352) = v9;
    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v9 + 48), *(_QWORD *)(v9 + 56), v11);
    if ( (_DWORD)result == 1 )
      break;
    if ( (_DWORD)result == 3 )
      *(_DWORD *)(v2 + 248) = 0;
  }
  if ( v1 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
