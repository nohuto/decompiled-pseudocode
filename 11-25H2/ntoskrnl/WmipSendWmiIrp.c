/*
 * XREFs of WmipSendWmiIrp @ 0x1409B5630
 * Callers:
 *     WmipEnableCollectionForNewGuid @ 0x1409B364C (WmipEnableCollectionForNewGuid.c)
 *     WmipQuerySetExecuteSI @ 0x1409B5720 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409B5A18 (WmipQueryAllData.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1409B7738 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipRegisterOrUpdateDS @ 0x1409B837C (WmipRegisterOrUpdateDS.c)
 *     WmipSendEnableDisableRequest @ 0x1409B8F6C (WmipSendEnableDisableRequest.c)
 *     WmipProcessLegacyEtwCallback @ 0x140A89598 (WmipProcessLegacyEtwCallback.c)
 *     WmipDeliverWnodeToDS @ 0x140A92138 (WmipDeliverWnodeToDS.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x14035B6A0 (IoAllocateIrp.c)
 *     WmipForwardWmiIrp @ 0x1409B5F64 (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v8; // rbx
  unsigned int v9; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(WmipServiceDeviceObject->StackSize + 1, 0);
    v8 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v9 = WmipForwardWmiIrp(Irp, a4, a5);
    *a6 = *(_OWORD *)&v8->IoStatus.Status;
    IoFreeIrp(v8);
    if ( v9 != -1073741160 )
      return v9;
  }
  return 3221225626LL;
}
