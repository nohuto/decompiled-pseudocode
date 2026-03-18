/*
 * XREFs of UsbhFdoPower_WaitWake @ 0x14000B1F0
 * Callers:
 *     UsbhFdoPowerWorkerInternal @ 0x1400336E8 (UsbhFdoPowerWorkerInternal.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhFdoPower_WaitWake(PDEVICE_OBJECT DeviceObject, __int64 Irp, __int64 a3, __int64 a4)
{
  PIRP v4; // rbx
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rbp
  volatile signed __int32 *v13; // rcx
  signed __int32 v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v19; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v21; // rax
  struct _DEVICE_OBJECT *v22; // rcx

  v4 = (PIRP)Irp;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v7 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v8 = *((_DWORD *)DeviceExtension + 221);
        v9 = *((_QWORD *)DeviceExtension + 111);
        Irp = 32LL * ((v7 - 1) & v8);
        *(_DWORD *)(Irp + v9) = 727144294;
        *(_QWORD *)(Irp + v9 + 8) = 0LL;
        *(_QWORD *)(Irp + v9 + 16) = 0LL;
        *(_QWORD *)(Irp + v9 + 24) = v4;
      }
    }
  }
  v10 = FdoExt(DeviceObject, Irp, a3, a4);
  UsbhEtwLogHubIrpEvent(DeviceObject, v4, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_DISPATCH, 0, 0);
  v11 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 1224), v4, File, 1u, 0x20u);
  v12 = v11;
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    v4->IoStatus.Status = v11;
    if ( (UsbhLogMask & 0x10) != 0 && DeviceObject )
    {
      v13 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( v13 )
      {
        v14 = _InterlockedExchangeAdd(v13 + 220, 0xFFFFFFFF);
        v15 = *((_DWORD *)v13 + 221);
        v16 = *((_QWORD *)v13 + 111);
        v17 = 32LL * ((v14 - 1) & v15);
        *(_DWORD *)(v17 + v16) = 1918326630;
        *(_QWORD *)(v17 + v16 + 8) = 0LL;
        *(_QWORD *)(v17 + v16 + 16) = v12;
        *(_QWORD *)(v17 + v16 + 24) = v4;
      }
    }
    UsbhEtwLogHubIrpEvent(DeviceObject, v4, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE, 0, v12);
    IofCompleteRequest(v4, 0);
    return (unsigned int)v12;
  }
  else
  {
    *(_QWORD *)(v10 + 4888) = v4;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 4884), 4, 2) == 3 )
    {
      *(_DWORD *)(v10 + 4884) = 7;
      Log((__int64)DeviceObject, 16, 1716999985, 0LL, (__int64)v4);
      UsbhEtwLogHubIrpEvent(DeviceObject, v4, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE, v19, -1073741536);
      v4->IoStatus.Status = -1073741536;
      IofCompleteRequest(v4, 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 1224), v4, 0x20u);
      return 3221225760LL;
    }
    else
    {
      v4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      if ( IoSetCompletionRoutineEx(DeviceObject, v4, UsbhFdoWaitWake_IoCompletion, 0LL, 1u, 1u, 1u) < 0 )
      {
        v21 = v4->Tail.Overlay.CurrentStackLocation;
        v21[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoWaitWake_IoCompletion;
        v21[-1].Context = 0LL;
        v21[-1].Control = -32;
      }
      Log((__int64)DeviceObject, 16, 1716999986, 0LL, (__int64)v4);
      v22 = *(struct _DEVICE_OBJECT **)(v10 + 1208);
      *(_DWORD *)(v10 + 2560) &= ~0x20000u;
      PoCallDriver(v22, v4);
      return 259LL;
    }
  }
}
