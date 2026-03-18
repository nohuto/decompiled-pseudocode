/*
 * XREFs of UsbhPdoPnp_DeviceUsageNotification @ 0x14005D330
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhPdo_IsDeviceExternal @ 0x140078AA4 (UsbhPdo_IsDeviceExternal.c)
 *     UsbhUpdateSqmFlags @ 0x140078CA4 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceUsageNotification(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rbx
  int Options; // r14d
  NTSTATUS Status; // edi
  struct _DEVICE_OBJECT *v7; // rcx
  PDEVICE_OBJECT AttachedDevice; // r12
  PIRP v9; // rax
  IRP *v10; // r13
  _IO_STACK_LOCATION *v11; // rax
  _IO_STACK_LOCATION *v12; // rcx
  unsigned int Flags; // eax
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // r14
  int v17; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v20[5]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int8 Lock; // [rsp+B8h] [rbp+48h]
  char IsDeviceExternal; // [rsp+C0h] [rbp+50h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+C8h] [rbp+58h]

  v4 = PdoExt((__int64)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Lock = CurrentStackLocation->Parameters.SetLock.Lock;
  IsDeviceExternal = UsbhPdo_IsDeviceExternal(DeviceObject);
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") >= 0 || !IsDeviceExternal || Options != 1 )
  {
    if ( Options <= 0 || Options > 4 )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      Status = IofCallDriver(*((PDEVICE_OBJECT *)v4 + 148), Irp);
      goto LABEL_38;
    }
LABEL_8:
    v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)v4 + 148);
    memset(&Event, 0, sizeof(Event));
    AttachedDevice = IoGetAttachedDevice(v7);
    v9 = IoAllocateIrp(AttachedDevice->StackSize, 0);
    v10 = v9;
    if ( v9 )
    {
      v9->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v11 = v10->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhDeferIrpCompletion;
      v11[-1].Context = &Event;
      v11[-1].Control = -32;
      v12 = v10->Tail.Overlay.CurrentStackLocation;
      v12[-1].MajorFunction = CurrentStackLocation->MajorFunction;
      v12[-1].MinorFunction = CurrentStackLocation->MinorFunction;
      v12[-1].FileObject = CurrentStackLocation->FileObject;
      v12[-1].Parameters.SetLock.Lock = Lock;
      v12[-1].Parameters.Create.Options = Options;
      if ( IofCallDriver(AttachedDevice, v10) == 259 )
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = v10->IoStatus.Status;
      IoFreeIrp(v10);
      if ( Status >= 0 )
      {
        if ( (unsigned int)(Options - 1) <= 2 )
        {
          if ( Lock )
            _InterlockedIncrement(v4 + 684);
          else
            _InterlockedDecrement(v4 + 684);
          if ( Options == 2 )
          {
            if ( Lock )
              _InterlockedIncrement(v4 + 700);
            else
              _InterlockedDecrement(v4 + 700);
          }
          Flags = DeviceObject->Flags;
          if ( v4[684] )
            v14 = Flags & 0xFFFFDFFF;
          else
            v14 = Flags | 0x2000;
          DeviceObject->Flags = v14;
        }
        if ( Options == 1 && CurrentStackLocation->Parameters.SetLock.Lock )
          goto LABEL_28;
      }
    }
    else
    {
      Status = -1073741670;
    }
    if ( Options != 4 )
      goto LABEL_36;
LABEL_28:
    if ( RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT") < 0 && !*((_BYTE *)v4 + 2740) )
    {
      if ( IsDeviceExternal == 1 )
      {
        v20[1] = DeviceObject->DriverObject;
        v20[0] = 1LL;
        v20[3] = ExIsBootDeviceReady;
        v20[4] = UsbhPdoCheckBootDeviceReady;
        v20[2] = DeviceObject;
        v15 = ExRegisterBootDevice(v20, v4 + 688);
        v16 = v15;
        if ( v15 < 0 && !KdRefreshDebuggerNotPresent() )
        {
          DbgPrint("ExRegisterBootDevice failed with 0x%x\n", v16);
          __debugbreak();
        }
        Log(*((_QWORD *)v4 + 148), 256, 1431454276, v16, (__int64)DeviceObject);
      }
      *((_BYTE *)v4 + 2740) = 1;
    }
    goto LABEL_36;
  }
  if ( *((_BYTE *)v4 + 2740) )
    goto LABEL_8;
  Status = -1073741637;
LABEL_36:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
LABEL_38:
  if ( v4[684] )
  {
    v17 = v4[701];
    if ( (v17 & 0x10) == 0 )
    {
      v4[701] = v17 | 0x10;
      UsbhUpdateSqmFlags(DeviceObject);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      Status);
  return (unsigned int)Status;
}
