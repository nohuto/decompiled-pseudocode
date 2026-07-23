/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x1409ADB7C
 * Callers:
 *     PiSwDispatch @ 0x140A8C570 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140498338 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405278A0 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405DEBD4 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiSwUpdateArrayProperties @ 0x1409ADFF8 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1409AE194 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x1409B0304 (PiSwDeviceOperationsAllowed.c)
 *     PiSwInterfaceFree @ 0x1409B1D4C (PiSwInterfaceFree.c)
 *     PiSwPropertySet @ 0x140A17FD4 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x140A195A0 (PiSwValidatePropertyArray.c)
 *     PiSwInterfaceCreate @ 0x140A8C6B4 (PiSwInterfaceCreate.c)
 *     PiSwDeviceInterfaceSetState @ 0x140B1284C (PiSwDeviceInterfaceSetState.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp, __int64 a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  const wchar_t **FsContext2; // r14
  _QWORD *v6; // rsi
  struct _IRP *MasterIrp; // rcx
  int updated; // edi
  __int64 v9; // r8
  size_t Length; // rdx
  NTSTRSAFE_PCWSTR v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  const wchar_t *v18; // rcx
  __int64 InterfaceEntry; // rax
  __int64 v20; // r8
  PVOID v21; // r8
  PVOID *v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  PVOID P; // [rsp+30h] [rbp-78h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v27; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v28[12]; // [rsp+48h] [rbp-60h] BYREF
  char v29; // [rsp+B8h] [rbp+10h]
  int v30; // [rsp+C8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v28[1] = CurrentStackLocation;
  FsContext2 = (const wchar_t **)CurrentStackLocation->FileObject->FsContext2;
  v28[2] = FsContext2;
  v28[0] = 0LL;
  P = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  pszSrc = 0LL;
  v30 = 0;
  v29 = 0;
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zz_EtwWriteTransfer(
      (__int64)Irp,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RegisterInterface_Start,
      a3,
      FsContext2[1],
      FsContext2[2]);
  v28[3] = &Irp->AssociatedIrp;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_50;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v28);
  if ( updated < 0 )
    goto LABEL_17;
  NdrMesTypeDecode3(v28[0], "TP 3\a", &off_140BDFEE0, &off_140E06F00, 2, &P);
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
          updated = IopRegisterDeviceInterface(
                      FsContext2[10],
                      *(_QWORD *)P,
                      *((const wchar_t **)P + 1),
                      1,
                      (PVOID *)&pszSrc,
                      &v30);
          if ( updated >= 0 )
          {
            if ( (byte_140EF412C & 0x40) != 0 )
              McTemplateK0zzz_EtwWriteTransfer(
                v16,
                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InterfaceRegistered,
                v17,
                FsContext2[1],
                FsContext2[2],
                pszSrc);
            v18 = FsContext2[15];
            if ( v18 )
              *((_DWORD *)v18 + 12) |= v30;
            InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
            v6 = (_QWORD *)InterfaceEntry;
            v27 = (_QWORD *)InterfaceEntry;
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
              v20 = *((_QWORD *)P + 3);
              if ( v20 )
                updated = PiSwPropertySet(v6[2], 3LL, v20, *((unsigned int *)P + 4));
              if ( updated < 0 )
                goto LABEL_50;
              PiSwLock();
              v21 = P;
              LOBYTE(v21) = *((_BYTE *)P + 32);
              updated = PiSwDeviceInterfaceSetState(FsContext2, v6, v21);
              goto LABEL_12;
            }
            updated = PiSwInterfaceCreate(pszSrc, *((_QWORD *)P + 3), *((unsigned int *)P + 4), &v27);
            if ( updated >= 0 )
            {
              v29 = 1;
              v22 = (PVOID *)FsContext2[24];
              if ( *v22 != FsContext2 + 23 )
                goto LABEL_44;
              v6 = v27;
              *v27 = FsContext2 + 23;
              v6[1] = v22;
              *v22 = v6;
              FsContext2[24] = (const wchar_t *)v6;
              goto LABEL_35;
            }
            v6 = v27;
          }
        }
LABEL_12:
        ExReleaseResourceLite(&PiSwLockObj);
        KeLeaveCriticalRegion();
        if ( updated < 0 )
          goto LABEL_50;
        Length = CurrentStackLocation->Parameters.Read.Length;
        v11 = pszSrc;
        updated = RtlStringCbCopyW((NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp, Length, pszSrc);
        if ( updated >= 0 )
        {
          v12 = -1LL;
          do
            ++v12;
          while ( v11[v12] );
          Irp->IoStatus.Information = 2 * v12 + 2;
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
  if ( v6 && v29 )
  {
    PiSwLock();
    v23 = *v6;
    v24 = (_QWORD *)v6[1];
    if ( *(_QWORD **)(*v6 + 8LL) == v6 && (_QWORD *)*v24 == v6 )
    {
      *v24 = v23;
      *(_QWORD *)(v23 + 8) = v24;
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
  if ( v28[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  if ( (byte_140EF412C & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      v13,
      (__int64)KMPnPEvt_SwDevice_RegisterInterface_Stop,
      v14,
      FsContext2[1],
      FsContext2[2],
      updated);
  return (unsigned int)updated;
}
