/*
 * XREFs of USBDInternal_QueryUsbVerifierSettings @ 0x140076168
 * Callers:
 *     USBD_CreateHandle @ 0x140075B94 (USBD_CreateHandle.c)
 * Callees:
 *     USBDInternal_BuildServicePath @ 0x1400764DC (USBDInternal_BuildServicePath.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

void __fastcall USBDInternal_QueryUsbVerifierSettings(
        _DEVICE_OBJECT *DeviceObject,
        _USBD_INTERFACE_V3 *Interface,
        unsigned int PoolTag)
{
  unsigned int *p_UsbVerifierEnabled; // r13
  struct _DRIVER_OBJECT *DriverObject; // rcx
  wchar_t *v6; // r14
  PVOID SystemRoutineAddress; // rax
  PVOID v10; // r12
  int v11; // eax
  int v12; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rsi
  unsigned int *p_UsbVerifierFailSecureTransferSupport; // rax
  void *v16; // rdi
  PVOID v17; // rax
  int v18; // eax
  _UNICODE_STRING funcName; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  wchar_t *relativeServicePath; // [rsp+90h] [rbp+40h] BYREF
  void *regKey; // [rsp+98h] [rbp+48h] BYREF

  p_UsbVerifierEnabled = &Interface->UsbVerifierEnabled;
  DriverObject = DeviceObject->DriverObject;
  v6 = 0LL;
  relativeServicePath = 0LL;
  regKey = 0LL;
  funcName = 0LL;
  Interface->UsbVerifierEnabled = MmIsDriverVerifying(DriverObject);
  RtlInitUnicodeString(&funcName, L"IoOpenDriverRegistryKey");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&funcName);
  v10 = SystemRoutineAddress;
  if ( SystemRoutineAddress )
  {
    v11 = ((__int64 (__fastcall *)(_DRIVER_OBJECT *, _QWORD, __int64, _QWORD, void **))SystemRoutineAddress)(
            DeviceObject->DriverObject,
            0LL,
            1LL,
            0LL,
            &regKey);
    if ( v11 < 0 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "IoOpenDriverRegistryKey failed with 0x%x\n", v11);
      goto LABEL_19;
    }
    goto LABEL_6;
  }
  v12 = USBDInternal_BuildServicePath(DeviceObject, &relativeServicePath, PoolTag);
  v6 = relativeServicePath;
  if ( v12 >= 0 )
  {
LABEL_6:
    PoolWithTag = ExAllocatePoolWithTag(g_NonPagedPoolType, 0x1C0uLL, PoolTag);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x1C0uLL);
      v14[3] = p_UsbVerifierEnabled;
      *v14 = USBD_VerifierSettingsCallback;
      v14[2] = L"UsbVerifierEnabled";
      *((_DWORD *)v14 + 8) = 4;
      *((_DWORD *)v14 + 12) = 4;
      v14[5] = p_UsbVerifierEnabled;
      v14[9] = L"UsbVerifierFailRegistration";
      v14[10] = &Interface->UsbVerifierFailRegistration;
      v14[12] = &Interface->UsbVerifierFailRegistration;
      v14[7] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v14 + 22) = 4;
      *((_DWORD *)v14 + 26) = 4;
      v14[16] = L"UsbVerifierFailChainedMdlSupport";
      v14[17] = &Interface->UsbVerifierFailChainedMdlSupport;
      v14[19] = &Interface->UsbVerifierFailChainedMdlSupport;
      v14[14] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v14 + 36) = 4;
      *((_DWORD *)v14 + 40) = 4;
      v14[23] = L"UsbVerifierFailStaticStreamSupport";
      v14[24] = &Interface->UsbVerifierFailStaticStreamSupport;
      v14[26] = &Interface->UsbVerifierFailStaticStreamSupport;
      v14[21] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v14 + 50) = 4;
      *((_DWORD *)v14 + 54) = 4;
      v14[30] = L"UsbVerifierStaticStreamCountOverride";
      v14[31] = &Interface->UsbVerifierStaticStreamCountOverride;
      v14[33] = &Interface->UsbVerifierStaticStreamCountOverride;
      v14[28] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v14 + 64) = 4;
      *((_DWORD *)v14 + 68) = 4;
      v14[37] = L"UsbVerifierFailEnableStaticStreams";
      v14[38] = &Interface->UsbVerifierFailEnableStaticStreams;
      v14[40] = &Interface->UsbVerifierFailEnableStaticStreams;
      v14[35] = USBD_VerifierSettingsCallback;
      *((_DWORD *)v14 + 78) = 4;
      *((_DWORD *)v14 + 82) = 4;
      v14[44] = L"UsbVerifierFailSecureTransferSupport";
      p_UsbVerifierFailSecureTransferSupport = &Interface->UsbVerifierFailSecureTransferSupport;
      v14[42] = USBD_VerifierSettingsCallback;
      v16 = v6;
      *((_DWORD *)v14 + 92) = 4;
      *((_DWORD *)v14 + 96) = 4;
      v14[45] = p_UsbVerifierFailSecureTransferSupport;
      v14[47] = p_UsbVerifierFailSecureTransferSupport;
      if ( v10 )
        v16 = regKey;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      v17 = MmGetSystemRoutineAddress(&DestinationString);
      if ( !v17 )
        v17 = RtlQueryRegistryValues;
      v18 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD *, _QWORD, _QWORD))v17)(
              v10 != 0LL ? 0x40000000 : 1,
              v16,
              v14,
              0LL,
              0LL);
      if ( v18 < 0 && g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "RtlQueryRegistrySettings failed, ignoring this error0x%x\n", v18);
      ExFreePoolWithTag(v14, PoolTag);
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "ExAllocatePoolWithTag for USBDInternal_QueryUsbVerifierSettings failed\n");
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, PoolTag);
LABEL_19:
  if ( regKey )
    ZwClose(regKey);
}
