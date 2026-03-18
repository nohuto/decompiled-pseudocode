/*
 * XREFs of UsbhPdoPnp_StartDevice @ 0x140017090
 * Callers:
 *     UsbhPdoPnp @ 0x140034700 (UsbhPdoPnp.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhDisableTimerObject @ 0x14000C938 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x140016858 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhPdoSetDeviceData @ 0x140017554 (UsbhPdoSetDeviceData.c)
 *     UsbhSetPdo_AllowIo @ 0x140017608 (UsbhSetPdo_AllowIo.c)
 *     UsbhPdoPnp_EnablePdo @ 0x14003A400 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhEtwLogDeviceDescription @ 0x14003AAB4 (UsbhEtwLogDeviceDescription.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 *     UsbhReadPdoRegistryKeys @ 0x1400527E4 (UsbhReadPdoRegistryKeys.c)
 *     UsbhPdoRegisterWmi @ 0x1400556A4 (UsbhPdoRegisterWmi.c)
 *     UsbhPdoCreateSymbolicLink @ 0x14005CAB0 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdo_ResetDriverProblemDesc @ 0x14005D880 (UsbhPdo_ResetDriverProblemDesc.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 *     UsbhUpdateSqmFlags @ 0x140077BC0 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_StartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rdi
  int v5; // edx
  __int64 v6; // rcx
  NTSTATUS DeviceProperty; // ebx
  __int64 *v8; // r14
  _DWORD *v9; // rax
  _QWORD *v10; // r13
  void *v11; // rcx
  __int64 v12; // rcx
  void *Pool2; // r15
  _DWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  _DWORD *v17; // rax
  NTSTATUS v18; // eax
  const EVENT_DESCRIPTOR *v19; // r8
  GUID *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG ResultLength; // [rsp+98h] [rbp+10h] BYREF
  int v25; // [rsp+A0h] [rbp+18h] BYREF

  ResultLength = 0;
  v4 = PdoExt((__int64)DeviceObject);
  UsbhEtwLogDeviceIrpEvent((__int64)v4, (__int64)Irp, &USBHUB_ETW_EVENT_DEVICE_START_DISPATCH, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1,
      14,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
      (char)DeviceObject);
  if ( PdoExt((__int64)DeviceObject)[280] == 101 )
  {
    DeviceProperty = 0;
    v8 = (__int64 *)(v4 + 296);
    goto LABEL_36;
  }
  UsbhSetPdo_AllowIo(v6, DeviceObject);
  v8 = (__int64 *)(v4 + 296);
  UsbhDisableTimerObject(*((_QWORD *)v4 + 148), (__int64)(v4 + 426));
  v9 = PdoExt((__int64)DeviceObject);
  v10 = (_QWORD *)UsbhIncHubBusy(*((_QWORD *)v4 + 148), (__int64)(v9 + 236), (__int64)DeviceObject, 1346728819, 1);
  KeWaitForSingleObject(v4 + 724, Executive, 0, 0, 0LL);
  DeviceProperty = UsbhPdoPnp_EnablePdo(DeviceObject);
  if ( PdoExt((__int64)DeviceObject)[280] == 103 || PdoExt((__int64)DeviceObject)[280] == 102 )
  {
    UsbhPdo_ResetDriverProblemDesc(DeviceObject);
    if ( (v4[283] & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_19;
    }
  }
  if ( (DeviceProperty & 0xC0000000) == 0xC0000000 || PdoExt((__int64)DeviceObject)[280] == 103 )
    goto LABEL_19;
  v11 = (void *)*((_QWORD *)v4 + 280);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v4 + 280) = 0LL;
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
    *((_QWORD *)v4 + 280) = Pool2;
    v4[562] = ResultLength;
    UsbhEtwLogDeviceDescription(v4, &USBHUB_ETW_EVENT_DEVICE_START_DEVICE_DESCRIPTION);
  }
  DeviceProperty = UsbhReadPdoRegistryKeys(v12, DeviceObject);
  if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
  {
    v19 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_START_REGISTRY_FAILURE;
LABEL_29:
    UsbhEtwLogDeviceIrpEvent((__int64)v4, (__int64)Irp, v19, DeviceProperty);
    goto LABEL_19;
  }
  v20 = &GUID_DEVINTERFACE_USB_HUB;
  if ( (v4[355] & 4) == 0 )
    v20 = &GUID_DEVINTERFACE_USB_DEVICE;
  DeviceProperty = UsbhPdoCreateSymbolicLink(DeviceObject, v20);
  if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
  {
    v19 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_START_SYMBOLIC_LINK_FAILURE;
    goto LABEL_29;
  }
  UsbhPdoRegisterWmi(DeviceObject);
LABEL_19:
  v14 = PdoExt((__int64)DeviceObject);
  v15 = ((unsigned __int8)v14[3] + 1) & 7;
  v14[3] = v15;
  v15 *= 32LL;
  *(_DWORD *)((char *)v14 + v15 + 528) = 1;
  *(_DWORD *)((char *)v14 + v15 + 532) = v14[280];
  *(_DWORD *)((char *)v14 + v15 + 536) = 101;
  v14[280] = 101;
  KeSetEvent((PRKEVENT)(v4 + 724), 0, 0);
  PdoExt((__int64)DeviceObject);
  UsbhDecHubBusy(*v8, v16, v10);
  UsbhPdoSetDeviceData(*v8, DeviceObject, DeviceObject);
  v25 = *((unsigned __int16 *)v4 + 714);
  if ( dword_14006F570 )
  {
    v17 = FdoExt(*v8);
    if ( *((_QWORD *)v17 + 554) )
    {
      v18 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *))v17 + 554))(
              *((_QWORD *)v17 + 529),
              0LL,
              2LL,
              &v25);
      if ( v18 )
        DeviceProperty = v18;
    }
  }
  if ( DeviceProperty < 0 )
  {
    UsbhException(*v8, *((_WORD *)v4 + 714), 103, 0LL, 0, DeviceProperty, 0, usbfile_pdo_c, 1564, 0);
  }
  else if ( (v4[355] & 1) != 0 )
  {
    UsbhException(*v8, *((_WORD *)v4 + 714), 42, 0LL, 0, DeviceProperty, 0, usbfile_pdo_c, 1548, 0);
  }
LABEL_36:
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( *v8 )
    {
      v21 = *(_QWORD *)(*v8 + 64);
      if ( v21 )
      {
        v25 = 1012028499;
        v22 = *(_QWORD *)(v21 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
        *(_DWORD *)v22 = v25;
        *(_QWORD *)(v22 + 24) = DeviceProperty;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = Irp;
      }
    }
  }
  UsbhEtwLogDeviceIrpEvent((__int64)v4, (__int64)Irp, (const EVENT_DESCRIPTOR *)"w", 0);
  Irp->IoStatus.Status = DeviceProperty;
  IofCompleteRequest(Irp, 0);
  UsbhUpdateSqmFlags(DeviceObject);
  return (unsigned int)DeviceProperty;
}
