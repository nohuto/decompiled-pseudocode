/*
 * XREFs of WmipSendWmiIrp @ 0x140A0D8E4
 * Callers:
 *     WmipSendEnableDisableRequest @ 0x140A0A3D0 (WmipSendEnableDisableRequest.c)
 *     WmipRegisterOrUpdateDS @ 0x140A0A9A4 (WmipRegisterOrUpdateDS.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0B87C (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0CDA0 (WmipEnableCollectionForNewGuid.c)
 *     WmipQuerySetExecuteSI @ 0x140A0D9D4 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x140A0DCD8 (WmipQueryAllData.c)
 *     WmipProcessLegacyEtwCallback @ 0x140B24F78 (WmipProcessLegacyEtwCallback.c)
 *     WmipDeliverWnodeToDS @ 0x140B36718 (WmipDeliverWnodeToDS.c)
 * Callees:
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     WmipForwardWmiIrp @ 0x140A0E218 (WmipForwardWmiIrp.c)
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
