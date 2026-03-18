/*
 * XREFs of UsbhPdoPnp_StartDevice @ 0x14000EDC0
 * Callers:
 *     UsbhPdoPnp @ 0x14002F8D0 (UsbhPdoPnp.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x14000F910 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhPdoSetDeviceData @ 0x1400105DC (UsbhPdoSetDeviceData.c)
 *     UsbhSetPdo_AllowIo @ 0x140010690 (UsbhSetPdo_AllowIo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhPdoPnp_EnablePdo @ 0x140039E34 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhEtwLogDeviceDescription @ 0x14003A514 (UsbhEtwLogDeviceDescription.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 *     UsbhReadPdoRegistryKeys @ 0x140052CE0 (UsbhReadPdoRegistryKeys.c)
 *     UsbhPdoRegisterWmi @ 0x140055C14 (UsbhPdoRegisterWmi.c)
 *     UsbhPdoCreateSymbolicLink @ 0x14005D090 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdo_ResetDriverProblemDesc @ 0x14005DE84 (UsbhPdo_ResetDriverProblemDesc.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 *     UsbhUpdateSqmFlags @ 0x140078CA4 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_StartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 v4; // rdi
  int v5; // edx
  __int64 v6; // rcx
  NTSTATUS DeviceProperty; // ebx
  _QWORD *v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r13
  void *v13; // rcx
  __int64 v14; // rcx
  void *Pool2; // r15
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  NTSTATUS v23; // eax
  void *v24; // r8
  GUID *v25; // rdx
  __int64 v26; // rdx
  signed __int32 v27; // eax
  unsigned int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // r8
  ULONG ResultLength; // [rsp+98h] [rbp+10h] BYREF
  int v33; // [rsp+A0h] [rbp+18h] BYREF

  ResultLength = 0;
  v4 = PdoExt(DeviceObject);
  UsbhEtwLogDeviceIrpEvent(v4, Irp, &USBHUB_ETW_EVENT_DEVICE_START_DISPATCH, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1,
      14,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      (char)DeviceObject);
  if ( *(_DWORD *)(PdoExt(DeviceObject) + 1120) == 101 )
  {
    DeviceProperty = 0;
    v8 = (_QWORD *)(v4 + 1184);
    goto LABEL_37;
  }
  UsbhSetPdo_AllowIo(v6, DeviceObject);
  v8 = (_QWORD *)(v4 + 1184);
  UsbhDisableTimerObject(*(_QWORD *)(v4 + 1184), v4 + 1704, v9, v10);
  v11 = PdoExt(DeviceObject);
  v12 = UsbhIncHubBusy(*(_QWORD *)(v4 + 1184), v11 + 944, (_DWORD)DeviceObject, 1346728819, 1);
  KeWaitForSingleObject((PVOID)(v4 + 2896), Executive, 0, 0, 0LL);
  DeviceProperty = UsbhPdoPnp_EnablePdo(DeviceObject);
  if ( *(_DWORD *)(PdoExt(DeviceObject) + 1120) == 103 || *(_DWORD *)(PdoExt(DeviceObject) + 1120) == 102 )
  {
    UsbhPdo_ResetDriverProblemDesc(DeviceObject);
    if ( (*(_DWORD *)(v4 + 1132) & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_19;
    }
  }
  if ( (DeviceProperty & 0xC0000000) == 0xC0000000 || *(_DWORD *)(PdoExt(DeviceObject) + 1120) == 103 )
    goto LABEL_19;
  v13 = *(void **)(v4 + 2240);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(v4 + 2240) = 0LL;
  }
  DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
  if ( DeviceProperty == -1073741789 && ResultLength )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, ResultLength, 1112885333LL);
    if ( !Pool2 )
      goto LABEL_19;
    DeviceProperty = IoGetDeviceProperty(
                       DeviceObject,
                       DevicePropertyDeviceDescription,
                       ResultLength,
                       Pool2,
                       &ResultLength);
    if ( DeviceProperty < 0 )
    {
      ExFreePoolWithTag(Pool2, 0);
      goto LABEL_19;
    }
    *(_QWORD *)(v4 + 2240) = Pool2;
    *(_DWORD *)(v4 + 2248) = ResultLength;
    UsbhEtwLogDeviceDescription(v4, &USBHUB_ETW_EVENT_DEVICE_START_DEVICE_DESCRIPTION);
  }
  DeviceProperty = UsbhReadPdoRegistryKeys(v14, DeviceObject);
  if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
  {
    v24 = &USBHUB_ETW_EVENT_DEVICE_START_REGISTRY_FAILURE;
LABEL_30:
    UsbhEtwLogDeviceIrpEvent(v4, Irp, v24, (unsigned int)DeviceProperty);
    goto LABEL_19;
  }
  v25 = &GUID_DEVINTERFACE_USB_HUB;
  if ( (*(_DWORD *)(v4 + 1420) & 4) == 0 )
    v25 = &GUID_DEVINTERFACE_USB_DEVICE;
  DeviceProperty = UsbhPdoCreateSymbolicLink(DeviceObject, v25);
  if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
  {
    v24 = &USBHUB_ETW_EVENT_DEVICE_START_SYMBOLIC_LINK_FAILURE;
    goto LABEL_30;
  }
  UsbhPdoRegisterWmi(DeviceObject);
LABEL_19:
  v16 = PdoExt(DeviceObject);
  v17 = ((unsigned __int8)*(_DWORD *)(v16 + 12) + 1) & 7;
  *(_DWORD *)(v16 + 12) = v17;
  v17 *= 32LL;
  *(_DWORD *)(v17 + v16 + 528) = 1;
  *(_DWORD *)(v17 + v16 + 532) = *(_DWORD *)(v16 + 1120);
  *(_DWORD *)(v17 + v16 + 536) = 101;
  *(_DWORD *)(v16 + 1120) = 101;
  KeSetEvent((PRKEVENT)(v4 + 2896), 0, 0);
  PdoExt(DeviceObject);
  UsbhDecHubBusy(*v8, v18, v12);
  UsbhPdoSetDeviceData(*v8, DeviceObject, DeviceObject);
  v33 = *(unsigned __int16 *)(v4 + 1428);
  if ( dword_1400705D0 )
  {
    v22 = FdoExt(*v8, v19, v20, v21);
    if ( *(_QWORD *)(v22 + 4432) )
    {
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *))(v22 + 4432))(
              *(_QWORD *)(v22 + 4232),
              0LL,
              2LL,
              &v33);
      if ( !v23 )
        v23 = DeviceProperty;
      DeviceProperty = v23;
    }
  }
  if ( DeviceProperty < 0 )
  {
    UsbhException(*v8, *(unsigned __int16 *)(v4 + 1428), 103, 0, 0, DeviceProperty, 0, (__int64)usbfile_pdo_c, 1564, 0);
  }
  else if ( (*(_DWORD *)(v4 + 1420) & 1) != 0 )
  {
    UsbhException(*v8, *(unsigned __int16 *)(v4 + 1428), 42, 0, 0, DeviceProperty, 0, (__int64)usbfile_pdo_c, 1548, 0);
  }
LABEL_37:
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( *v8 )
    {
      v26 = *(_QWORD *)(*v8 + 64LL);
      if ( v26 )
      {
        v33 = 1012028499;
        v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 880), 0xFFFFFFFF);
        v28 = *(_DWORD *)(v26 + 884);
        v29 = *(_QWORD *)(v26 + 888);
        v30 = 32LL * ((v27 - 1) & v28);
        *(_DWORD *)(v30 + v29) = v33;
        *(_QWORD *)(v30 + v29 + 8) = 0LL;
        *(_QWORD *)(v30 + v29 + 16) = Irp;
        *(_QWORD *)(v30 + v29 + 24) = DeviceProperty;
      }
    }
  }
  UsbhEtwLogDeviceIrpEvent(v4, Irp, &USBHUB_ETW_EVENT_DEVICE_START_COMPLETE, 0LL);
  Irp->IoStatus.Status = DeviceProperty;
  IofCompleteRequest(Irp, 0);
  UsbhUpdateSqmFlags(DeviceObject);
  return (unsigned int)DeviceProperty;
}
