/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x14090BA58
 * Callers:
 *     PiSwDispatch @ 0x140A7B430 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     RtlStringCbCopyW @ 0x140430A90 (RtlStringCbCopyW.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x14049E7E8 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x140525230 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405DC324 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     PiSwUpdateArrayProperties @ 0x14090BED4 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14090C070 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwLock @ 0x14090DC3C (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x14090E1D4 (PiSwDeviceOperationsAllowed.c)
 *     PiSwInterfaceFree @ 0x14090FC1C (PiSwInterfaceFree.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x1409DAD84 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x1409DC350 (PiSwValidatePropertyArray.c)
 *     PiSwInterfaceCreate @ 0x140A7B574 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x140AF9604 (PiSwDeviceInterfaceSetState.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  const wchar_t **FsContext2; // r14
  _QWORD *v6; // rsi
  struct _IRP *MasterIrp; // rcx
  int updated; // edi
  __int64 v9; // r8
  int v10; // r9d
  size_t Length; // rdx
  NTSTRSAFE_PCWSTR v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  const wchar_t *v19; // rcx
  __int64 InterfaceEntry; // rax
  __int64 v21; // r8
  PVOID v22; // r8
  PVOID *v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  PVOID P; // [rsp+30h] [rbp-78h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v29[12]; // [rsp+48h] [rbp-60h] BYREF
  char v30; // [rsp+B8h] [rbp+10h]
  int v31; // [rsp+C8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v29[1] = CurrentStackLocation;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  v29[2] = FsContext2;
  v29[0] = 0LL;
  P = 0LL;
  v6 = 0LL;
  v28 = 0LL;
  pszSrc = 0LL;
  v31 = 0;
  v30 = 0;
  if ( (byte_140EF3DCC & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RegisterInterface_Start,
      a3,
      FsContext2[1],
      FsContext2[2]);
  v29[3] = &Irp->AssociatedIrp;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_50;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v29);
  if ( updated < 0 )
    goto LABEL_17;
  NdrMesTypeDecode3(v29[0], "TP 3\a", &off_140BD9050, &off_140E06F00, 2, &P);
  if ( P )
  {
    if ( *(_QWORD *)P )
    {
      v9 = *((_QWORD *)P + 3);
      if ( (v9 || !*((_DWORD *)P + 4)) && (*((_DWORD *)P + 4) || !v9) )
      {
        updated = PiSwValidatePropertyArray(*((_QWORD *)P + 3));
        if ( updated < 0 )
          goto LABEL_17;
        PiSwLock();
        if ( !(unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) || ((_DWORD)FsContext2[8] & 8) != 0 )
        {
          updated = -1073741637;
        }
        else
        {
          LOBYTE(v10) = 1;
          updated = IopRegisterDeviceInterface(
                      (unsigned int)FsContext2[10],
                      *(_QWORD *)P,
                      *((_QWORD *)P + 1),
                      v10,
                      (__int64)&pszSrc,
                      (__int64)&v31);
          if ( updated >= 0 )
          {
            if ( (byte_140EF3DCC & 0x40) != 0 )
              McTemplateK0zzz_EtwWriteTransfer(
                v17,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InterfaceRegistered,
                v18,
                FsContext2[1],
                FsContext2[2],
                pszSrc);
            v19 = FsContext2[15];
            if ( v19 )
              *((_DWORD *)v19 + 12) |= v31;
            InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
            v6 = (_QWORD *)InterfaceEntry;
            v28 = (_QWORD *)InterfaceEntry;
            if ( InterfaceEntry )
            {
              updated = PiSwUpdateArrayProperties(
                          *(_QWORD *)(InterfaceEntry + 24),
                          *(unsigned int *)(InterfaceEntry + 32),
                          *((_QWORD *)P + 3),
                          *((unsigned int *)P + 4));
LABEL_35:
              ExReleaseResourceLite(&PiSwLockObj);
              KeLeaveCriticalRegion();
              if ( updated < 0 )
                goto LABEL_50;
              v21 = *((_QWORD *)P + 3);
              if ( v21 )
                updated = PiSwPropertySet(v6[2], 3LL, v21, *((unsigned int *)P + 4));
              if ( updated < 0 )
                goto LABEL_50;
              PiSwLock();
              v22 = P;
              LOBYTE(v22) = *((_BYTE *)P + 32);
              updated = PiSwDeviceInterfaceSetState(FsContext2, v6, v22);
              goto LABEL_12;
            }
            updated = PiSwInterfaceCreate(pszSrc, *((_QWORD *)P + 3), *((unsigned int *)P + 4), &v28);
            if ( updated >= 0 )
            {
              v30 = 1;
              v23 = (PVOID *)FsContext2[24];
              if ( *v23 != FsContext2 + 23 )
                goto LABEL_44;
              v6 = v28;
              *v28 = FsContext2 + 23;
              v6[1] = v23;
              *v23 = v6;
              FsContext2[24] = (const wchar_t *)v6;
              goto LABEL_35;
            }
            v6 = v28;
          }
        }
LABEL_12:
        ExReleaseResourceLite(&PiSwLockObj);
        KeLeaveCriticalRegion();
        if ( updated < 0 )
          goto LABEL_50;
        Length = CurrentStackLocation->Parameters.Read.Length;
        v12 = pszSrc;
        updated = RtlStringCbCopyW((NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp, Length, pszSrc);
        if ( updated >= 0 )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( v12[v13] );
          Irp->IoStatus.Information = 2 * v13 + 2;
        }
        goto LABEL_17;
      }
    }
  }
  updated = -1073741811;
LABEL_17:
  if ( updated >= 0 )
    goto LABEL_18;
LABEL_50:
  if ( v6 && v30 )
  {
    PiSwLock();
    v24 = *v6;
    v25 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) == v6 && (_QWORD *)*v25 == v6 )
    {
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegion();
      PiSwInterfaceFree(v6);
      goto LABEL_18;
    }
LABEL_44:
    __fastfail(3u);
  }
LABEL_18:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v29[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EF3DCC & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v14,
      (__int64)KMPnPEvt_SwDevice_RegisterInterface_Stop,
      v15,
      FsContext2[1],
      FsContext2[2],
      updated);
  return (unsigned int)updated;
}
