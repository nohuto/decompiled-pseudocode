/*
 * XREFs of UsbhPdoPnp_QueryInterface @ 0x1400163A0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhRefPdoDeviceHandle @ 0x1400118A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140011B50 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhBusifGetLocationInterface @ 0x140036DBC (UsbhBusifGetLocationInterface.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhBusifGetSSHub @ 0x140057AC4 (UsbhBusifGetSSHub.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryInterface(__int64 a1, IRP *a2)
{
  _NAMED_PIPE_CREATE_PARAMETERS *v4; // rax
  unsigned int v5; // esi
  _NAMED_PIPE_CREATE_PARAMETERS *v6; // rbx
  _LARGE_INTEGER DefaultTimeout; // rcx
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _LARGE_INTEGER v13; // rbp
  unsigned int Status; // r14d
  __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  signed __int32 v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  signed __int32 v35; // eax
  unsigned int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rdx
  _DWORD *v39; // rbp
  __int64 Pool2; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _DEVICE_OBJECT *v46; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v48; // rcx
  _LARGE_INTEGER v49; // rcx
  __int64 v50; // rcx
  signed __int32 v51; // eax
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rdx
  unsigned int v55; // ebx
  _LARGE_INTEGER v57; // rcx
  __int64 v58; // rcx
  signed __int32 v59; // eax
  unsigned int v60; // edx
  __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned int LocationInterface; // eax
  __int64 v64; // r10
  __int64 v65; // rdx
  _LARGE_INTEGER ByteOffset; // rax
  int v67; // eax
  int v68; // r10d
  int v69; // r10d
  _NAMED_PIPE_CREATE_PARAMETERS *v70; // r10
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]
  __int64 v72; // [rsp+A0h] [rbp+18h]

  v4 = (_NAMED_PIPE_CREATE_PARAMETERS *)PdoExt(a1);
  v5 = 0;
  v6 = v4;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    DefaultTimeout = v4[29].DefaultTimeout;
    if ( DefaultTimeout.QuadPart )
    {
      v8 = *(_QWORD *)(DefaultTimeout.QuadPart + 64);
      if ( v8 )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v12 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(v12 + v11) = 812018033;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = a2;
        *(_QWORD *)(v12 + v11 + 24) = a1;
      }
    }
  }
  v13 = v6[29].DefaultTimeout;
  Status = a2->IoStatus.Status;
  if ( !v13.QuadPart )
    goto LABEL_44;
  v15 = 0LL;
  v16 = WORD2(v6[35].DefaultTimeout.QuadPart);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v17 = *(_QWORD *)(v13.QuadPart + 64);
    if ( v17 )
    {
      v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 880), 0xFFFFFFFF);
      v19 = *(_DWORD *)(v17 + 884);
      v20 = *(_QWORD *)(v17 + 888);
      v21 = 32LL * ((v18 - 1) & v19);
      *(_DWORD *)(v21 + v20) = 1329877100;
      *(_QWORD *)(v21 + v20 + 8) = 0LL;
      *(_QWORD *)(v21 + v20 + 16) = v16;
      *(_QWORD *)(v21 + v20 + 24) = 1364543814LL;
    }
  }
  NewIrql = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_140070600 = (__int64)&dword_140070608;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v25 = *(_QWORD *)(v13.QuadPart + 64);
    if ( v25 )
    {
      v26 = _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 880), 0xFFFFFFFF);
      v27 = *(_DWORD *)(v25 + 884);
      v28 = *(_QWORD *)(v25 + 888);
      v22 = 32LL * ((v26 - 1) & v27);
      *(_DWORD *)(v22 + v28) = 1413771367;
      *(_QWORD *)(v22 + v28 + 8) = 0LL;
      *(_QWORD *)(v22 + v28 + 16) = v16;
      *(_QWORD *)(v22 + v28 + 24) = 0LL;
    }
  }
  if ( (_WORD)v16 )
  {
    v72 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FdoExt)((_LARGE_INTEGER)v13.QuadPart, v22, v23, v24);
    if ( (unsigned __int16)v16 <= *(unsigned __int8 *)(((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FdoExt)(
                                                         (_LARGE_INTEGER)v13.QuadPart,
                                                         v29,
                                                         v30,
                                                         v31)
                                                     + 2938) )
    {
      v32 = *(_QWORD *)(v72 + 3056);
      if ( v32 )
      {
        v33 = v32 + 2928 * v16 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v34 = *(_QWORD *)(v13.QuadPart + 64);
          if ( v34 )
          {
            v35 = _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 880), 0xFFFFFFFF);
            v36 = *(_DWORD *)(v34 + 884);
            v37 = *(_QWORD *)(v34 + 888);
            v38 = 32LL * ((v35 - 1) & v36);
            *(_DWORD *)(v38 + v37) = 1044672615;
            *(_QWORD *)(v38 + v37 + 8) = 0LL;
            *(_QWORD *)(v38 + v37 + 16) = v16;
            *(_QWORD *)(v38 + v37 + 24) = v33;
          }
        }
        if ( v33 )
        {
          v15 = *(_QWORD *)(v33 + 392);
          if ( v15 )
          {
            v39 = PdoExt(*(_QWORD *)(v33 + 392));
            Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
            if ( Pool2 )
            {
              *(_DWORD *)Pool2 = 1668571500;
              *(_QWORD *)(Pool2 + 32) = v15;
              *(_DWORD *)(Pool2 + 24) = 1364543814;
              *(_QWORD *)(Pool2 + 40) = a2;
              v41 = (_QWORD *)(Pool2 + 8);
              v42 = (_QWORD *)*((_QWORD *)v39 + 160);
              if ( (_DWORD *)*v42 != v39 + 318 )
                __fastfail(3u);
              *v41 = v39 + 318;
              v41[1] = v42;
              *v42 = v41;
              *((_QWORD *)v39 + 160) = v41;
            }
            else
            {
              ++v39[322];
            }
          }
        }
      }
    }
  }
  qword_140070600 = 0LL;
  KeReleaseSpinLock(&HubG, NewIrql);
  if ( !v15 )
    goto LABEL_44;
  v46 = *(struct _DEVICE_OBJECT **)(((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FdoExt)(
                                      (_LARGE_INTEGER)v6[29].DefaultTimeout.QuadPart,
                                      v43,
                                      v44,
                                      v45)
                                  + 1216);
  if ( !v46 || PdoExt(a1)[281] != 3 )
  {
    Log(v6[29].DefaultTimeout.QuadPart, 256, 1902522657, (__int64)a2, a1);
    goto LABEL_43;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_SS_GUID,
         0x10uLL) == 16 )
  {
    Log(v6[29].DefaultTimeout.QuadPart, 256, 1902728019, (__int64)a2, a1);
    LocationInterface = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))UsbhBusifGetSSHub)(
                          (_LARGE_INTEGER)v6[29].DefaultTimeout.QuadPart,
                          v65,
                          a2);
    goto LABEL_47;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    LocationInterface = UsbhBusifGetLocationInterface(v48, a1, a2);
LABEL_47:
    Status = LocationInterface;
LABEL_43:
    UsbhUnlatchPdo(v6[29].DefaultTimeout.QuadPart, v15, (__int64)a2, 0x51554946u);
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
    Log(v6[29].DefaultTimeout.QuadPart, 256, 1902732850, (__int64)a2, a1);
    if ( !UsbhRefPdoDeviceHandle(v6[29].DefaultTimeout.QuadPart, a1, (__int64)a2, 1212442225LL) )
    {
      PdoExt(a1);
      v67 = UsbhSyncResetDeviceInternal((PDEVICE_OBJECT)v6[29].DefaultTimeout.QuadPart);
      Log(v6[29].DefaultTimeout.QuadPart, 256, 1902732882, (__int64)a2, v67);
      if ( (v68 & 0xC0000000) == 0xC0000000 )
      {
        if ( !Usb_Disconnected(v68) )
          UsbhException(
            v6[29].DefaultTimeout.QuadPart,
            WORD2(v6[35].DefaultTimeout.QuadPart),
            121,
            0,
            0,
            v69,
            -1,
            (__int64)usbfile_pdo_c,
            535,
            0);
        a2->IoStatus.Status = Status;
        IofCompleteRequest(a2, 0);
        goto LABEL_52;
      }
      UsbhRefPdoDeviceHandle(v6[29].DefaultTimeout.QuadPart, a1, (__int64)a2, 1212442225LL);
      Log(v6[29].DefaultTimeout.QuadPart, 256, 1902732872, *(_QWORD *)&v6[29].NamedPipeType, a1);
      CurrentStackLocation->Parameters.CreatePipe.Parameters = v70;
    }
    Log(v6[29].DefaultTimeout.QuadPart, 256, 1902732872, *(_QWORD *)&v6[29].NamedPipeType, a1);
    CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v64;
    if ( v64 )
      UsbhDerefPdoDeviceHandle(v6[29].DefaultTimeout.QuadPart, v64, (__int64)a2, 1212442225LL);
    Log(v6[29].DefaultTimeout.QuadPart, 256, 1902732851, (__int64)a2, a1);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    Status = IofCallDriver(v46, a2);
LABEL_52:
    UsbhUnlatchPdo(v6[29].DefaultTimeout.QuadPart, v15, (__int64)a2, 0x51554946u);
    return Status;
  }
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &GUID_D3COLD_SUPPORT_INTERFACE,
         0x10uLL) != 16 )
  {
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v57 = v6[29].DefaultTimeout;
      if ( v57.QuadPart )
      {
        v58 = *(_QWORD *)(v57.QuadPart + 64);
        if ( v58 )
        {
          v59 = _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 880), 0xFFFFFFFF);
          v60 = *(_DWORD *)(v58 + 884);
          v61 = *(_QWORD *)(v58 + 888);
          v62 = 32LL * ((v59 - 1) & v60);
          *(_DWORD *)(v62 + v61) = 879126897;
          *(_QWORD *)(v62 + v61 + 8) = 0LL;
          *(_QWORD *)(v62 + v61 + 16) = a2;
          *(_QWORD *)(v62 + v61 + 24) = a1;
        }
      }
    }
    goto LABEL_43;
  }
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v49 = v6[29].DefaultTimeout;
    if ( v49.QuadPart )
    {
      v50 = *(_QWORD *)(v49.QuadPart + 64);
      if ( v50 )
      {
        v51 = _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 880), 0xFFFFFFFF);
        v52 = *(_DWORD *)(v50 + 884);
        v53 = *(_QWORD *)(v50 + 888);
        v54 = 32LL * ((v51 - 1) & v52);
        *(_DWORD *)(v54 + v53) = 895904113;
        *(_QWORD *)(v54 + v53 + 8) = 0LL;
        *(_QWORD *)(v54 + v53 + 16) = a2;
        *(_QWORD *)(v54 + v53 + 24) = a1;
      }
    }
  }
  if ( CurrentStackLocation->Parameters.CreatePipe.Parameters == v6 )
  {
    UsbhUnlatchPdo(v6[29].DefaultTimeout.QuadPart, v15, (__int64)a2, 0x51554946u);
    v55 = a2->IoStatus.Status;
    a2->IoStatus.Status = v55;
    IofCompleteRequest(a2, 0);
    return v55;
  }
  if ( CurrentStackLocation->Parameters.QueryInterface.Size != 72
    || CurrentStackLocation->Parameters.QueryInterface.Version != 1 )
  {
    UsbhUnlatchPdo(v6[29].DefaultTimeout.QuadPart, v15, (__int64)a2, 0x51554946u);
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
    *(_OWORD *)&v6[74].InboundQuota = *(_OWORD *)ByteOffset.QuadPart;
    *(_OWORD *)&v6[74].TimeoutSpecified = *(_OWORD *)(ByteOffset.QuadPart + 16);
    *(_OWORD *)&v6[75].CompletionMode = *(_OWORD *)(ByteOffset.QuadPart + 32);
    *(_OWORD *)&v6[75].DefaultTimeout.LowPart = *(_OWORD *)(ByteOffset.QuadPart + 48);
    *(_QWORD *)&v6[76].NamedPipeType = *(_QWORD *)(ByteOffset.QuadPart + 64);
LABEL_64:
    *(_QWORD *)(ByteOffset.QuadPart + 8) = v6;
    *(_QWORD *)(ByteOffset.QuadPart + 32) = UsbhD3ColdSupportInterfaceSetD3ColdSupport;
    *(_QWORD *)(ByteOffset.QuadPart + 40) = UsbhD3ColdSupportInterfaceGetIdleWakeInfo;
    *(_QWORD *)(ByteOffset.QuadPart + 24) = UsbhD3ColdSupportInterfaceDereference;
    *(_QWORD *)(ByteOffset.QuadPart + 16) = UsbhD3ColdSupportInterfaceReference;
    *(_QWORD *)(ByteOffset.QuadPart + 48) = UsbhD3ColdSupportInterfaceGetD3ColdCapability;
    *(_QWORD *)(ByteOffset.QuadPart + 56) = UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport;
    *(_QWORD *)(ByteOffset.QuadPart + 64) = UsbhD3ColdSupportInterfaceGetLastTransitionStatus;
    UsbhUnlatchPdo(v6[29].DefaultTimeout.QuadPart, v15, (__int64)a2, 0x51554946u);
    goto LABEL_65;
  }
  UsbhUnlatchPdo(v6[29].DefaultTimeout.QuadPart, v15, (__int64)a2, 0x51554946u);
  v5 = -1073741637;
LABEL_65:
  a2->IoStatus.Status = v5;
LABEL_67:
  IofCompleteRequest(a2, 0);
  return v5;
}
