/*
 * XREFs of ACPIInternalSetDeviceInterface @ 0x14004E790
 * Callers:
 *     ACPICMButtonStartWorker @ 0x14005BE90 (ACPICMButtonStartWorker.c)
 *     ACPIProcessorStartDeviceWorker @ 0x1400673B0 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIFanStartDevice @ 0x1400A89C0 (ACPIFanStartDevice.c)
 *     ACPIButtonStartDevice @ 0x1400AA460 (ACPIButtonStartDevice.c)
 *     ACPIRootInitialize @ 0x1400B9B0C (ACPIRootInitialize.c)
 *     ACPIThermalStartDevice @ 0x1400BAC70 (ACPIThermalStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIInternalSetDeviceInterface(PDEVICE_OBJECT PhysicalDeviceObject, GUID *InterfaceClassGuid)
{
  __int64 v4; // rax
  char v5; // di
  _QWORD *DeviceExtension; // rbx
  NTSTATUS v7; // esi
  const char *v8; // rcx
  const char *v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // r9
  __int64 v12; // r8
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+50h] [rbp-18h] BYREF

  SymbolicLinkName = 0LL;
  v4 = *(_QWORD *)&InterfaceClassGuid->Data1 - *(_QWORD *)&GUID_ACPI_ROOT_DEVICE_UUID.Data1;
  if ( *(_QWORD *)&InterfaceClassGuid->Data1 == *(_QWORD *)&GUID_ACPI_ROOT_DEVICE_UUID.Data1 )
    v4 = *(_QWORD *)InterfaceClassGuid->Data4 - *(_QWORD *)GUID_ACPI_ROOT_DEVICE_UUID.Data4;
  v5 = 0;
  if ( v4 )
    DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  else
    DeviceExtension = (_QWORD *)RootDeviceExtension;
  v7 = IoRegisterDeviceInterface(PhysicalDeviceObject, InterfaceClassGuid, 0LL, &SymbolicLinkName);
  if ( v7 >= 0 )
  {
    v7 = IoSetDeviceInterfaceState(&SymbolicLinkName, 1u);
    RtlFreeUnicodeString(&SymbolicLinkName);
    if ( v7 < 0 )
    {
      v8 = byte_140075A82;
      v9 = byte_140075A82;
      if ( DeviceExtension )
      {
        v12 = DeviceExtension[1];
        v5 = (char)DeviceExtension;
        if ( (v12 & 0x200000000000LL) != 0 )
        {
          v8 = (const char *)DeviceExtension[76];
          if ( (v12 & 0x400000000000LL) != 0 )
            v9 = (const char *)DeviceExtension[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 14;
        goto LABEL_20;
      }
    }
  }
  else
  {
    v8 = byte_140075A82;
    v9 = byte_140075A82;
    if ( DeviceExtension )
    {
      v10 = DeviceExtension[1];
      v5 = (char)DeviceExtension;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = (const char *)DeviceExtension[76];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (const char *)DeviceExtension[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 13;
LABEL_20:
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        v11,
        (__int64)&WPP_d6bb3916a2893b5fc21aa06e27a6e069_Traceguids,
        v7,
        v5,
        v8,
        v9);
    }
  }
  return (unsigned int)v7;
}
