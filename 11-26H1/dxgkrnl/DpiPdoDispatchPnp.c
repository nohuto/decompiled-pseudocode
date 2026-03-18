/*
 * XREFs of DpiPdoDispatchPnp @ 0x1403D1510
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiPdoEnableDisableConnectSound @ 0x14025648C (DpiPdoEnableDisableConnectSound.c)
 *     DpiPdoHandleStopDevice @ 0x1402568C0 (DpiPdoHandleStopDevice.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterDdiSync @ 0x140319D70 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x140319DFC (DxgkAcquireAdapterDdiSync.c)
 *     DpiDxgkDdiQueryInterface @ 0x1403D1B3C (DpiDxgkDdiQueryInterface.c)
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x1403E17AC (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiPdoDispatchPnp(PDEVICE_OBJECT Pdo, IRP *Tag)
{
  char *DeviceExtension; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int Status; // edi
  __int64 MinorFunction; // rcx
  __int64 v8; // r13
  __int64 (__fastcall *v9)(PDEVICE_OBJECT); // rax
  int v11; // ecx
  __int64 v12; // rdi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  int v22; // eax
  int v23; // eax
  struct _IO_REMOVE_LOCK *v24; // rcx
  int v25; // eax
  int v26; // eax
  struct _LUID *v27; // rdx
  DXGADAPTER *v28; // rcx
  ULONG v29; // r9d
  char v30; // dl
  PIO_SECURITY_CONTEXT SecurityContext; // [rsp+40h] [rbp-30h] BYREF
  USHORT Size; // [rsp+48h] [rbp-28h]
  USHORT Version; // [rsp+4Ah] [rbp-26h]
  int v34; // [rsp+4Ch] [rbp-24h]
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-20h]
  struct _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+58h] [rbp-18h]
  int v37; // [rsp+60h] [rbp-10h]
  int v38; // [rsp+64h] [rbp-Ch]
  unsigned int Data; // [rsp+A0h] [rbp+30h] BYREF

  DeviceExtension = (char *)Pdo->DeviceExtension;
  CurrentStackLocation = Tag->Tail.Overlay.CurrentStackLocation;
  Status = -1073741637;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v8 = *(_QWORD *)(*((_QWORD *)DeviceExtension + 4) + 64LL);
  if ( (unsigned __int8)MinorFunction < 0x18u )
  {
    v9 = *(__int64 (__fastcall **)(PDEVICE_OBJECT))&DeviceExtension[8 * MinorFunction + 288];
    if ( v9 )
    {
      Status = v9(Pdo);
      goto LABEL_4;
    }
  }
  if ( (unsigned int)MinorFunction <= 8 )
  {
    if ( (_DWORD)MinorFunction == 8 )
    {
      v12 = *((_QWORD *)DeviceExtension + 5);
      if ( Tag->IoStatus.Status != -1073741637 )
        goto LABEL_13;
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
      Version = CurrentStackLocation->Parameters.QueryInterface.Version;
      ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      v37 = *((_DWORD *)DeviceExtension + 126);
      v34 = 0;
      v38 = 0;
      if ( !*(_QWORD *)(v12 + 256) || (int)DpiAcquireCoreSyncAccessSafe((__int64)Pdo, 1) < 0 )
        goto LABEL_13;
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), 1);
      Status = DpiDxgkDdiQueryInterface(v12, *((_QWORD *)DeviceExtension + 6), &SecurityContext);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
      DpiReleaseCoreSyncAccessSafe((__int64)Pdo, 1);
      if ( Status >= 0 )
      {
        CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)SecurityContext;
        CurrentStackLocation->Parameters.QueryInterface.Size = Size;
        CurrentStackLocation->Parameters.QueryInterface.Version = Version;
        CurrentStackLocation->Parameters.Read.ByteOffset = ByteOffset;
        CurrentStackLocation->Parameters.CreatePipe.Parameters = Parameters;
        goto LABEL_5;
      }
      goto LABEL_4;
    }
    v17 = MinorFunction - 1;
    if ( !v17 )
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v23 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = 5;
      goto LABEL_37;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      if ( *((_DWORD *)DeviceExtension + 60) == 2 )
        DpiPdoHandleStopDevice((__int64)Pdo);
      v24 = (struct _IO_REMOVE_LOCK *)(DeviceExtension + 64);
      if ( DeviceExtension[509] )
      {
        IoReleaseRemoveLockEx(v24, Tag, 0x20u);
      }
      else
      {
        IoReleaseRemoveLockAndWaitEx(v24, Tag, 0x20u);
        IoQueueWorkItem(
          *((PIO_WORKITEM *)DeviceExtension + 119),
          (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo,
          DelayedWorkQueue,
          0LL);
      }
      *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
      v25 = *((_DWORD *)DeviceExtension + 59);
      ++*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 60) = v25;
      *((_DWORD *)DeviceExtension + 59) = 7;
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 2314;
      goto LABEL_50;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 2;
      if ( !v20 )
      {
        KeEnterCriticalRegion();
        if ( DeviceExtension[484] )
          DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
        *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
        v23 = *((_DWORD *)DeviceExtension + 59);
        ++*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 59) = 3;
        goto LABEL_37;
      }
      if ( v20 != 1 )
        goto LABEL_8;
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v21 = *((_DWORD *)DeviceExtension + 59) == 3;
    }
    else
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[484] )
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v21 = *((_DWORD *)DeviceExtension + 59) == 5;
    }
    if ( !v21 )
    {
LABEL_38:
      Status = 0;
LABEL_20:
      if ( DeviceExtension[484] )
        DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
      goto LABEL_5;
    }
    v22 = *((_DWORD *)DeviceExtension + 60);
    --*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 59) = v22;
    v23 = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
LABEL_37:
    *((_DWORD *)DeviceExtension + 60) = v23;
    goto LABEL_38;
  }
  v11 = MinorFunction - 10;
  if ( !v11 )
  {
LABEL_8:
    Status = Tag->IoStatus.Status;
    goto LABEL_4;
  }
  v13 = v11 - 1;
  if ( !v13 )
  {
LABEL_50:
    Status = 0;
    goto LABEL_5;
  }
  v14 = v13 - 11;
  if ( !v14 )
  {
    Status = -1073741823;
    goto LABEL_5;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    KeEnterCriticalRegion();
    if ( DeviceExtension[484] )
      DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    Status = 0;
    *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
    v16 = *((_DWORD *)DeviceExtension + 59);
    ++*((_DWORD *)DeviceExtension + 69);
    *((_DWORD *)DeviceExtension + 60) = v16;
    *((_DWORD *)DeviceExtension + 59) = 6;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 2256;
    goto LABEL_20;
  }
  if ( v15 != 2 )
    goto LABEL_8;
  if ( !DeviceExtension[510] && *(_DWORD *)(v8 + 2840) >= 2u )
    IoInvalidateDeviceRelations(Pdo, PowerRelations);
  DeviceExtension[510] = 1;
  if ( DeviceExtension[944] )
    goto LABEL_13;
  v26 = *((_DWORD *)DeviceExtension + 124);
  if ( v26 != 1 )
  {
    if ( v26 != 4 )
      goto LABEL_13;
    IoSetDevicePropertyData(
      Pdo,
      &DEVPKEY_Gpu_Parent_Luid,
      0,
      0,
      8u,
      8u,
      (PVOID)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 4) + 64LL) + 2696LL));
LABEL_4:
    if ( Status != -1073741637 )
      goto LABEL_5;
LABEL_13:
    Status = Tag->IoStatus.Status;
    goto LABEL_5;
  }
  Status = DpiAcquireCoreSyncAccessSafe((__int64)Pdo, 1);
  if ( Status < 0 )
    goto LABEL_4;
  v28 = *(DXGADAPTER **)(v8 + 4032);
  Data = 0;
  if ( DXGADAPTER::IsAdapterSessionized(v28, v27, &Data, 0LL) )
    IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_SessionId, 0, v29, 7u, 4u, &Data);
  MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v8 + 4032), *((_DWORD *)DeviceExtension + 126), Pdo);
  DeviceExtension[944] = 1;
  DpiReleaseCoreSyncAccessSafe((__int64)Pdo, 1);
  if ( IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*((_QWORD *)DeviceExtension + 117) + 4LL)) )
    DpiPdoEnableDisableConnectSound(Pdo, v30);
LABEL_5:
  Tag->IoStatus.Status = Status;
  IofCompleteRequest(Tag, 0);
  return (unsigned int)Status;
}
