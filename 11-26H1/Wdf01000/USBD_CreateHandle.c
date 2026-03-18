/*
 * XREFs of USBD_CreateHandle @ 0x140075B94
 * Callers:
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x14005E824 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x140075FE8 (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x140076168 (USBDInternal_QueryUsbVerifierSettings.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall USBD_CreateHandle(
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *TargetDeviceObject,
        unsigned int USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE__ **USBDHandle)
{
  unsigned __int8 v5; // bl
  char v6; // r13
  unsigned int v11; // edi
  POOL_TYPE v12; // ecx
  USBD_HANDLE__ *PoolWithTag; // rax
  USBD_HANDLE__ *v14; // rsi
  int InterfaceSynchronously; // eax
  int v16; // eax
  int v18; // eax
  bool v19; // zf
  void (__fastcall *v20)(_QWORD); // rax
  _USB_BUS_INTERFACE_USBDI_V1 usbBusInterface; // [rsp+40h] [rbp-C0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  v5 = 0;
  v6 = 0;
  if ( KeGetCurrentIrql() )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n");
    v11 = -1073741496;
LABEL_25:
    if ( !USBDHandle )
      return v11;
    goto LABEL_61;
  }
  if ( g_NonPagedPoolInitialized
    || (g_NonPagedPoolType = NonPagedPool,
        memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL),
        VersionInformation.dwOSVersionInfoSize = 284,
        RtlGetVersion(&VersionInformation) < 0)
    || VersionInformation.dwMajorVersion <= 6
    && (VersionInformation.dwMajorVersion != 6 || VersionInformation.dwMinorVersion < 2) )
  {
    v12 = g_NonPagedPoolType;
  }
  else
  {
    v12 = NonPagedPoolNx;
    g_NonPagedPoolType = NonPagedPoolNx;
  }
  g_NonPagedPoolInitialized = 1;
  if ( !DeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_24:
    v11 = -1073741811;
    goto LABEL_25;
  }
  if ( !TargetDeviceObject )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n");
    goto LABEL_24;
  }
  if ( USBDClientContractVersion < 0x602 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDClientContractVersion %d not supported\n", USBDClientContractVersion);
    goto LABEL_24;
  }
  if ( !PoolTag )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "PoolTag must be specified\n");
    goto LABEL_24;
  }
  if ( USBDHandle )
  {
    PoolWithTag = (USBD_HANDLE__ *)ExAllocatePoolWithTag(v12, 0xE8uLL, PoolTag);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v11 = -1073741670;
LABEL_61:
      *USBDHandle = 0LL;
      return v11;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    USBDInternal_QueryUsbVerifierSettings(DeviceObject, (_USBD_INTERFACE_V3 *)(v14 + 2), PoolTag);
    *(_DWORD *)v14 = 1145197397;
    *((_WORD *)v14 + 5) = 1539;
    *((_DWORD *)v14 + 54) = 1539;
    *((_WORD *)v14 + 4) = 200;
    *((_DWORD *)v14 + 10) = USBDClientContractVersion;
    *((_QWORD *)v14 + 7) = DeviceObject;
    *((_DWORD *)v14 + 16) = PoolTag;
    *((_QWORD *)v14 + 9) = v14;
    *((_QWORD *)v14 + 26) = TargetDeviceObject;
    *((_DWORD *)v14 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               &GUID_USBD_INTERFACE,
                               (_INTERFACE *)(v14 + 2));
    v11 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *((_DWORD *)v14 + 2) = 100794520;
      *((_DWORD *)v14 + 54) = 1538;
      v18 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              &GUID_USBD_INTERFACE,
              (_INTERFACE *)(v14 + 2));
      v11 = v18;
      if ( v18 < 0 )
      {
        v19 = g_EnableDbgPrints == 0;
        *((_DWORD *)v14 + 54) = 1536;
        if ( !v19 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v18);
        v11 = 0;
LABEL_38:
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v14);
        if ( *((_DWORD *)v14 + 54) == 1536 )
        {
          memset(&usbBusInterface, 0, sizeof(usbBusInterface));
          *(_DWORD *)&usbBusInterface.Size = 65608;
          v16 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                  DeviceObject,
                  TargetDeviceObject,
                  &USB_BUS_INTERFACE_USBDI_GUID,
                  (_INTERFACE *)&usbBusInterface);
          v11 = v16;
          if ( v16 >= 0 )
          {
            if ( usbBusInterface.IsDeviceHighSpeed )
              v5 = usbBusInterface.IsDeviceHighSpeed(usbBusInterface.BusContext);
            *((_BYTE *)v14 + 224) = v5;
            usbBusInterface.InterfaceDereference(usbBusInterface.BusContext);
          }
          else
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(
                0x4Du,
                0,
                "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
                TargetDeviceObject,
                v16);
            *((_DWORD *)v14 + 54) = -1;
            v11 = 0;
          }
        }
        else if ( (v11 & 0x80000000) != 0 )
        {
          if ( v6 )
          {
            v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)v14 + 14);
            if ( v20 )
              v20(*((_QWORD *)v14 + 6));
          }
          ExFreePoolWithTag(v14, PoolTag);
          goto LABEL_61;
        }
        *USBDHandle = v14;
        return v11;
      }
    }
    else
    {
      *((_DWORD *)v14 + 54) = *((unsigned __int16 *)v14 + 5);
    }
    v6 = 1;
    goto LABEL_38;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
  return (unsigned int)-1073741811;
}
