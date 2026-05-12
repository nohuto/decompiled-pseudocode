/*
 * XREFs of NvmeControllerCreateNvmeNamespace @ 0x140100594
 * Callers:
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceIdentify @ 0x1400C6954 (NvmeNamespaceIdentify.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E8524 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400EDDD0 (NvmeAdapterStartFabricControllerNamespaces.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerAllocateExtendedCommand @ 0x140058910 (NvmeControllerAllocateExtendedCommand.c)
 *     NvmeControllerFreeExtendedCommand @ 0x1400589E4 (NvmeControllerFreeExtendedCommand.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400B2058 (StorEtwNvmeNamespaceEvent.c)
 *     NvmeAdapterGetControllerIdentifyData @ 0x1400E8FAC (NvmeAdapterGetControllerIdentifyData.c)
 *     NvmeNamespaceIsInactive @ 0x1400FFB00 (NvmeNamespaceIsInactive.c)
 *     NvmeNamespaceComputeBlockInfo @ 0x140102788 (NvmeNamespaceComputeBlockInfo.c)
 *     NvmeNamespaceCreateErrorRecoveryContext @ 0x140102920 (NvmeNamespaceCreateErrorRecoveryContext.c)
 *     NvmeNamespaceCreateIoQueue @ 0x1401029C8 (NvmeNamespaceCreateIoQueue.c)
 *     NvmeNamespaceDeleteErrorRecoveryContext @ 0x140103244 (NvmeNamespaceDeleteErrorRecoveryContext.c)
 *     NvmeNamespaceDeleteIoQueue @ 0x1401032AC (NvmeNamespaceDeleteIoQueue.c)
 *     NvmeNamespaceTelemetryDelete @ 0x140115150 (NvmeNamespaceTelemetryDelete.c)
 *     NvmeNamespaceTerminateSystemThread @ 0x140115E34 (NvmeNamespaceTerminateSystemThread.c)
 *     NvmeNamespacePowerInitialize @ 0x140128254 (NvmeNamespacePowerInitialize.c)
 *     NvmeNamespacePowerUninitialize @ 0x1401289C0 (NvmeNamespacePowerUninitialize.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeControllerCreateNvmeNamespace(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  int IoQueue; // edi
  _DWORD *DeviceExtension; // rbx
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  struct _IO_WORKITEM *v11; // rcx
  _QWORD *v12; // rdx
  void *v13; // rcx
  void *v14; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v15; // rcx
  PDEVICE_OBJECT v17; // rax
  unsigned __int8 v18; // al
  int v19; // edx
  const wchar_t *v20; // r9
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int64 Pool; // rax
  _QWORD *ExtendedCommand; // rax
  _QWORD *v25; // rdx
  __int16 v26; // ax
  PIO_WORKITEM WorkItem; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  DeviceObject = 0LL;
  IoQueue = IoCreateDevice(*(PDRIVER_OBJECT *)(*(_QWORD *)(v4 + 8) + 8LL), 0x2C0u, 0LL, 0x2Du, 0x180u, 0, &DeviceObject);
  if ( IoQueue >= 0 )
  {
    DeviceExtension = DeviceObject->DeviceExtension;
    memset_0(DeviceExtension, 0, 0x2C0uLL);
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *((_QWORD *)DeviceExtension + 15) = CacheAwareRundownProtection;
    if ( !CacheAwareRundownProtection )
    {
      IoQueue = -1073741801;
      goto LABEL_4;
    }
    *((_QWORD *)DeviceExtension + 4) = DeviceExtension + 6;
    *((_QWORD *)DeviceExtension + 3) = DeviceExtension + 6;
    *DeviceExtension = 1314278989;
    v17 = DeviceObject;
    *((_QWORD *)DeviceExtension + 14) |= 2uLL;
    *((_QWORD *)DeviceExtension + 1) = v17;
    *((_QWORD *)DeviceExtension + 2) = a1;
    DeviceExtension[14] = a2;
    *((_BYTE *)DeviceExtension + 60) = 0;
    DeviceExtension[24] = 2;
    *((_BYTE *)DeviceExtension + 100) = *(_BYTE *)(a1 + 616);
    *((_BYTE *)DeviceExtension + 101) = *(_BYTE *)(a1 + 617);
    *((_BYTE *)DeviceExtension + 102) = a2;
    *((_WORD *)DeviceExtension + 208) = *(_WORD *)(*(_QWORD *)(a1 + 128) + 1108LL);
    KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 13);
    IoQueue = NvmeNamespaceCreateIoQueue(DeviceExtension);
    if ( IoQueue >= 0 )
    {
      _interlockedbittestandset(*((volatile signed __int32 **)DeviceExtension + 32), 2u);
      KeInitializeEvent((PRKEVENT)(DeviceExtension + 118), SynchronizationEvent, 0);
      if ( (*(_BYTE *)(*((_QWORD *)DeviceExtension + 2) + 136LL) & 2) != 0 )
      {
        v18 = *((_BYTE *)DeviceExtension + 60);
        v19 = DeviceExtension[14];
        *((_QWORD *)DeviceExtension + 14) |= 4uLL;
        IoQueue = NvmeAdapterGetControllerIdentifyData(a1, v19, 0, 0, v18, (_QWORD *)DeviceExtension + 22);
        if ( IoQueue < 0 )
        {
          v20 = L"Identify namespace failed";
LABEL_22:
          StorEtwNvmeNamespaceEvent(
            (__int64)DeviceExtension,
            1,
            2,
            (__int64)v20,
            L"NtStatus",
            IoQueue,
            (void *)&word_140152E7C,
            0);
          goto LABEL_4;
        }
        IoQueue = NvmeAdapterGetControllerIdentifyData(a1, DeviceExtension[14], 3, 0, 0, (_QWORD *)DeviceExtension + 23);
        if ( IoQueue < 0 )
        {
          v20 = L"Identify namespace descriptor failed";
          goto LABEL_22;
        }
        if ( NvmeNamespaceIsInactive(*((_QWORD *)DeviceExtension + 22)) )
        {
          StorEtwNvmeNamespaceEvent(
            (__int64)DeviceExtension,
            1,
            3,
            (__int64)L"Inactive namespace",
            L"NSZE",
            *(_QWORD *)v21,
            L"LBADS",
            *(_BYTE *)(v21 + 4LL * (*(_BYTE *)(v21 + 26) & 0xF) + 130));
          IoQueue = -1073741637;
          goto LABEL_4;
        }
        if ( *(_QWORD *)(a1 + 624) )
        {
          v22 = *(_WORD *)(v21 + 100);
          if ( v22 <= *(_WORD *)(a1 + 618) )
            *((_WORD *)DeviceExtension + 31) = v22;
        }
        if ( !*((_BYTE *)DeviceExtension + 60) )
          NvmeNamespaceComputeBlockInfo(DeviceExtension);
      }
      Pool = RaidAllocatePool(72LL, 2320LL, 1700028754LL, *((_QWORD *)DeviceExtension + 1));
      *((_QWORD *)DeviceExtension + 76) = Pool;
      if ( !Pool )
        goto LABEL_37;
      IoQueue = NvmeNamespacePowerInitialize(DeviceExtension);
      if ( IoQueue >= 0 )
      {
        IoQueue = NvmeNamespaceCreateErrorRecoveryContext(DeviceExtension);
        if ( IoQueue >= 0 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)DeviceExtension + 2) + 136LL) & 2) != 0 )
            goto LABEL_41;
          KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 68);
          *((_QWORD *)DeviceExtension + 71) = DeviceExtension + 140;
          *((_QWORD *)DeviceExtension + 70) = DeviceExtension + 140;
          *((_QWORD *)DeviceExtension + 74) = DeviceExtension + 146;
          *((_QWORD *)DeviceExtension + 73) = DeviceExtension + 146;
          ExtendedCommand = NvmeControllerAllocateExtendedCommand(*((_QWORD *)DeviceExtension + 2));
          *((_QWORD *)DeviceExtension + 66) = ExtendedCommand;
          v25 = ExtendedCommand;
          if ( ExtendedCommand )
          {
            v26 = 10;
            if ( (unsigned int)(3 * *(_DWORD *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 2) + 128LL) + 1108LL)) > 0xA )
              v26 = 3 * *(_WORD *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 2) + 128LL) + 1108LL);
            *((_WORD *)v25 + 26) = v26;
            WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)DeviceExtension + 1));
            *((_QWORD *)DeviceExtension + 67) = WorkItem;
            if ( WorkItem )
            {
LABEL_41:
              *a4 = DeviceExtension;
              return (unsigned int)IoQueue;
            }
          }
LABEL_37:
          IoQueue = -1073741670;
        }
      }
    }
LABEL_4:
    if ( DeviceExtension )
    {
      v11 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 67);
      if ( v11 )
      {
        IoFreeWorkItem(v11);
        *((_QWORD *)DeviceExtension + 67) = 0LL;
      }
      v12 = (_QWORD *)*((_QWORD *)DeviceExtension + 66);
      if ( v12 )
      {
        NvmeControllerFreeExtendedCommand(*((_QWORD *)DeviceExtension + 2), v12);
        *((_QWORD *)DeviceExtension + 66) = 0LL;
      }
      NvmeNamespaceDeleteErrorRecoveryContext(DeviceExtension);
      NvmeNamespacePowerUninitialize(DeviceExtension);
      NvmeNamespaceTelemetryDelete(DeviceExtension);
      v13 = (void *)*((_QWORD *)DeviceExtension + 23);
      if ( v13 )
      {
        ExFreePoolWithTag(v13, 0x52436152u);
        *((_QWORD *)DeviceExtension + 23) = 0LL;
      }
      v14 = (void *)*((_QWORD *)DeviceExtension + 22);
      if ( v14 )
      {
        ExFreePoolWithTag(v14, 0x52436152u);
        *((_QWORD *)DeviceExtension + 22) = 0LL;
      }
      NvmeNamespaceTerminateSystemThread(DeviceExtension);
      NvmeNamespaceDeleteIoQueue(DeviceExtension);
      v15 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)DeviceExtension + 15);
      if ( v15 )
      {
        ExFreeCacheAwareRundownProtection(v15);
        *((_QWORD *)DeviceExtension + 15) = 0LL;
      }
    }
  }
  if ( DeviceObject )
    IoDeleteDevice(DeviceObject);
  return (unsigned int)IoQueue;
}
