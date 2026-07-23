/*
 * XREFs of PiSwIrpPropertySet @ 0x140B071FC
 * Callers:
 *     PiSwDispatch @ 0x140A8C570 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140498338 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405278A0 (McTemplateK0zz_EtwWriteTransfer.c)
 *     PnpAllocatePWSTR @ 0x140951520 (PnpAllocatePWSTR.c)
 *     PiSwUpdateArrayProperties @ 0x1409ADFF8 (PiSwUpdateArrayProperties.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x1409B0304 (PiSwDeviceOperationsAllowed.c)
 *     PiSwPropertySet @ 0x140A17FD4 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x140A195A0 (PiSwValidatePropertyArray.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 FsContext2; // rdi
  struct _IRP *MasterIrp; // rcx
  int updated; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  PVOID v11; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v13 = 0LL;
  v11 = 0LL;
  P = 0LL;
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_SetDeviceProperty_Start,
      a3,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16));
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_14;
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v13);
  if ( updated < 0 )
    goto LABEL_15;
  NdrMesTypeDecode3(v13, "TP 3\a", &off_140BDFEE0, &off_140E06F00, 1, &v11);
  if ( v11 && *((_QWORD *)v11 + 1) && *(_DWORD *)v11 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v11 + 1), *(_DWORD *)v11);
    if ( updated >= 0 )
    {
      PiSwLock();
      if ( PiSwDeviceOperationsAllowed(FsContext2) )
      {
        updated = PnpAllocatePWSTR(*(_WORD **)(FsContext2 + 80), 0xC8uLL, 0x57706E50u, &P);
        if ( updated >= 0 )
          updated = PiSwUpdateArrayProperties(
                      *(_QWORD *)(FsContext2 + 168),
                      *(_DWORD *)(FsContext2 + 176),
                      *((_QWORD *)v11 + 1),
                      *(_DWORD *)v11);
      }
      else
      {
        updated = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      if ( updated >= 0 )
        updated = PiSwPropertySet((__int64)P, 1u, *((_QWORD *)v11 + 1), *(_DWORD *)v11);
    }
  }
  else
  {
LABEL_14:
    updated = -1073741811;
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0x57706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x6370726Bu);
  if ( v13 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v8,
      (__int64)KMPnPEvt_SwDevice_SetDeviceProperty_Stop,
      v9,
      *(const wchar_t **)(FsContext2 + 8),
      *(const wchar_t **)(FsContext2 + 16),
      updated);
  return (unsigned int)updated;
}
