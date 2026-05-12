/*
 * XREFs of RaForwardIrp @ 0x140037074
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14001D0E0 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterPnpIrp @ 0x1400355D8 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1400364C4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x14004A5A0 (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterQueryIdIrp @ 0x140064BB4 (NvmeAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x140064C48 (RaidAdapterQueryInterfaceIrp.c)
 *     RaForwardPowerIrp @ 0x140091D40 (RaForwardPowerIrp.c)
 *     NvmeAdapterPnpIrp @ 0x1400DA0D8 (NvmeAdapterPnpIrp.c)
 *     NvmeAdapterQueryDeviceRelationsIrp @ 0x1400DB2B8 (NvmeAdapterQueryDeviceRelationsIrp.c)
 *     NvmeAdapterQueryInterfaceIrp @ 0x1400DB824 (NvmeAdapterQueryInterfaceIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x140183FA8 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x140185B00 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x140185BA4 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1401862D0 (RaidAdapterStopDeviceIrp.c)
 *     NvmeAdapterCancelRemoveDeviceIrp @ 0x140197DD0 (NvmeAdapterCancelRemoveDeviceIrp.c)
 *     NvmeAdapterQueryPnpDeviceStateIrp @ 0x14019DC98 (NvmeAdapterQueryPnpDeviceStateIrp.c)
 *     NvmeAdapterQueryRemoveDeviceIrp @ 0x14019DD40 (NvmeAdapterQueryRemoveDeviceIrp.c)
 *     NvmeAdapterQueryStopDeviceIrp @ 0x14019DDE4 (NvmeAdapterQueryStopDeviceIrp.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019F188 (NvmeAdapterStopDeviceIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x1401A0664 (NvmeAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401B8714 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1401B998C (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     NvmeAdapterDeviceControlIrp @ 0x1401BE838 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaForwardIrp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return IofCallDriver(a1, a2);
}
