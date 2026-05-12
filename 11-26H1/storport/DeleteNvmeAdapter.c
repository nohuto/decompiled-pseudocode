/*
 * XREFs of DeleteNvmeAdapter @ 0x1400D1764
 * Callers:
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019E4E8 (NvmeAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidDeleteDeferredQueue @ 0x140047EB4 (RaidDeleteDeferredQueue.c)
 *     PortFreeRegistryBuffer @ 0x14005B9D4 (PortFreeRegistryBuffer.c)
 *     RaDriverDeleteDevice @ 0x14005BDB8 (RaDriverDeleteDevice.c)
 *     NvmeAdapterFreeHostGateways @ 0x1400D8C4C (NvmeAdapterFreeHostGateways.c)
 *     NvmeAdapterDeleteNvmeController @ 0x1400E74A8 (NvmeAdapterDeleteNvmeController.c)
 *     NvmeAdapterPowerUninitialize @ 0x140124B00 (NvmeAdapterPowerUninitialize.c)
 *     RaidDeleteResourceList @ 0x140183F14 (RaidDeleteResourceList.c)
 *     RaDeleteBus @ 0x140183F6C (RaDeleteBus.c)
 *     RaidDeleteDma @ 0x140187BE0 (RaidDeleteDma.c)
 *     StorFreeContiguousMemory @ 0x140188BF4 (StorFreeContiguousMemory.c)
 *     PortFreeDriverParameters @ 0x1401B0EA4 (PortFreeDriverParameters.c)
 *     RaDeleteMiniport @ 0x1401B9810 (RaDeleteMiniport.c)
 */

void __fastcall DeleteNvmeAdapter(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  struct _IO_WORKITEM *v5; // rcx
  unsigned __int64 v6; // rdx
  void *v7; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rax
  void *v13; // rcx
  _QWORD *v14; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 608) )
  {
    NvmeAdapterFreeHostGateways();
    ExDeleteResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 608) + 24LL));
    ExFreePoolWithTag(*(PVOID *)(a1 + 608), 0x464E6152u);
    *(_QWORD *)(a1 + 608) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(*(_QWORD *)(a1 + 160) + 336LL));
  NvmeAdapterPowerUninitialize(a1);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 && *(_QWORD *)(a1 + 1152) )
  {
    NvmeAdapterDeleteNvmeController(a1 + 1152);
  }
  else if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
  {
    if ( *(_BYTE *)(a1 + 1296) )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1192), 1u);
      v2 = (_QWORD **)(a1 + 1304);
      while ( 1 )
      {
        v3 = *v2;
        if ( *v2 == v2 )
          break;
        if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
          __fastfail(3u);
        *v2 = v4;
        v4[1] = v2;
        --*(_DWORD *)(a1 + 1320);
        v14 = v3 - 14;
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v3[55]);
        NvmeAdapterDeleteNvmeController(&v14);
      }
      ExReleaseResourceLite((PERESOURCE)(a1 + 1192));
      KeLeaveCriticalRegion();
      ExDeleteResourceLite((PERESOURCE)(a1 + 1192));
      *(_BYTE *)(a1 + 1296) = 0;
    }
    v5 = *(struct _IO_WORKITEM **)(a1 + 1328);
    if ( v5 )
    {
      IoFreeWorkItem(v5);
      *(_QWORD *)(a1 + 1328) = 0LL;
    }
  }
  PortFreeRegistryBuffer(a1 + 920);
  *(_DWORD *)(a1 + 976) = 0;
  v6 = (unsigned __int64)*(unsigned int *)(a1 + 144) >> 12;
  LOBYTE(v6) = (*(_DWORD *)(a1 + 144) & 0x1000LL) == 0;
  RaDeleteMiniport(a1 + 168, v6);
  if ( *(_DWORD *)(a1 + 1352) )
    StorFreeContiguousMemory(a1 + 1160);
  RaidDeleteDeferredQueue((union _SLIST_HEADER *)(a1 + 624));
  RaidDeleteDeferredQueue((union _SLIST_HEADER *)(a1 + 752));
  if ( *(_QWORD *)(a1 + 912) )
  {
    PortFreeDriverParameters();
    *(_QWORD *)(a1 + 912) = 0LL;
  }
  v7 = *(void **)(a1 + 1016);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x52446152u);
    *(_QWORD *)(a1 + 1016) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
    RaidDeleteDma(a1 + 1160);
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 880));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 896));
  RaDriverDeleteDevice((_QWORD *)a1);
  v8 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 152);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v8 )
  {
    ExFreeCacheAwareRundownProtection(v8);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v9 = *(void **)(a1 + 1040);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x54456152u);
    *(_QWORD *)(a1 + 1040) = 0LL;
  }
  v10 = *(void **)(a1 + 48);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x53446152u);
  v11 = *(void **)(a1 + 592);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x564E6152u);
    *(_QWORD *)(a1 + 592) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 600);
  if ( v12 )
  {
    v13 = *(void **)(v12 + 128);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0x72446152u);
      *(_QWORD *)(*(_QWORD *)(a1 + 600) + 128LL) = 0LL;
    }
    RaidDeleteResourceList(*(_QWORD *)(a1 + 600) + 88LL);
    RaDeleteBus(*(_QWORD *)(a1 + 600) + 16LL);
    ExFreePoolWithTag(*(PVOID *)(a1 + 600), 0x564E6152u);
    *(_QWORD *)(a1 + 600) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
