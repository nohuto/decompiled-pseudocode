/*
 * XREFs of NvmeAdapterDeleteNvmeController @ 0x1400E74A8
 * Callers:
 *     DeleteNvmeAdapter @ 0x1400D1764 (DeleteNvmeAdapter.c)
 *     NvmeAdapterConnectControllerInternal @ 0x1400D3D60 (NvmeAdapterConnectControllerInternal.c)
 *     NvmeAdapterCreateAddNvmeController @ 0x1400D40F4 (NvmeAdapterCreateAddNvmeController.c)
 *     NvmeAdapterDisconnectControllerInternal @ 0x1400D4F2C (NvmeAdapterDisconnectControllerInternal.c)
 *     NvmeAdapterStorMQAddController @ 0x1400DF1F4 (NvmeAdapterStorMQAddController.c)
 *     NvmeAdapterStorMQControllerRemoveWorker @ 0x1400DF4C0 (NvmeAdapterStorMQControllerRemoveWorker.c)
 *     NvmeAdapterRemoveController @ 0x14019DFFC (NvmeAdapterRemoveController.c)
 * Callees:
 *     StorDeleteDictionary @ 0x14005CA34 (StorDeleteDictionary.c)
 *     NvmeControllerDeleteReenumerationContext @ 0x1400C5BB4 (NvmeControllerDeleteReenumerationContext.c)
 *     NvmeAdapterFreeControllerAdminQueue @ 0x1400E8D20 (NvmeAdapterFreeControllerAdminQueue.c)
 *     NvmeAdapterSendControlRemoveNvmeController @ 0x1400ED1FC (NvmeAdapterSendControlRemoveNvmeController.c)
 *     NvmeControllerDeleteCommandQueue @ 0x1400F2814 (NvmeControllerDeleteCommandQueue.c)
 *     NvmeControllerDeleteErrorRecoveryContext @ 0x1400F291C (NvmeControllerDeleteErrorRecoveryContext.c)
 *     NvmeControllerReleaseInternalDbgLog @ 0x1400F9A44 (NvmeControllerReleaseInternalDbgLog.c)
 *     DeleteNVMePrpListBufferPool @ 0x140119960 (DeleteNVMePrpListBufferPool.c)
 *     DeleteNVMeScatterGatherListBufferPool @ 0x140119A8C (DeleteNVMeScatterGatherListBufferPool.c)
 *     DeleteNVMeSplitIoContextPool @ 0x140119B78 (DeleteNVMeSplitIoContextPool.c)
 *     NvmeControllerDeleteExtendedCommandPool @ 0x14011FC7C (NvmeControllerDeleteExtendedCommandPool.c)
 *     StorFreeContiguousMemory @ 0x140188BF4 (StorFreeContiguousMemory.c)
 */

void __fastcall NvmeAdapterDeleteNvmeController(__int64 *a1)
{
  __int64 v2; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  int v5; // eax
  void *v6; // rcx
  struct _IO_WORKITEM *v7; // rcx
  struct _IO_WORKITEM *v8; // rcx
  struct _IO_WORKITEM *v9; // rcx
  struct _IO_WORKITEM *v10; // rcx
  struct _IO_WORKITEM *v11; // rcx
  struct _IO_WORKITEM *v12; // rcx
  struct _IO_WORKITEM *v13; // rcx
  struct _IO_WORKITEM *v14; // rcx
  struct _IO_WORKITEM *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx

  v2 = *(_QWORD *)(*a1 + 128);
  NvmeControllerDeleteErrorRecoveryContext();
  v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*a1 + 552);
  if ( v3 )
    ExWaitForRundownProtectionReleaseCacheAware(v3);
  if ( *(_QWORD *)(*a1 + 560) )
    NvmeAdapterSendControlRemoveNvmeController();
  v4 = (struct _ERESOURCE *)*a1;
  v5 = *(_DWORD *)(*a1 + 572);
  if ( v5 == 1 )
  {
    StorDeleteDictionary((__int64)&v4[6].ExclusiveWaiters);
  }
  else if ( v5 == 2 )
  {
    ExDeleteResourceLite(v4 + 14);
  }
  NvmeControllerDeleteExtendedCommandPool(*a1);
  NvmeAdapterFreeControllerAdminQueue(*a1);
  v6 = *(void **)(*a1 + 104);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x52436152u);
    *(_QWORD *)(*a1 + 104) = 0LL;
  }
  v7 = *(struct _IO_WORKITEM **)(*a1 + 168);
  if ( v7 )
  {
    IoFreeWorkItem(v7);
    *(_QWORD *)(*a1 + 168) = 0LL;
  }
  v8 = *(struct _IO_WORKITEM **)(*a1 + 160);
  if ( v8 )
  {
    IoFreeWorkItem(v8);
    *(_QWORD *)(*a1 + 160) = 0LL;
  }
  v9 = *(struct _IO_WORKITEM **)(*a1 + 152);
  if ( v9 )
  {
    IoFreeWorkItem(v9);
    *(_QWORD *)(*a1 + 152) = 0LL;
  }
  v10 = *(struct _IO_WORKITEM **)(*a1 + 176);
  if ( v10 )
  {
    IoFreeWorkItem(v10);
    *(_QWORD *)(*a1 + 176) = 0LL;
  }
  v11 = *(struct _IO_WORKITEM **)(*a1 + 144);
  if ( v11 )
  {
    IoFreeWorkItem(v11);
    *(_QWORD *)(*a1 + 144) = 0LL;
  }
  v12 = *(struct _IO_WORKITEM **)(*a1 + 1032);
  if ( v12 )
  {
    IoFreeWorkItem(v12);
    *(_QWORD *)(*a1 + 1032) = 0LL;
  }
  v13 = *(struct _IO_WORKITEM **)(*a1 + 1328);
  if ( v13 )
  {
    IoFreeWorkItem(v13);
    *(_QWORD *)(*a1 + 1328) = 0LL;
  }
  v14 = *(struct _IO_WORKITEM **)(*a1 + 1424);
  if ( v14 )
  {
    IoFreeWorkItem(v14);
    *(_QWORD *)(*a1 + 1424) = 0LL;
  }
  v15 = *(struct _IO_WORKITEM **)(*a1 + 1040);
  if ( v15 )
  {
    IoFreeWorkItem(v15);
    *(_QWORD *)(*a1 + 1040) = 0LL;
  }
  v16 = *(void **)(*a1 + 1736);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x52436152u);
    *(_QWORD *)(*a1 + 1736) = 0LL;
  }
  NvmeControllerDeleteCommandQueue(*a1);
  DeleteNVMeSplitIoContextPool(*a1);
  DeleteNVMePrpListBufferPool(*a1);
  DeleteNVMeScatterGatherListBufferPool(*a1);
  NvmeControllerDeleteReenumerationContext(*a1);
  v17 = *(void **)(*a1 + 872);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x52436152u);
    *(_QWORD *)(*a1 + 872) = 0LL;
  }
  v18 = *(void **)(*a1 + 1048);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x52436152u);
    *(_QWORD *)(*a1 + 1048) = 0LL;
  }
  ExFreeCacheAwareRundownProtection(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*a1 + 552));
  NvmeControllerReleaseInternalDbgLog(*a1);
  if ( (*(_BYTE *)(*a1 + 136) & 2) == 0 )
  {
    v19 = *(void **)(*a1 + 792);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0x52436152u);
      *(_QWORD *)(*a1 + 792) = 0LL;
    }
    v20 = *(void **)(*a1 + 752);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0x52436152u);
      *(_QWORD *)(*a1 + 752) = 0LL;
    }
  }
  v21 = *(void **)(*a1 + 1648);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0x52436152u);
    *(_QWORD *)(*a1 + 1648) = 0LL;
  }
  if ( v2 && *(_DWORD *)(*a1 + 1640) )
  {
    StorFreeContiguousMemory(v2 + 1160);
    *(_QWORD *)(*a1 + 1112) = 0LL;
    *(_QWORD *)(*a1 + 1120) = 0LL;
  }
  v22 = *(void **)(*a1 + 1264);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0x52436152u);
    *(_QWORD *)(*a1 + 1264) = 0LL;
  }
  v23 = *(void **)(*a1 + 1272);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0x52436152u);
    *(_QWORD *)(*a1 + 1272) = 0LL;
  }
  ExFreePoolWithTag((PVOID)*a1, 0x52436152u);
  *a1 = 0LL;
}
