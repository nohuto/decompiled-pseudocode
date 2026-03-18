/*
 * XREFs of PiSwIrpInterfaceSetState @ 0x140AF9430
 * Callers:
 *     PiSwDispatch @ 0x140A7B430 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x14049E7E8 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x140525230 (McTemplateK0zz_EtwWriteTransfer.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14090C070 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwLock @ 0x14090DC3C (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x14090E1D4 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceInterfaceSetState @ 0x140AF9604 (PiSwDeviceInterfaceSetState.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceSetState(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 *InterfaceEntry; // rax
  PVOID v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v16 = FsContext2;
  v15 = 0LL;
  P = 0LL;
  if ( (byte_140EF3DCC & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetInterfaceState_Start,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_20;
  v7 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v15);
  if ( v7 < 0 )
    goto LABEL_11;
  NdrMesTypeDecode3(v15, "TP 3\a", &off_140BD9050, &off_140E06F00, 3, &P);
  if ( P && *(_QWORD *)P )
  {
    PiSwLock();
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(v8, *(const wchar_t **)P);
      if ( InterfaceEntry )
      {
        v10 = P;
        LOBYTE(v10) = *((_BYTE *)P + 8);
        v7 = PiSwDeviceInterfaceSetState(FsContext2, InterfaceEntry, v10);
      }
      else
      {
        v7 = -1073741275;
      }
    }
    else
    {
      v7 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
  }
  else
  {
LABEL_20:
    v7 = -1073741811;
  }
LABEL_11:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v15 )
    MesHandleFree();
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EF3DCC & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v11,
      (__int64)KMPnPEvt_SwDevice_SetInterfaceState_Stop,
      v12,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      v7);
  return (unsigned int)v7;
}
