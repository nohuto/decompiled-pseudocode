/*
 * XREFs of PortRegistryReadDeviceKey @ 0x1401B5C34
 * Callers:
 *     RaidUnitGetInitialTimestamp @ 0x140049ED0 (RaidUnitGetInitialTimestamp.c)
 *     RaidUnitGetPowerCycleCount @ 0x14004F750 (RaidUnitGetPowerCycleCount.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x140051AE8 (StorAdapterDeviceRegistryKeyProxy.c)
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1400A7184 (RaidUnitGet1667DeviceRegistryValue.c)
 *     ShimGetMsftId @ 0x1400C50C0 (ShimGetMsftId.c)
 *     NvmeGetRegistrySettings @ 0x1400FEF44 (NvmeGetRegistrySettings.c)
 *     NvmeAdapterInitializeD3Configuration @ 0x140123888 (NvmeAdapterInitializeD3Configuration.c)
 *     RaidInitializeAdapter @ 0x140186B24 (RaidInitializeAdapter.c)
 *     NvmeAdapterRetrieveRegistrySettings @ 0x14019EE64 (NvmeAdapterRetrieveRegistrySettings.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall PortRegistryReadDeviceKey(
        struct _DEVICE_OBJECT *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        _DWORD *KeyHandle)
{
  _DWORD *v6; // r14
  __int64 v7; // r12
  int v10; // r15d
  NTSTATUS v11; // edi
  _DWORD *v12; // rdi
  PVOID SystemRoutineAddress; // rax
  NTSTATUS v14; // eax
  void *DeviceRegKey; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD DestinationString[3]; // [rsp+58h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  void *v20; // [rsp+A8h] [rbp-60h] BYREF
  int v21; // [rsp+B0h] [rbp-58h]
  __int64 v22; // [rsp+B8h] [rbp-50h]
  __int64 *v23; // [rsp+C0h] [rbp-48h]
  int v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  int v26; // [rsp+D8h] [rbp-30h]

  v6 = KeyHandle;
  v7 = a4;
  DeviceRegKey = 0LL;
  v10 = *KeyHandle;
  v11 = IoOpenDeviceRegistryKey(a1, 1u, 0x20019u, &DeviceRegKey);
  if ( v11 < 0 )
    return (unsigned int)v11;
  KeyHandle = 0LL;
  HIDWORD(DestinationString[0]) = 0;
  if ( !a2 )
  {
    v12 = DeviceRegKey;
    KeyHandle = DeviceRegKey;
    goto LABEL_5;
  }
  ObjectAttributes.RootDirectory = DeviceRegKey;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.ObjectName = a2;
  v11 = ZwCreateKey((PHANDLE)&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v11 >= 0 )
  {
    v12 = KeyHandle;
LABEL_5:
    LODWORD(DestinationString[0]) = v10;
    v17 = *a5;
    memset_0(&v20, 0, 0x70uLL);
    v21 = 20;
    v24 = 0;
    v20 = &PortpRegQueryRoutine;
    v22 = *(_QWORD *)(a3 + 8);
    v25 = 0LL;
    v23 = &v17;
    v26 = 0;
    *(_OWORD *)&DestinationString[1] = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress((PUNICODE_STRING)&DestinationString[1]);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v14 = ((__int64 (__fastcall *)(__int64, _DWORD *, void **, __int64, _QWORD))SystemRoutineAddress)(
            0x40000000LL,
            v12,
            &v20,
            v7,
            0LL);
    v10 = DestinationString[0];
    v11 = v14;
    *a5 = v17;
    if ( a2 )
      ZwClose(KeyHandle);
  }
  ZwClose(DeviceRegKey);
  if ( v11 >= 0 )
    *v6 = v10;
  return (unsigned int)v11;
}
