/*
 * XREFs of NvmeAdapterReleaseResources @ 0x14019DE88
 * Callers:
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019E4E8 (NvmeAdapterRemoveDeviceIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x1401A0664 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     StorFreeEventNotificationResources @ 0x14005C204 (StorFreeEventNotificationResources.c)
 *     StorpShutdownRegistryWatch @ 0x1400774A0 (StorpShutdownRegistryWatch.c)
 *     NvmeAdapterDeleteAsyncCallbacks @ 0x1400D47B0 (NvmeAdapterDeleteAsyncCallbacks.c)
 *     NvmeAdapterStop @ 0x1400DEC40 (NvmeAdapterStop.c)
 *     NvmePnPPassToMiniPort @ 0x1400E2018 (NvmePnPPassToMiniPort.c)
 *     NvmePnPPassToStorMQMiniPort @ 0x1400E2330 (NvmePnPPassToStorMQMiniPort.c)
 *     NvmeAdapterDeregisterFromPoFx @ 0x140123148 (NvmeAdapterDeregisterFromPoFx.c)
 */

void __fastcall NvmeAdapterReleaseResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( *(_QWORD *)(a1 + 168)
    && (*(_BYTE *)(a1 + 144) & 0x40) != 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 416);
    v7 = *(_QWORD *)(a1 + 8);
    if ( (v6 & 0x40) != 0 )
      NvmePnPPassToStorMQMiniPort(v7, v5, a3);
    else
      NvmePnPPassToMiniPort(v7, v5, a3);
  }
  NvmeAdapterDeregisterFromPoFx(a1);
  v8 = *(void **)(*(_QWORD *)(a1 + 160) + 32LL);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x57506152u);
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL) = 0LL;
  }
  NvmeAdapterDeleteAsyncCallbacks(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  NvmeAdapterStop(a1, 3);
  do
  {
    if ( !*(_DWORD *)(a1 + 1096) && !*(_DWORD *)(a1 + 1100) )
      break;
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    ++v3;
  }
  while ( v3 < 0x258 );
  v9 = *(_QWORD *)(a1 + 1008);
  if ( v9 )
  {
    StorpShutdownRegistryWatch(v9);
    ExFreePoolWithTag(**(PVOID **)(a1 + 1008), 0x57526152u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1008), 0x57526152u);
    *(_QWORD *)(a1 + 1008) = 0LL;
  }
  StorFreeEventNotificationResources(*(char **)(a1 + 1432));
  *(_QWORD *)(a1 + 1432) = 0LL;
}
