/*
 * XREFs of RaUnitStorageDumpNotification @ 0x14018C258
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14001D890 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitStorageDumpNotification(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebx
  _IRP *MasterIrp; // rax

  if ( a2->RequestorMode )
  {
    v2 = -1073741808;
  }
  else if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp && *(_DWORD *)&MasterIrp->Type == 1 && *(_DWORD *)(&MasterIrp->Size + 1) == 16 )
    {
      v2 = 0;
      *(_QWORD *)(a1 + 3528) = MasterIrp->MdlAddress;
    }
    else
    {
      v2 = -1073741811;
    }
  }
  else
  {
    v2 = -1073741789;
  }
  a2->IoStatus.Status = v2;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return v2;
}
