/*
 * XREFs of USBD_CreateHandle @ 0x140044304
 * Callers:
 *     HUBFDO_SetupHubPostErrataQuery @ 0x14000F100 (HUBFDO_SetupHubPostErrataQuery.c)
 * Callees:
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x140043A7C (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x140043F8C (USBDInternal_QueryUsbVerifierSettings.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

NTSTATUS __stdcall USBD_CreateHandle(
        PDEVICE_OBJECT DeviceObject,
        PDEVICE_OBJECT TargetDeviceObject,
        ULONG USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE *USBDHandle)
{
  char v5; // bl
  char v6; // r12
  NTSTATUS v9; // edi
  POOL_TYPE v10; // ecx
  USBD_HANDLE PoolWithTag; // rax
  USBD_HANDLE v12; // rsi
  int InterfaceSynchronously; // eax
  int v14; // eax
  int v16; // eax
  bool v17; // zf
  void (__fastcall *v18)(_QWORD); // rax
  _QWORD v19[10]; // [rsp+30h] [rbp-D0h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+80h] [rbp-80h] BYREF

  v5 = 0;
  v6 = 0;
  if ( !KeGetCurrentIrql() )
  {
    if ( byte_140070CF5
      || (PoolType = NonPagedPool,
          memset(&VersionInformation.dwMajorVersion, 0, 0x118uLL),
          VersionInformation.dwOSVersionInfoSize = 284,
          RtlGetVersion(&VersionInformation) < 0)
      || VersionInformation.dwMajorVersion <= 6
      && (VersionInformation.dwMajorVersion != 6 || VersionInformation.dwMinorVersion < 2) )
    {
      v10 = PoolType;
    }
    else
    {
      v10 = NonPagedPoolNx;
      PoolType = NonPagedPoolNx;
    }
    byte_140070CF5 = 1;
    if ( !DeviceObject )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_18:
      v9 = -1073741811;
      goto LABEL_19;
    }
    if ( !TargetDeviceObject )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n");
      goto LABEL_18;
    }
    if ( !USBDHandle )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
      return -1073741811;
    }
    PoolWithTag = (USBD_HANDLE)ExAllocatePoolWithTag(v10, 0xE8uLL, 0x68334855u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v9 = -1073741670;
      goto LABEL_55;
    }
    memset(PoolWithTag, 0, 0xE8uLL);
    USBDInternal_QueryUsbVerifierSettings((__int64)DeviceObject, (__int64)(v12 + 2));
    *(_DWORD *)v12 = 1145197397;
    *((_WORD *)v12 + 5) = 1539;
    *((_DWORD *)v12 + 54) = 1539;
    *((_WORD *)v12 + 4) = 200;
    *((_DWORD *)v12 + 10) = 1538;
    *((_QWORD *)v12 + 7) = DeviceObject;
    *((_DWORD *)v12 + 16) = 1748191317;
    *((_QWORD *)v12 + 9) = v12;
    *((_QWORD *)v12 + 26) = TargetDeviceObject;
    *((_DWORD *)v12 + 55) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               (unsigned __int64)&GUID_USBD_INTERFACE,
                               (unsigned __int16 *)v12 + 4);
    v9 = InterfaceSynchronously;
    if ( InterfaceSynchronously < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_603, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      *((_WORD *)v12 + 4) = 152;
      *((_WORD *)v12 + 5) = 1538;
      *((_DWORD *)v12 + 54) = 1538;
      v16 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              (unsigned __int64)&GUID_USBD_INTERFACE,
              (unsigned __int16 *)v12 + 4);
      v9 = v16;
      if ( v16 < 0 )
      {
        v17 = g_EnableDbgPrints == 0;
        *((_DWORD *)v12 + 54) = 1536;
        if ( !v17 )
          DbgPrintEx(
            0x4Du,
            3u,
            "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
            TargetDeviceObject,
            v16);
        v9 = 0;
        goto LABEL_32;
      }
    }
    else
    {
      *((_DWORD *)v12 + 54) = *((unsigned __int16 *)v12 + 5);
    }
    v6 = 1;
LABEL_32:
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v12);
    if ( *((_DWORD *)v12 + 54) == 1536 )
    {
      memset(v19, 0, 0x48uLL);
      LODWORD(v19[0]) = 65608;
      v14 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID,
              (unsigned __int16 *)v19);
      v9 = v14;
      if ( v14 >= 0 )
      {
        if ( v19[8] )
          v5 = ((__int64 (__fastcall *)(_QWORD))v19[8])(v19[1]);
        *((_BYTE *)v12 + 224) = v5;
        ((void (__fastcall *)(_QWORD))v19[3])(v19[1]);
      }
      else
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(
            0x4Du,
            0,
            "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
            TargetDeviceObject,
            v14);
        *((_DWORD *)v12 + 54) = -1;
        v9 = 0;
      }
    }
    else if ( v9 < 0 )
    {
      if ( v6 )
      {
        v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)v12 + 14);
        if ( v18 )
          v18(*((_QWORD *)v12 + 6));
      }
      ExFreePoolWithTag(v12, 0x68334855u);
      goto LABEL_55;
    }
    *USBDHandle = v12;
    return v9;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "Irql Too High\n");
  v9 = -1073741496;
LABEL_19:
  if ( USBDHandle )
LABEL_55:
    *USBDHandle = 0LL;
  return v9;
}
