/*
 * XREFs of NvmeControllerDeleteNvmeNamespace @ 0x140100A2C
 * Callers:
 *     NvmeAdapterDeleteChildren @ 0x1400D4920 (NvmeAdapterDeleteChildren.c)
 *     NvmeAdapterFabricControllerUpdateNamespace @ 0x1400E8524 (NvmeAdapterFabricControllerUpdateNamespace.c)
 *     NvmeAdapterStartFabricControllerNamespaces @ 0x1400EDDD0 (NvmeAdapterStartFabricControllerNamespaces.c)
 *     NvmeNamespaceDeleteDeviceIrp @ 0x140102E64 (NvmeNamespaceDeleteDeviceIrp.c)
 * Callees:
 *     NvmeControllerFreeExtendedCommand @ 0x1400589E4 (NvmeControllerFreeExtendedCommand.c)
 *     NvmeNamespaceDeleteErrorRecoveryContext @ 0x140103244 (NvmeNamespaceDeleteErrorRecoveryContext.c)
 *     NvmeNamespaceDeleteIoQueue @ 0x1401032AC (NvmeNamespaceDeleteIoQueue.c)
 *     NvmeNamespaceTelemetryDelete @ 0x140115150 (NvmeNamespaceTelemetryDelete.c)
 *     NvmeNamespaceTerminateSystemThread @ 0x140115E34 (NvmeNamespaceTerminateSystemThread.c)
 *     NvmeNamespacePowerUninitialize @ 0x1401289C0 (NvmeNamespacePowerUninitialize.c)
 */

void __fastcall NvmeControllerDeleteNvmeNamespace(_QWORD *a1)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  struct _IO_WORKITEM *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v7; // rcx

  NvmeNamespaceTerminateSystemThread(*a1);
  NvmeNamespaceDeleteIoQueue(*a1);
  NvmeNamespaceDeleteErrorRecoveryContext(*a1);
  NvmeNamespaceTelemetryDelete(*a1);
  v2 = *(void **)(*(_QWORD *)(*a1 + 128LL) + 16LL);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57506152u);
    *(_QWORD *)(*(_QWORD *)(*a1 + 128LL) + 16LL) = 0LL;
  }
  NvmeNamespacePowerUninitialize(*a1);
  v3 = *(_QWORD **)(*a1 + 528LL);
  if ( v3 )
  {
    NvmeControllerFreeExtendedCommand(*(_QWORD *)(*a1 + 16LL), v3);
    *(_QWORD *)(*a1 + 528LL) = 0LL;
  }
  v4 = *(struct _IO_WORKITEM **)(*a1 + 536LL);
  if ( v4 )
  {
    IoFreeWorkItem(v4);
    *(_QWORD *)(*a1 + 536LL) = 0LL;
  }
  v5 = *(void **)(*a1 + 184LL);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x52436152u);
    *(_QWORD *)(*a1 + 184LL) = 0LL;
  }
  v6 = *(void **)(*a1 + 176LL);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x52436152u);
    *(_QWORD *)(*a1 + 176LL) = 0LL;
  }
  v7 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*a1 + 120LL);
  if ( v7 )
  {
    ExFreeCacheAwareRundownProtection(v7);
    *(_QWORD *)(*a1 + 120LL) = 0LL;
  }
  IoDeleteDevice(*(PDEVICE_OBJECT *)(*a1 + 8LL));
  *a1 = 0LL;
}
