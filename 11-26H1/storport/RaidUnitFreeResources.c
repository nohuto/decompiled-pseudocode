/*
 * XREFs of RaidUnitFreeResources @ 0x140011CBC
 * Callers:
 *     RaidUnitAllocateResources @ 0x14002D7B4 (RaidUnitAllocateResources.c)
 *     RaidDeleteUnit @ 0x1400459EC (RaidDeleteUnit.c)
 * Callees:
 *     StorDeleteScsiIdentity @ 0x140011C04 (StorDeleteScsiIdentity.c)
 *     StorFreeContiguousIoResources @ 0x14001271C (StorFreeContiguousIoResources.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14002517C (RaidAdapterPoFxIdleComponent.c)
 *     StorpShutdownRegistryWatch @ 0x1400774A0 (StorpShutdownRegistryWatch.c)
 *     StorpUninitializePerUnitPerfTelemetry @ 0x1400C4448 (StorpUninitializePerUnitPerfTelemetry.c)
 *     RaDeleteTagList @ 0x1401B9B74 (RaDeleteTagList.c)
 */

__int64 __fastcall RaidUnitFreeResources(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int HighestNodeNumber; // r8d
  __int64 v6; // rdx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rax
  struct _IO_WORKITEM *v12; // rcx
  struct _IO_WORKITEM *v13; // rcx
  struct _IO_WORKITEM *v14; // rcx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  struct _IO_WORKITEM *v24; // rcx

  KeCancelTimer((PKTIMER)(a1 + 1056));
  KeCancelTimer((PKTIMER)(a1 + 1184));
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    KeCancelTimer((PKTIMER)(v2 + 88));
  KeFlushQueuedDpcs();
  v3 = *(unsigned int *)(a1 + 1824);
  if ( (_DWORD)v3 != -1 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)v4 != 1094997074 || (*(_BYTE *)(v4 + 111) & 4) == 0 )
    {
      HighestNodeNumber = KeQueryHighestNodeNumber();
      if ( (unsigned int)v3 / *(_DWORD *)(a1 + 648) < HighestNodeNumber + 1 )
        HighestNodeNumber = (unsigned int)v3 / *(_DWORD *)(a1 + 648);
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(a1 + 576) + ((unsigned __int64)HighestNodeNumber << 6)),
        (PSLIST_ENTRY)(*(_QWORD *)(a1 + 640) + 16 * v3));
    }
  }
  v6 = *(_QWORD *)(a1 + 1840);
  if ( v6 )
    StorFreeContiguousIoResources(*(_QWORD *)(a1 + 24), v6 - 48);
  v7 = *(void **)(a1 + 3568);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x494E6152u);
    *(_QWORD *)(a1 + 3568) = 0LL;
  }
  v8 = *(void **)(a1 + 3560);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x494E6152u);
    *(_QWORD *)(a1 + 3560) = 0LL;
  }
  v9 = *(void **)(a1 + 560);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x51506152u);
    *(_QWORD *)(a1 + 560) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 3576) )
  {
    StorpShutdownRegistryWatch();
    ExFreePoolWithTag(*(PVOID *)(a1 + 3576), 0x57526152u);
    *(_QWORD *)(a1 + 3576) = 0LL;
  }
  StorDeleteScsiIdentity(a1 + 112);
  RaDeleteTagList(a1);
  v10 = *(void **)(a1 + 16);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x45556152u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( *(_DWORD *)(a1 + 2372) )
    StorpUninitializePerUnitPerfTelemetry(a1);
  if ( (*(_BYTE *)(a1 + 504) & 0x10) != 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 504) &= ~0x10u;
  }
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    v24 = *(struct _IO_WORKITEM **)(v11 + 64);
    if ( v24 )
    {
      IoFreeWorkItem(v24);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = 0LL;
    }
  }
  v12 = *(struct _IO_WORKITEM **)(a1 + 1976);
  if ( v12 )
  {
    IoFreeWorkItem(v12);
    *(_QWORD *)(a1 + 1976) = 0LL;
  }
  v13 = *(struct _IO_WORKITEM **)(a1 + 1992);
  if ( v13 )
  {
    IoFreeWorkItem(v13);
    *(_QWORD *)(a1 + 1992) = 0LL;
  }
  v14 = *(struct _IO_WORKITEM **)(a1 + 2016);
  if ( v14 )
  {
    IoFreeWorkItem(v14);
    *(_QWORD *)(a1 + 2016) = 0LL;
  }
  v15 = *(_QWORD *)(a1 + 24);
  if ( v15 && *(_QWORD *)(v15 + 5024) && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3616), 0, 1) == 1 )
    RaidAdapterPoFxIdleComponent(*(_QWORD *)(a1 + 24), 0LL, 0LL);
  v16 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1864);
  if ( v16 )
  {
    ExFreeCacheAwareRundownProtection(v16);
    *(_QWORD *)(a1 + 1864) = 0LL;
  }
  v17 = *(void **)(a1 + 1880);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x57506152u);
    *(_QWORD *)(a1 + 1880) = 0LL;
  }
  v18 = *(void **)(a1 + 3424);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x54536152u);
    *(_QWORD *)(a1 + 3424) = 0LL;
  }
  v19 = *(void **)(a1 + 3440);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x525A6152u);
    *(_QWORD *)(a1 + 3440) = 0LL;
  }
  v20 = *(void **)(a1 + 3456);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x525A6152u);
  v21 = *(void **)(a1 + 3592);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0x43546152u);
    *(_QWORD *)(a1 + 3592) = 0LL;
  }
  v22 = *(void **)(a1 + 3600);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0x43546152u);
    *(_QWORD *)(a1 + 3600) = 0LL;
  }
  return 0LL;
}
