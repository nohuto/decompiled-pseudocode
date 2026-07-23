/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x1409AE6BC
 * Callers:
 *     PiSwDispatch @ 0x140A8C570 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140498338 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405278A0 (McTemplateK0zz_EtwWriteTransfer.c)
 *     PiSwUpdateArrayProperties @ 0x1409ADFF8 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1409AE194 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x1409B0304 (PiSwDeviceOperationsAllowed.c)
 *     PiSwPropertySet @ 0x140A17FD4 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x140A195A0 (PiSwValidatePropertyArray.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfacePropertySet(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  const wchar_t **FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 *InterfaceEntry; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  const wchar_t **v15; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  v15 = FsContext2;
  v14 = 0LL;
  P = 0LL;
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetInterfaceProperty_Start,
      a3,
      FsContext2[1],
      FsContext2[2]);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_23;
  v7 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v14);
  if ( v7 < 0 )
    goto LABEL_15;
  NdrMesTypeDecode3(v14, "TP 3\a", &off_140BDFEE0, &off_140E06F00, 4, &P);
  if ( P && *(_QWORD *)P && *((_QWORD *)P + 2) && *((_DWORD *)P + 2) )
  {
    v7 = PiSwValidatePropertyArray(*((_QWORD *)P + 2));
    if ( v7 >= 0 )
    {
      PiSwLock();
      if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
      {
        InterfaceEntry = PiSwDeviceFindInterfaceEntry(v8, *(const wchar_t **)P);
        v7 = InterfaceEntry
           ? PiSwUpdateArrayProperties(
               InterfaceEntry[3],
               *((_DWORD *)InterfaceEntry + 8),
               *((_QWORD *)P + 2),
               *((_DWORD *)P + 2))
           : -1073741275;
      }
      else
      {
        v7 = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      if ( v7 >= 0 )
        v7 = PiSwPropertySet(*(_QWORD *)P, 3LL, *((_QWORD *)P + 2), *((unsigned int *)P + 2));
    }
  }
  else
  {
LABEL_23:
    v7 = -1073741811;
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v14 )
    MesHandleFree();
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v10,
      (__int64)KMPnPEvt_SwDevice_SetInterfaceProperty_Stop,
      v11,
      FsContext2[1],
      FsContext2[2],
      v7);
  return (unsigned int)v7;
}
