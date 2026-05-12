/*
 * XREFs of NvmeAdapterStorMQAddController @ 0x1400DF1F4
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerAcquireRundown @ 0x1400C5B84 (NvmeControllerAcquireRundown.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     NvmeControllerAllocateInternalBuffer @ 0x1400F0620 (NvmeControllerAllocateInternalBuffer.c)
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 */

__int64 __fastcall NvmeAdapterStorMQAddController(__int64 a1, int a2, _QWORD *a3)
{
  int NvmeController; // ebx
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( !a1 || !a3 )
  {
    NvmeController = -1073741811;
    return RaidNtStatusToStorStatus(NvmeController);
  }
  *a3 = 0LL;
  if ( *(_DWORD *)(a1 + 84) != 1 )
  {
    NvmeController = -1073741661;
    return RaidNtStatusToStorStatus(NvmeController);
  }
  NvmeController = NvmeAdapterCreateNvmeController(a1, 0, 0, 0, (__int64)&v12);
  if ( NvmeController < 0 )
    return RaidNtStatusToStorStatus(NvmeController);
  *(_BYTE *)(v12 + 1728) = 1;
  *(_DWORD *)(v12 + 976) = 0;
  v7 = v12;
  *(_QWORD *)(v7 + 1648) = RaidAllocatePool(64LL, (unsigned int)(a2 + 64), 1380147538LL, *(_QWORD *)(a1 + 8));
  v8 = *(_QWORD *)(v12 + 1648);
  if ( !v8 )
  {
    NvmeAdapterDeleteNvmeController(&v12);
    NvmeController = -1073741670;
    return RaidNtStatusToStorStatus(NvmeController);
  }
  if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
  {
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(a1 + 1024);
    NvmeController = NvmeControllerAllocateInternalBuffer(v12, a1 + 176);
    if ( NvmeController < 0 )
      goto LABEL_14;
  }
  else
  {
    *(_DWORD *)(v8 + 8) = 0x80000000;
    *(_QWORD *)(a1 + 1376) = -1LL;
    *(_QWORD *)(a1 + 1408) = -1LL;
    *(_QWORD *)(a1 + 1384) = 0LL;
    *(_QWORD *)(a1 + 1400) = 0LL;
    *(_QWORD *)(a1 + 1392) = 0LL;
  }
  **(_QWORD **)(v12 + 1648) = v12;
  NvmeController = NvmeControllerAcquireRundown(v12);
  if ( NvmeController < 0 )
  {
LABEL_14:
    NvmeAdapterDeleteNvmeController(&v12);
    return RaidNtStatusToStorStatus(NvmeController);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1192), 1u);
  v9 = *(_QWORD **)(a1 + 1312);
  v10 = (_QWORD *)(v12 + 112);
  if ( *v9 != a1 + 1304 )
    __fastfail(3u);
  *v10 = a1 + 1304;
  v10[1] = v9;
  *v9 = v10;
  *(_QWORD *)(a1 + 1312) = v10;
  ++*(_DWORD *)(a1 + 1320);
  ExReleaseResourceLite((PERESOURCE)(a1 + 1192));
  KeLeaveCriticalRegion();
  if ( a2 )
    *a3 = *(_QWORD *)(v12 + 1648) + 64LL;
  return RaidNtStatusToStorStatus(NvmeController);
}
