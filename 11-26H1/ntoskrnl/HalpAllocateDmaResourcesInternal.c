/*
 * XREFs of HalpAllocateDmaResourcesInternal @ 0x14043721C
 * Callers:
 *     HalpFreeDmaChannels @ 0x140436F14 (HalpFreeDmaChannels.c)
 *     HalpDmaProcessMapRegisterQueueV3 @ 0x1404374EC (HalpDmaProcessMapRegisterQueueV3.c)
 *     HalpContinueProcessingWaitQueue @ 0x1404377B0 (HalpContinueProcessingWaitQueue.c)
 *     HalpAllocateAdapterChannel @ 0x140439894 (HalpAllocateAdapterChannel.c)
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14057B58C (HalpDmaReturnEmergencyLogicalAddressResources.c)
 * Callees:
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpQueueMapBufferWorker @ 0x140436E5C (HalpQueueMapBufferWorker.c)
 *     HalpAllocateDmaChannels @ 0x14043712C (HalpAllocateDmaChannels.c)
 *     HalFreeAdapterObject @ 0x140437610 (HalFreeAdapterObject.c)
 *     IoFreeAdapterChannelV3 @ 0x140437640 (IoFreeAdapterChannelV3.c)
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x14052A944 (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x14057B3B4 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x14057B45C (HalpDmaRemoveFromEmergencyLogicalAddressQueue.c)
 *     HalpDmaQueueAdapter @ 0x14058BBD8 (HalpDmaQueueAdapter.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x14058F264 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpAllocateDmaResourcesInternal(__int64 a1, char a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rsi
  _DWORD *v5; // rdi
  int v8; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  _DWORD *v13; // rax
  unsigned int v14; // ebp
  _QWORD *MapRegisters; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  int v19; // eax
  _QWORD *v20; // r14
  __int64 v21; // r8
  unsigned int i; // eax

  v4 = *(_QWORD *)(a1 + 352);
  v5 = (_DWORD *)(a1 + 624);
  v8 = *(_DWORD *)(a1 + 624);
  if ( !v8 )
  {
    *v5 = 1;
    goto LABEL_8;
  }
  v10 = v8 - 1;
  if ( !v10 )
  {
LABEL_8:
    v13 = v5;
    if ( !*(_BYTE *)(a1 + 441) )
    {
      if ( !HalpAllocateDmaChannels(a1) )
        goto LABEL_33;
      v13 = (_DWORD *)(a1 + 624);
    }
    ++*v5;
    v5 = v13;
    goto LABEL_10;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        goto LABEL_18;
      return 0;
    }
    goto LABEL_16;
  }
LABEL_10:
  v14 = *(_DWORD *)(a1 + 248);
  if ( v14 && *(_BYTE *)(a1 + 440) )
  {
    MapRegisters = (_QWORD *)HalpDmaAllocateMapRegisters(a1, v14, (__int64)a3, a4);
    *(_QWORD *)(a1 + 240) = MapRegisters;
    v16 = MapRegisters;
    if ( !MapRegisters )
    {
      HalpQueueMapBufferWorker(a1, v14);
      if ( (*(_DWORD *)(v4 + 20) & 1) == 0 )
        HalpDmaQueueAdapter(a1);
      goto LABEL_33;
    }
    MapRegisters[3] = 0LL;
    MapRegisters[4] = 0LL;
    MapRegisters[5] = 0LL;
    if ( (*(_DWORD *)(v4 + 20) & 4) != 0 )
    {
      for ( i = 0; i < v14; ++i )
      {
        if ( !v16 )
          break;
        v16[6] |= 0x20uLL;
        v16 = (_QWORD *)v16[1];
      }
    }
    v5 = (_DWORD *)(a1 + 624);
  }
  else
  {
    *(_QWORD *)(a1 + 240) = 0LL;
    *(_DWORD *)(a1 + 248) = 0;
  }
  *v5 = *(_DWORD *)(a1 + 624) + 1;
LABEL_16:
  if ( *(_DWORD *)(a1 + 520) != 3 )
    goto LABEL_17;
  v20 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL);
  if ( (int)guard_dispatch_icall_no_overrides(
              *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL),
              *(_DWORD *)(v4 + 20) & 0xFFFFF000) >= 0 )
    goto LABEL_17;
  LOBYTE(v21) = (*(_BYTE *)(v4 + 20) & 1) == 0;
  if ( !(unsigned __int8)HalpDmaUseEmergencyLogicalAddressResources(a1, a1 + 600, v21) )
  {
LABEL_33:
    v19 = *(_DWORD *)(v4 + 20);
    if ( (v19 & 1) != 0
      || (v19 & 2) != 0
      && (*(_DWORD *)(v4 - 8) & 2) != 0
      && ((unsigned __int8)HalpDmaRemoveFromEmergencyLogicalAddressQueue(a1, a1 + 600)
       || (unsigned __int8)HalpDmaRemoveAdapterFromMasterQueue(a1)
       || (unsigned __int8)HalpDmaRemoveAdapterFromChannelQueue(a1)) )
    {
      *(_DWORD *)(a1 + 248) = 0;
      IoFreeAdapterChannelV3(a1);
    }
    return 0;
  }
  *v20 = *(_QWORD *)(a1 + 560);
LABEL_17:
  ++*v5;
LABEL_18:
  if ( (*(_DWORD *)(v4 + 20) & 2) != 0 )
    _InterlockedOr((volatile signed __int32 *)(v4 - 8), 1u);
  ++*v5;
  if ( (*(_DWORD *)(v4 + 20) & 2) != 0 )
    *(_QWORD *)(a1 + 360) = v4 - 16;
  if ( *(_QWORD *)(v4 + 24) )
  {
    v17 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 48), *(_QWORD *)(v4 + 56));
    if ( a3 )
      *a3 = v17;
    if ( a2 )
      HalFreeAdapterObject(a1, v17);
  }
  return 1;
}
