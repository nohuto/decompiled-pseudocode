/*
 * XREFs of UsbhSyncSendCommand @ 0x1400175B0
 * Callers:
 *     UsbhSetHubRemoteWake @ 0x140006EC8 (UsbhSetHubRemoteWake.c)
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 *     UsbhSuspendPort @ 0x14002198C (UsbhSuspendPort.c)
 *     UsbhDisablePort @ 0x140024098 (UsbhDisablePort.c)
 *     UsbhResumeSuspendedPort @ 0x14002ED10 (UsbhResumeSuspendedPort.c)
 *     UsbhGetPortStatus @ 0x1400385D8 (UsbhGetPortStatus.c)
 *     UsbhFlushPortChange @ 0x14003B818 (UsbhFlushPortChange.c)
 *     UsbhGetDescriptor @ 0x14003BF94 (UsbhGetDescriptor.c)
 *     UsbhGetStatus @ 0x14003CF50 (UsbhGetStatus.c)
 *     UsbhIsHighSpeedCapable @ 0x14003D760 (UsbhIsHighSpeedCapable.c)
 *     UsbhSetPortPower @ 0x14003DD14 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x14003F258 (UsbhSetPortIndicator.c)
 *     UsbhClearTt @ 0x14004632C (UsbhClearTt.c)
 *     UsbhHubAckHubChange @ 0x1400474B4 (UsbhHubAckHubChange.c)
 *     UsbhQueryHubState @ 0x140047CC4 (UsbhQueryHubState.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x14005CF70 (UsbhPdoCheckBootDeviceReady.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_qDDDDDDDDD @ 0x14003E97C (WPP_RECORDER_SF_qDDDDDDDDD.c)
 */

__int64 __fastcall UsbhSyncSendCommand(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, __int64 a5, _DWORD *a6)
{
  _WORD *v6; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  PIRP v14; // rax
  IRP *v15; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // r8d
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdx
  int *Pool2; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  PIRP v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rdx
  NTSTATUS v27; // eax
  int v28; // edi
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r8
  int OutputBuffer; // [rsp+20h] [rbp-A9h]
  unsigned int v36; // [rsp+80h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK v38; // [rsp+98h] [rbp-31h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-21h]
  struct _KEVENT Event; // [rsp+B0h] [rbp-19h] BYREF
  struct _KEVENT Object; // [rsp+C8h] [rbp-1h] BYREF

  memset(&Object, 0, sizeof(Object));
  v36 = 0;
  v6 = a4;
  v38 = 0LL;
  v39 = FdoExt(a1, a2, a3, a4);
  v9 = v39;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v13 = FdoExt(a1, v10, v11, v12);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v14 = IoBuildDeviceIoControlRequest(
          0x220013u,
          *(PDEVICE_OBJECT *)(v13 + 1208),
          0LL,
          0,
          0LL,
          0,
          1u,
          &Event,
          &IoStatusBlock);
  v15 = v14;
  if ( v14 )
  {
    CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&v36;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v13 + 1208), v15);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  v18 = v36;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884))
            + *(_QWORD *)(v19 + 888);
        *(_DWORD *)v20 = 1400074357;
        *(_QWORD *)(v20 + 24) = Status;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v18;
      }
    }
  }
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    if ( a6 )
      *a6 = -1073713152;
    return (unsigned int)Status;
  }
  else
  {
    Pool2 = (int *)ExAllocatePool2(64LL, 136LL, 1112885333LL);
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v22 = *(_QWORD *)(a1 + 64);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
          *(_DWORD *)v23 = 811823987;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 16) = Pool2;
          *(_QWORD *)(v23 + 24) = 0LL;
        }
      }
    }
    if ( Pool2 )
    {
      KeInitializeEvent(&Object, NotificationEvent, 0);
      v24 = IoBuildDeviceIoControlRequest(0x220003u, *(PDEVICE_OBJECT *)(v9 + 1208), 0LL, 0, 0LL, 0, 1u, &Object, &v38);
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( a1 )
        {
          v25 = *(_QWORD *)(a1 + 64);
          if ( v25 )
          {
            v26 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884))
                + *(_QWORD *)(v25 + 888);
            *(_DWORD *)v26 = 828601203;
            *(_QWORD *)(v26 + 24) = &v38;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 16) = v24;
          }
        }
      }
      if ( v24 )
      {
        *((_QWORD *)Pool2 + 1) = 0LL;
        *Pool2 = 3276936;
        Pool2[8] = 10;
        if ( *(char *)a2 < 0 )
          Pool2[8] = 11;
        Pool2[9] = (unsigned __int16)*v6;
        *((_QWORD *)Pool2 + 5) = a3;
        *((_QWORD *)Pool2 + 6) = 0LL;
        Pool2[14] = 2000;
        *((_QWORD *)Pool2 + 16) = *(_QWORD *)a2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          IoStatusBlock.Pointer = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_qDDDDDDDDD(
              *((_QWORD *)IoStatusBlock.Pointer + 8),
              (unsigned __int8)*(_WORD *)(a2 + 4),
              (unsigned __int8)*(_WORD *)(a2 + 2),
              *(unsigned __int8 *)(a2 + 1),
              OutputBuffer,
              a2,
              *(_BYTE *)a2,
              *(_BYTE *)(a2 + 1),
              *(_WORD *)(a2 + 2),
              HIBYTE(*(_WORD *)(a2 + 2)),
              *(_WORD *)(a2 + 2),
              *(_WORD *)(a2 + 4),
              HIBYTE(*(_WORD *)(a2 + 4)),
              *(_WORD *)(a2 + 4),
              *(_WORD *)(a2 + 6));
            v9 = v39;
            v6 = a4;
          }
        }
        v24->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Pool2;
        v27 = IofCallDriver(*(PDEVICE_OBJECT *)(v9 + 1208), v24);
        v28 = v27;
        if ( v27 == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          v28 = v38.Status;
        }
        else
        {
          v38.Status = v27;
        }
        v29 = Pool2[1];
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v30 = *(_QWORD *)(a1 + 64);
            if ( v30 )
            {
              v31 = 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884))
                  + *(_QWORD *)(v30 + 888);
              *(_DWORD *)v31 = 845378419;
              *(_QWORD *)(v31 + 16) = v28;
              *(_QWORD *)(v31 + 8) = 0LL;
              *(_QWORD *)(v31 + 24) = v29;
            }
          }
        }
        if ( a6 )
          *a6 = Pool2[1];
        *v6 = *((_WORD *)Pool2 + 18);
        ExFreePoolWithTag(Pool2, 0);
        if ( (UsbhLogMask & 8) != 0 && a1 )
        {
          v32 = *(_QWORD *)(a1 + 64);
          if ( v32 )
          {
            v33 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884))
                + *(_QWORD *)(v32 + 888);
            *(_DWORD *)v33 = 1046705011;
            *(_QWORD *)(v33 + 16) = v28;
            *(_QWORD *)(v33 + 8) = 0LL;
            *(_QWORD *)(v33 + 24) = 0LL;
          }
        }
        return (unsigned int)v28;
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0);
        return 3221225626LL;
      }
    }
    else
    {
      if ( a6 )
        *a6 = -1073737728;
      return 3221225626LL;
    }
  }
}
