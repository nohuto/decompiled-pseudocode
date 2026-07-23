/*
 * XREFs of PiSwPdoPnPDispatch @ 0x1409AE200
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     PnpAllocatePWSTR @ 0x140951520 (PnpAllocatePWSTR.c)
 *     PiSwProcessRemove @ 0x1409AD484 (PiSwProcessRemove.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     _PnpStringFromGuid @ 0x1409B134C (_PnpStringFromGuid.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 *     PiSwDestroyDeviceObject @ 0x140A8C420 (PiSwDestroyDeviceObject.c)
 *     PnpAllocateMultiSZ @ 0x140A8D8B4 (PnpAllocateMultiSZ.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x140B0E0E4 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140B14B14 (PiSwDeviceInterfacesUpdateState.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _QWORD *DeviceExtension; // rdi
  signed int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int MinorFunction; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  _QWORD *v10; // r10
  ULONG v11; // ecx
  ULONG v12; // ecx
  void *v13; // rcx
  signed int MultiSZ; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rax
  ULONG_PTR v22; // rbx
  _QWORD *v23; // rdx
  ULONG Length; // ecx
  _WORD *v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // edx
  char v33; // cl
  char v34; // si
  int v35; // eax
  char v36; // si
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  __m128i si128; // xmm0
  int SecurityQos_high; // ecx
  int v40; // edx
  unsigned int v41; // ecx
  unsigned int v42; // edx
  __int64 v43; // rdx
  ULONG_PTR v44; // rdx
  ULONG v45; // ecx
  ULONG v46; // ecx
  ULONG_PTR Pool2; // rax
  ULONG_PTR v48; // rax
  __int64 v49; // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (DeviceExtension[1] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_31;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 9 )
  {
    v8 = MinorFunction - 12;
    if ( !v8 )
    {
      PiSwLock();
      v23 = (_QWORD *)*DeviceExtension;
      if ( *DeviceExtension )
      {
        Length = CurrentStackLocation->Parameters.Read.Length;
        if ( Length )
        {
          if ( Length != 1 )
            goto LABEL_30;
          v25 = (_WORD *)v23[7];
        }
        else
        {
          v25 = (_WORD *)v23[6];
        }
        if ( !v25 )
          goto LABEL_30;
        v26 = 0x7FFFFFFFLL;
        goto LABEL_28;
      }
LABEL_59:
      Status = -1073741810;
      goto LABEL_30;
    }
    v9 = v8 - 7;
    if ( !v9 )
    {
      PiSwLock();
      v10 = (_QWORD *)*DeviceExtension;
      if ( *DeviceExtension )
      {
        v11 = CurrentStackLocation->Parameters.Read.Length;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
            v13 = (void *)v10[3];
            if ( v13 )
            {
              MultiSZ = PnpAllocateMultiSZ(v13);
LABEL_29:
              Status = MultiSZ;
            }
LABEL_30:
            ExReleaseResourceLite(&PiSwLockObj);
            KeLeaveCriticalRegion();
            goto LABEL_31;
          }
          v45 = v12 - 1;
          if ( !v45 )
          {
            MultiSZ = PiSwDeviceMakeCompatibleIds(*DeviceExtension, &Irp->IoStatus.Information);
            goto LABEL_29;
          }
          v46 = v45 - 1;
          if ( v46 )
          {
            if ( v46 != 2 || !v10[5] )
              goto LABEL_30;
            Pool2 = ExAllocatePool2(0x100uLL);
            Irp->IoStatus.Information = Pool2;
            if ( !Pool2 )
            {
              Status = -1073741670;
              goto LABEL_30;
            }
            MultiSZ = PnpStringFromGuid(*(_QWORD *)(*DeviceExtension + 40LL), Pool2);
            goto LABEL_29;
          }
          v25 = (_WORD *)v10[2];
          v26 = 200LL;
        }
        else
        {
          v25 = (_WORD *)v10[1];
          v26 = 200LL;
        }
LABEL_28:
        MultiSZ = PnpAllocatePWSTR(v25, v26, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
        goto LABEL_29;
      }
      goto LABEL_59;
    }
    v28 = v9 - 1;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( !v30 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_31;
        }
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 != 2 )
            goto LABEL_31;
          PiSwCompleteCreate(DeviceObject);
          goto LABEL_46;
        }
        PiSwLock();
        v32 = *((_DWORD *)DeviceExtension + 2) | 4;
        *((_DWORD *)DeviceExtension + 2) = v32;
        v33 = v32;
        if ( (v32 & 8) != 0 )
        {
          v49 = *DeviceExtension;
          if ( *DeviceExtension )
          {
            if ( *(PDEVICE_OBJECT *)(v49 + 120) == DeviceObject && (*(_DWORD *)(v49 + 4) & 2) != 0 )
            {
              v33 = v32 | 0x40;
              *((_DWORD *)DeviceExtension + 2) = v32 | 0x40;
            }
          }
        }
        v34 = (v33 & 8) != 0 && (v33 & 0x40) == 0;
        PiSwProcessRemove((__int64)DeviceObject, v34);
        goto LABEL_45;
      }
      v48 = ExAllocatePool2(0x100uLL);
      if ( v48 )
      {
        *(_QWORD *)(v48 + 16) = 15LL;
        *(GUID *)v48 = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = v48;
        goto LABEL_46;
      }
LABEL_67:
      Status = -1073741670;
      goto LABEL_31;
    }
    PiSwLock();
    if ( !*DeviceExtension )
      goto LABEL_59;
    v44 = Irp->IoStatus.Information | 2;
    if ( (*(_DWORD *)(*DeviceExtension + 64LL) & 4) == 0 )
      v44 = Irp->IoStatus.Information & 0xFFFFFFFFFFFFFFFDuLL;
    Irp->IoStatus.Information = v44;
LABEL_49:
    Status = 0;
    goto LABEL_30;
  }
  if ( MinorFunction == 9 )
  {
    PiSwLock();
    if ( !*DeviceExtension )
      goto LABEL_59;
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    SecurityContext->DesiredAccess = 0;
    SecurityContext->FullCreateOptions = 1;
    *(__m128i *)&SecurityContext[1].SecurityQos = si128;
    SecurityContext[1].DesiredAccess = _mm_cvtsi128_si32(si128);
    HIDWORD(SecurityContext->SecurityQos) |= 0x240u;
    SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
    *(_QWORD *)&SecurityContext[1].FullCreateOptions = 0LL;
    v40 = SecurityQos_high ^ ((unsigned __int8)SecurityQos_high ^ (unsigned __int8)(16
                                                                                  * *(_DWORD *)(*DeviceExtension + 64LL))) & 0x10;
    HIDWORD(SecurityContext->SecurityQos) = v40;
    v41 = v40 & 0xFFFFFF7F | ((*(_DWORD *)(*DeviceExtension + 64LL) & 2) << 6);
    HIDWORD(SecurityContext->SecurityQos) = v41;
    v42 = v41 & 0xFFFDFFFF | ((*(_DWORD *)(*DeviceExtension + 64LL) & 4) << 15);
    HIDWORD(SecurityContext->SecurityQos) = v42;
    HIDWORD(SecurityContext->SecurityQos) = v42 & 0xFFFFFEFF | ~(32
                                                               * (unsigned __int16)*(_DWORD *)(*DeviceExtension + 64LL)) & 0x100;
    goto LABEL_49;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    PiSwLock();
    if ( (DeviceExtension[1] & 1) == 0 )
    {
      LOBYTE(v43) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*DeviceExtension, v43);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*DeviceExtension, 0LL);
      else
        *((_DWORD *)DeviceExtension + 2) |= 1u;
      goto LABEL_30;
    }
    goto LABEL_49;
  }
  v15 = MinorFunction - 1;
  if ( !v15 )
  {
LABEL_46:
    Status = 0;
    goto LABEL_31;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    PiSwLock();
    v35 = *((_DWORD *)DeviceExtension + 2) | 2;
    *((_DWORD *)DeviceExtension + 2) = v35;
    v36 = (v35 & 8) != 0 && (v35 & 0x40) == 0;
    PiSwProcessRemove((__int64)DeviceObject, v36);
    if ( !v36 )
      PiSwDestroyDeviceObject(DeviceObject);
LABEL_45:
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
    goto LABEL_46;
  }
  v17 = v16 - 1;
  if ( !v17 )
    goto LABEL_46;
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_46;
  v19 = v18 - 1;
  if ( !v19 )
    goto LABEL_46;
  v20 = v19 - 1;
  if ( !v20 )
    goto LABEL_46;
  if ( v20 == 1 && CurrentStackLocation->Parameters.Read.Length == 4 )
  {
    v21 = ExAllocatePool2(0x100uLL);
    v22 = v21;
    if ( !v21 )
      goto LABEL_67;
    *(_DWORD *)v21 = 1;
    *(_QWORD *)(v21 + 8) = DeviceObject;
    PsReferenceSiloContext(DeviceObject);
    Irp->IoStatus.Information = v22;
    goto LABEL_46;
  }
LABEL_31:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
