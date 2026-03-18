/*
 * XREFs of UsbhPdoPnp_QueryInterface @ 0x140002A30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhBusifGetLocationInterface @ 0x140001D60 (UsbhBusifGetLocationInterface.c)
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     UsbhRefPdoDeviceHandle @ 0x140017B50 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140017E00 (UsbhDerefPdoDeviceHandle.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     UsbhBusifGetSSHub @ 0x140057564 (UsbhBusifGetSSHub.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryInterface(__int64 a1, IRP *a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  unsigned int Status; // r14d
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 Pool2; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  struct _DEVICE_OBJECT *v26; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // ebx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int SSHub; // eax
  _NAMED_PIPE_CREATE_PARAMETERS *v38; // r10
  __int64 v39; // rdx
  _LARGE_INTEGER ByteOffset; // rax
  int v41; // eax
  unsigned int v42; // r10d
  int v43; // r10d
  _NAMED_PIPE_CREATE_PARAMETERS *v44; // r10
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]
  __int64 v46; // [rsp+A0h] [rbp+18h]

  v4 = PdoExt(a1);
  v5 = 0;
  v6 = v4;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v7 = *(_QWORD *)(v4 + 1184);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 812018033;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = a1;
      }
    }
  }
  v10 = *(_QWORD *)(v4 + 1184);
  Status = a2->IoStatus.Status;
  if ( !v10 )
    goto LABEL_44;
  v12 = 0LL;
  v13 = *(unsigned __int16 *)(v4 + 1428);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v14 = *(_QWORD *)(v10 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 1329877100;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = v13;
      *(_QWORD *)(v15 + 24) = 1364543814LL;
    }
  }
  NewIrql = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5A0 = (__int64)&dword_14006F5A8;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v16 = *(_QWORD *)(v10 + 64);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
      *(_DWORD *)v17 = 1413771367;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = v13;
      *(_QWORD *)(v17 + 24) = 0LL;
    }
  }
  if ( (_WORD)v13 )
  {
    v46 = FdoExt(v10);
    if ( (unsigned __int16)v13 <= *(unsigned __int8 *)(FdoExt(v10) + 2938) )
    {
      v18 = *(_QWORD *)(v46 + 3056);
      if ( v18 )
      {
        v19 = v18 + 2928 * v13 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v20 = *(_QWORD *)(v10 + 64);
          if ( v20 )
          {
            v21 = *(_QWORD *)(v20 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
            *(_DWORD *)v21 = 1044672615;
            *(_QWORD *)(v21 + 8) = 0LL;
            *(_QWORD *)(v21 + 16) = v13;
            *(_QWORD *)(v21 + 24) = v19;
          }
        }
        if ( v19 )
        {
          v12 = *(_QWORD *)(v19 + 392);
          if ( v12 )
          {
            v22 = PdoExt(*(_QWORD *)(v19 + 392));
            Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
            if ( Pool2 )
            {
              *(_DWORD *)Pool2 = 1668571500;
              *(_QWORD *)(Pool2 + 32) = v12;
              *(_DWORD *)(Pool2 + 24) = 1364543814;
              *(_QWORD *)(Pool2 + 40) = a2;
              v24 = (_QWORD *)(Pool2 + 8);
              v25 = *(_QWORD **)(v22 + 1280);
              if ( *v25 != v22 + 1272 )
                __fastfail(3u);
              *v24 = v22 + 1272;
              v24[1] = v25;
              *v25 = v24;
              *(_QWORD *)(v22 + 1280) = v24;
            }
            else
            {
              ++*(_DWORD *)(v22 + 1288);
            }
          }
        }
      }
    }
  }
  qword_14006F5A0 = 0LL;
  KeReleaseSpinLock(&HubG, NewIrql);
  if ( !v12 )
    goto LABEL_44;
  v26 = *(struct _DEVICE_OBJECT **)(FdoExt(*(_QWORD *)(v6 + 1184)) + 1216);
  if ( !v26 || *(_DWORD *)(PdoExt(a1) + 1124) != 3 )
  {
    Log(*(_QWORD *)(v6 + 1184), 256, 1902522657, (_DWORD)a2, a1);
    goto LABEL_43;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_SS_GUID,
         0x10uLL) == 16 )
  {
    Log(*(_QWORD *)(v6 + 1184), 256, 1902728019, (_DWORD)a2, a1);
    SSHub = UsbhBusifGetSSHub(*(_QWORD *)(v6 + 1184), v39, a2);
    goto LABEL_47;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    SSHub = UsbhBusifGetLocationInterface(v28, a1, (__int64)a2);
LABEL_47:
    Status = SSHub;
LABEL_43:
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
LABEL_44:
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 0);
    return Status;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_USBDI_GUID, 0x10uLL) == 16
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_HUB_GUID, 0x10uLL) == 16
    || RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_MINIDUMP_GUID,
         0x10uLL) == 16
    || RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_FORWARD_PROGRESS_GUID,
         0x10uLL) == 16 )
  {
    Log(*(_QWORD *)(v6 + 1184), 256, 1902732850, (_DWORD)a2, a1);
    if ( !UsbhRefPdoDeviceHandle(*(_QWORD *)(v6 + 1184), a1, a2, 1212442225LL) )
    {
      PdoExt(a1);
      v41 = UsbhSyncResetDeviceInternal(*(PDEVICE_OBJECT *)(v6 + 1184));
      Log(*(_QWORD *)(v6 + 1184), 256, 1902732882, (_DWORD)a2, v41);
      if ( (v42 & 0xC0000000) == 0xC0000000 )
      {
        if ( !(unsigned __int8)Usb_Disconnected(v42) )
          UsbhException(
            *(_QWORD *)(v6 + 1184),
            *(unsigned __int16 *)(v6 + 1428),
            121,
            0,
            0,
            v43,
            -1,
            (__int64)usbfile_pdo_c,
            535,
            0);
        a2->IoStatus.Status = Status;
        IofCompleteRequest(a2, 0);
        goto LABEL_52;
      }
      UsbhRefPdoDeviceHandle(*(_QWORD *)(v6 + 1184), a1, a2, 1212442225LL);
      Log(*(_QWORD *)(v6 + 1184), 256, 1902732872, *(_QWORD *)(v6 + 1160), a1);
      CurrentStackLocation->Parameters.CreatePipe.Parameters = v44;
    }
    Log(*(_QWORD *)(v6 + 1184), 256, 1902732872, *(_QWORD *)(v6 + 1160), a1);
    CurrentStackLocation->Parameters.CreatePipe.Parameters = v38;
    if ( v38 )
      UsbhDerefPdoDeviceHandle(*(_QWORD *)(v6 + 1184), v38, a2, 1212442225LL);
    Log(*(_QWORD *)(v6 + 1184), 256, 1902732851, (_DWORD)a2, a1);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    Status = IofCallDriver(v26, a2);
LABEL_52:
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
    return Status;
  }
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &GUID_D3COLD_SUPPORT_INTERFACE,
         0x10uLL) != 16 )
  {
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v34 = *(_QWORD *)(v6 + 1184);
      if ( v34 )
      {
        v35 = *(_QWORD *)(v34 + 64);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v35 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
          *(_DWORD *)v36 = 879126897;
          *(_QWORD *)(v36 + 8) = 0LL;
          *(_QWORD *)(v36 + 16) = a2;
          *(_QWORD *)(v36 + 24) = a1;
        }
      }
    }
    goto LABEL_43;
  }
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v29 = *(_QWORD *)(v6 + 1184);
    if ( v29 )
    {
      v30 = *(_QWORD *)(v29 + 64);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
        *(_DWORD *)v31 = 895904113;
        *(_QWORD *)(v31 + 8) = 0LL;
        *(_QWORD *)(v31 + 16) = a2;
        *(_QWORD *)(v31 + 24) = a1;
      }
    }
  }
  if ( CurrentStackLocation->Parameters.CreatePipe.Parameters == (_NAMED_PIPE_CREATE_PARAMETERS *)v6 )
  {
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
    v32 = a2->IoStatus.Status;
    a2->IoStatus.Status = v32;
    IofCompleteRequest(a2, 0);
    return v32;
  }
  if ( CurrentStackLocation->Parameters.QueryInterface.Size != 72
    || CurrentStackLocation->Parameters.QueryInterface.Version != 1 )
  {
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
    v5 = a2->IoStatus.Status;
    a2->IoStatus.Status = v5;
    goto LABEL_67;
  }
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( a2->IoStatus.Status )
  {
    *(_DWORD *)ByteOffset.QuadPart = 65608;
    goto LABEL_64;
  }
  if ( *(_WORD *)ByteOffset.QuadPart == 72 && *(_WORD *)(ByteOffset.QuadPart + 2) == 1 )
  {
    *(_OWORD *)(v6 + 2976) = *(_OWORD *)ByteOffset.QuadPart;
    *(_OWORD *)(v6 + 2992) = *(_OWORD *)(ByteOffset.QuadPart + 16);
    *(_OWORD *)(v6 + 3008) = *(_OWORD *)(ByteOffset.QuadPart + 32);
    *(_OWORD *)(v6 + 3024) = *(_OWORD *)(ByteOffset.QuadPart + 48);
    *(_QWORD *)(v6 + 3040) = *(_QWORD *)(ByteOffset.QuadPart + 64);
LABEL_64:
    *(_QWORD *)(ByteOffset.QuadPart + 8) = v6;
    *(_QWORD *)(ByteOffset.QuadPart + 32) = UsbhD3ColdSupportInterfaceSetD3ColdSupport;
    *(_QWORD *)(ByteOffset.QuadPart + 40) = UsbhD3ColdSupportInterfaceGetIdleWakeInfo;
    *(_QWORD *)(ByteOffset.QuadPart + 24) = UsbhD3ColdSupportInterfaceDereference;
    *(_QWORD *)(ByteOffset.QuadPart + 16) = UsbhD3ColdSupportInterfaceReference;
    *(_QWORD *)(ByteOffset.QuadPart + 48) = UsbhD3ColdSupportInterfaceGetD3ColdCapability;
    *(_QWORD *)(ByteOffset.QuadPart + 56) = UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport;
    *(_QWORD *)(ByteOffset.QuadPart + 64) = UsbhD3ColdSupportInterfaceGetLastTransitionStatus;
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
    goto LABEL_65;
  }
  UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
  v5 = -1073741637;
LABEL_65:
  a2->IoStatus.Status = v5;
LABEL_67:
  IofCompleteRequest(a2, 0);
  return v5;
}
