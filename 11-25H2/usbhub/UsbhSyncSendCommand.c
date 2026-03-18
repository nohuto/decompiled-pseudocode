/*
 * XREFs of UsbhSyncSendCommand @ 0x140007D40
 * Callers:
 *     UsbhQueryPortState @ 0x140007140 (UsbhQueryPortState.c)
 *     UsbhHubProcessIsr @ 0x14000AC30 (UsbhHubProcessIsr.c)
 *     UsbhResumeSuspendedPort @ 0x140011AE8 (UsbhResumeSuspendedPort.c)
 *     UsbhResetPort @ 0x140012B44 (UsbhResetPort.c)
 *     UsbhDisablePort @ 0x14001C650 (UsbhDisablePort.c)
 *     UsbhSuspendPort @ 0x14001CA88 (UsbhSuspendPort.c)
 *     UsbhSetHubRemoteWake @ 0x140029E28 (UsbhSetHubRemoteWake.c)
 *     UsbhGetPortStatus @ 0x1400395A0 (UsbhGetPortStatus.c)
 *     UsbhFlushPortChange @ 0x14003BDA4 (UsbhFlushPortChange.c)
 *     UsbhGetDescriptor @ 0x14003C51C (UsbhGetDescriptor.c)
 *     UsbhGetStatus @ 0x14003D4D0 (UsbhGetStatus.c)
 *     UsbhIsHighSpeedCapable @ 0x14003DCCC (UsbhIsHighSpeedCapable.c)
 *     UsbhSetPortPower @ 0x14003E270 (UsbhSetPortPower.c)
 *     UsbhSetPortIndicator @ 0x14003F768 (UsbhSetPortIndicator.c)
 *     UsbhClearTt @ 0x1400467EC (UsbhClearTt.c)
 *     UsbhHubAckHubChange @ 0x140047958 (UsbhHubAckHubChange.c)
 *     UsbhQueryHubState @ 0x140048174 (UsbhQueryHubState.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x14005C990 (UsbhPdoCheckBootDeviceReady.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_qDDDDDDDDD @ 0x14003EEA0 (WPP_RECORDER_SF_qDDDDDDDDD.c)
 */

__int64 __fastcall UsbhSyncSendCommand(__int64 a1, unsigned __int8 *a2, __int64 a3, _WORD *a4, __int64 a5, _DWORD *a6)
{
  _WORD *v6; // r14
  __int64 v9; // rsi
  __int64 v10; // rbx
  PIRP v11; // rax
  IRP *v12; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // r8d
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int *Pool2; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  PIRP v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  int v25; // edi
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  int OutputBuffer; // [rsp+20h] [rbp-B9h]
  unsigned int v33; // [rsp+80h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK v34; // [rsp+88h] [rbp-51h] BYREF
  PDEVICE_OBJECT v35; // [rsp+98h] [rbp-41h]
  __int64 v36; // [rsp+A0h] [rbp-39h]
  struct _KEVENT Event; // [rsp+A8h] [rbp-31h] BYREF
  struct _KEVENT Object; // [rsp+C0h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-1h] BYREF

  memset(&Object, 0, sizeof(Object));
  v33 = 0;
  v6 = a4;
  v34 = 0LL;
  v36 = FdoExt(a1);
  v9 = v36;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v10 = FdoExt(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v11 = IoBuildDeviceIoControlRequest(
          0x220013u,
          *(PDEVICE_OBJECT *)(v10 + 1208),
          0LL,
          0,
          0LL,
          0,
          1u,
          &Event,
          &IoStatusBlock);
  v12 = v11;
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&v33;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 1208), v12);
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
  v15 = v33;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 1400074357;
        *(_QWORD *)(v17 + 24) = Status;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = v15;
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
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
          *(_DWORD *)v20 = 811823987;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 16) = Pool2;
          *(_QWORD *)(v20 + 24) = 0LL;
        }
      }
    }
    if ( Pool2 )
    {
      KeInitializeEvent(&Object, NotificationEvent, 0);
      v21 = IoBuildDeviceIoControlRequest(0x220003u, *(PDEVICE_OBJECT *)(v9 + 1208), 0LL, 0, 0LL, 0, 1u, &Object, &v34);
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
            *(_DWORD *)v23 = 828601203;
            *(_QWORD *)(v23 + 24) = &v34;
            *(_QWORD *)(v23 + 8) = 0LL;
            *(_QWORD *)(v23 + 16) = v21;
          }
        }
      }
      if ( v21 )
      {
        *((_QWORD *)Pool2 + 1) = 0LL;
        *Pool2 = 3276936;
        Pool2[8] = 10;
        if ( (*a2 & 0x80u) != 0 )
          Pool2[8] = 11;
        Pool2[9] = (unsigned __int16)*v6;
        *((_QWORD *)Pool2 + 5) = a3;
        *((_QWORD *)Pool2 + 6) = 0LL;
        Pool2[14] = 2000;
        *((_QWORD *)Pool2 + 16) = *(_QWORD *)a2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v35 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_qDDDDDDDDD(
              v35->DeviceExtension,
              a2[1],
              *a2,
              (unsigned __int8)*((_WORD *)a2 + 2),
              OutputBuffer,
              (char)a2,
              *a2,
              a2[1],
              *((_WORD *)a2 + 1),
              HIBYTE(*((_WORD *)a2 + 1)),
              *((_WORD *)a2 + 1),
              *((_WORD *)a2 + 2),
              HIBYTE(*((_WORD *)a2 + 2)),
              *((_WORD *)a2 + 2),
              *((_WORD *)a2 + 3));
            v9 = v36;
            v6 = a4;
          }
        }
        v21->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Pool2;
        v24 = IofCallDriver(*(PDEVICE_OBJECT *)(v9 + 1208), v21);
        v25 = v24;
        if ( v24 == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          v25 = v34.Status;
        }
        else
        {
          v34.Status = v24;
        }
        v26 = Pool2[1];
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v27 = *(_QWORD *)(a1 + 64);
            if ( v27 )
            {
              v28 = *(_QWORD *)(v27 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
              *(_DWORD *)v28 = 845378419;
              *(_QWORD *)(v28 + 16) = v25;
              *(_QWORD *)(v28 + 8) = 0LL;
              *(_QWORD *)(v28 + 24) = v26;
            }
          }
        }
        if ( a6 )
          *a6 = Pool2[1];
        *v6 = *((_WORD *)Pool2 + 18);
        ExFreePoolWithTag(Pool2, 0);
        if ( (UsbhLogMask & 8) != 0 && a1 )
        {
          v29 = *(_QWORD *)(a1 + 64);
          if ( v29 )
          {
            v30 = *(_QWORD *)(v29 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
            *(_DWORD *)v30 = 1046705011;
            *(_QWORD *)(v30 + 16) = v25;
            *(_QWORD *)(v30 + 8) = 0LL;
            *(_QWORD *)(v30 + 24) = 0LL;
          }
        }
        return (unsigned int)v25;
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
