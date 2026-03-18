/*
 * XREFs of UsbhFdoPower_WaitWake @ 0x140036A90
 * Callers:
 *     UsbhFdoPowerWorkerInternal @ 0x140035468 (UsbhFdoPowerWorkerInternal.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

__int64 __fastcall UsbhFdoPower_WaitWake(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  void *DeviceExtension; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rsi
  __int64 v7; // rbp
  void *v8; // rdx
  __int64 v9; // rcx
  int v11; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v13; // rax
  struct _DEVICE_OBJECT *v14; // rcx
  int RemlockSizea; // [rsp+20h] [rbp-38h]
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-38h]
  int RemlockSizeb; // [rsp+20h] [rbp-38h]
  ULONG RemlockSizec[2]; // [rsp+20h] [rbp-38h]
  BOOLEAN InvokeOnErrora[4]; // [rsp+28h] [rbp-30h]
  __int64 InvokeOnError; // [rsp+28h] [rbp-30h]

  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v5 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_QWORD *)(v5 + 8) = 0LL;
        *(_QWORD *)(v5 + 16) = 0LL;
        *(_DWORD *)v5 = 727144294;
        *(_QWORD *)(v5 + 24) = Irp;
      }
    }
  }
  *(_DWORD *)InvokeOnErrora = 0;
  RemlockSizea = 0;
  v6 = FdoExt((__int64)DeviceObject);
  UsbhEtwLogHubIrpEvent(
    (__int64)DeviceObject,
    (__int64)Irp,
    0LL,
    &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_DISPATCH,
    RemlockSizea,
    *(_DWORD *)InvokeOnErrora);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 306), Irp, File, 1u, 0x20u);
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v7;
    if ( (UsbhLogMask & 0x10) != 0 && DeviceObject )
    {
      v8 = DeviceObject->DeviceExtension;
      if ( v8 )
      {
        v9 = *((_QWORD *)v8 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)v9 = 1918326630;
        *(_QWORD *)(v9 + 16) = v7;
        *(_QWORD *)(v9 + 24) = Irp;
      }
    }
    LODWORD(InvokeOnError) = v7;
    RemlockSize[0] = 0;
    UsbhEtwLogHubIrpEvent(
      (__int64)DeviceObject,
      (__int64)Irp,
      0LL,
      &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE,
      *(_QWORD *)RemlockSize,
      InvokeOnError);
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v7;
  }
  else
  {
    *((_QWORD *)v6 + 611) = Irp;
    if ( _InterlockedCompareExchange(v6 + 1221, 4, 2) == 3 )
    {
      v6[1221] = 7;
      Log((__int64)DeviceObject, 16, 1716999985, 0LL, (__int64)Irp);
      LODWORD(InvokeOnError) = -1073741536;
      RemlockSizec[0] = v11 & RemlockSizeb;
      UsbhEtwLogHubIrpEvent(
        (__int64)DeviceObject,
        (__int64)Irp,
        0LL,
        &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_COMPLETE,
        *(_QWORD *)RemlockSizec,
        InvokeOnError);
      Irp->IoStatus.Status = -1073741536;
      IofCompleteRequest(Irp, 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 306), Irp, 0x20u);
      return 3221225760LL;
    }
    else
    {
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      if ( IoSetCompletionRoutineEx(
             DeviceObject,
             Irp,
             (PIO_COMPLETION_ROUTINE)UsbhFdoWaitWake_IoCompletion,
             0LL,
             1u,
             1u,
             1u) < 0 )
      {
        v13 = Irp->Tail.Overlay.CurrentStackLocation;
        v13[-1].Context = 0LL;
        v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoWaitWake_IoCompletion;
        v13[-1].Control = -32;
      }
      Log((__int64)DeviceObject, 16, 1716999986, 0LL, (__int64)Irp);
      v14 = (struct _DEVICE_OBJECT *)*((_QWORD *)v6 + 151);
      v6[640] &= ~0x20000u;
      PoCallDriver(v14, Irp);
      return 259LL;
    }
  }
}
