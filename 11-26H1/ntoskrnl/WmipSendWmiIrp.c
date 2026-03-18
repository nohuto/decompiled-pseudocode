/*
 * XREFs of WmipSendWmiIrp @ 0x140A0E708
 * Callers:
 *     WmipSendEnableDisableRequest @ 0x140A0B168 (WmipSendEnableDisableRequest.c)
 *     WmipRegisterOrUpdateDS @ 0x140A0B774 (WmipRegisterOrUpdateDS.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140A0C854 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0D350 (WmipEnableCollectionForNewGuid.c)
 *     WmipQuerySetExecuteSI @ 0x140A0E7F8 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x140A0EAFC (WmipQueryAllData.c)
 *     WmipProcessLegacyEtwCallback @ 0x140B22B78 (WmipProcessLegacyEtwCallback.c)
 *     WmipDeliverWnodeToDS @ 0x140B342C8 (WmipDeliverWnodeToDS.c)
 * Callees:
 *     IoFreeIrp @ 0x140268860 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x14026C4D0 (IoAllocateIrp.c)
 *     WmipForwardWmiIrp @ 0x140A0F03C (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrp(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v8; // rbx
  unsigned int v9; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)&EtwpSecurityLock.ForegroundLossTime + 76LL) + 1, 0);
    v8 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = *(PDEVICE_OBJECT *)&EtwpSecurityLock.ForegroundLossTime;
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
