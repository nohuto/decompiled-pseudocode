/*
 * XREFs of PiSwIrpGetAttributes @ 0x1407B02D0
 * Callers:
 *     PiSwDispatch @ 0x140A7B430 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     PiSwLock @ 0x14090DC3C (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x14090E1D4 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpGetAttributes(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v2; // ebx
  struct _IRP *MasterIrp; // r14
  _DWORD *FsContext2; // rsi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  if ( CurrentStackLocation->Parameters.Read.Length >= 4 )
  {
    PiSwLock();
    if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
    {
      *(_DWORD *)&MasterIrp->Type = FsContext2[51];
      Irp->IoStatus.Information = 4LL;
    }
    else
    {
      v2 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
  }
  else
  {
    v2 = -1073741811;
  }
  Irp->IoStatus.Status = v2;
  IofCompleteRequest(Irp, 0);
  return v2;
}
