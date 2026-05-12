/*
 * XREFs of RaDriverAddDevice @ 0x140072400
 * Callers:
 *     <none>
 * Callees:
 *     RaidCreateDeviceName @ 0x140047038 (RaidCreateDeviceName.c)
 *     RaidAdapterHack @ 0x1400476EC (RaidAdapterHack.c)
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     RaGetBusInterface @ 0x140053034 (RaGetBusInterface.c)
 *     StorIsChildAdapterPdo @ 0x140059C94 (StorIsChildAdapterPdo.c)
 *     RaidCreateAdapter @ 0x14006C434 (RaidCreateAdapter.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     Feature_NativeNVMeStackEnableForClientOS__private_IsEnabledDeviceUsageNoInline @ 0x140072308 (Feature_NativeNVMeStackEnableForClientOS__private_IsEnabledDeviceUsageNoInline.c)
 *     CreateNvmeAdapter @ 0x1400D162C (CreateNvmeAdapter.c)
 *     DeleteNvmeAdapter @ 0x1400D1764 (DeleteNvmeAdapter.c)
 *     RaFindDriverInitData @ 0x140183008 (RaFindDriverInitData.c)
 *     PortReadStorageBusType @ 0x1401836F4 (PortReadStorageBusType.c)
 *     RaidInitializeAdapter @ 0x140186B24 (RaidInitializeAdapter.c)
 *     InitializeNvmeAdapter @ 0x140196AC0 (InitializeNvmeAdapter.c)
 *     PortRegistryReadDeviceKey @ 0x1401B5C34 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1401B90B4 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall RaDriverAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v4; // rsi
  char *DeviceExtension; // r13
  char v6; // bl
  __int64 v7; // r14
  unsigned int BusInterface; // eax
  __int64 v9; // rdx
  __int64 DriverInitData; // rdi
  char v11; // r15
  __int64 v12; // rdx
  int v13; // r14d
  ULONG v14; // edx
  int NvmeAdapter; // edi
  __int64 v16; // r8
  PDEVICE_OBJECT v17; // rax
  struct _DEVICE_OBJECT *v18; // r15
  __int64 v19; // r14
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  int v25; // [rsp+38h] [rbp-61h]
  PDEVICE_OBJECT SourceDevice; // [rsp+40h] [rbp-59h] BYREF
  int v27; // [rsp+48h] [rbp-51h] BYREF
  __int64 v28; // [rsp+50h] [rbp-49h] BYREF
  int v29; // [rsp+58h] [rbp-41h] BYREF
  int v30; // [rsp+5Ch] [rbp-3Dh] BYREF
  BOOL v31; // [rsp+60h] [rbp-39h] BYREF
  struct _UNICODE_STRING v32; // [rsp+68h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-21h] BYREF
  struct _UNICODE_STRING DeviceName; // [rsp+88h] [rbp-11h] BYREF
  int v35[2]; // [rsp+98h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+7h] BYREF
  char v38; // [rsp+110h] [rbp+77h]
  int KeyHandle; // [rsp+118h] [rbp+7Fh] BYREF

  LODWORD(v28) = 0;
  KeyHandle = 0;
  SourceDevice = 0LL;
  v4 = 0LL;
  v27 = 0;
  DeviceExtension = 0LL;
  v29 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  DestinationString = 0LL;
  v30 = 0;
  v32 = 0LL;
  v31 = 0;
  v38 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xBu,
      (__int64)&WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids,
      DriverObject,
      DeviceObject);
  }
  DeviceName = 0LL;
  *(_QWORD *)v35 = IoGetDriverObjectExtension(DriverObject, DriverEntry);
  v7 = *(_QWORD *)v35;
  RaidCreateDeviceName((__int64)DeviceObject, &DeviceName, (unsigned __int32 *)&v27);
  BusInterface = RaGetBusInterface(DeviceObject);
  v9 = 0LL;
  if ( BusInterface != -1 )
    v9 = BusInterface;
  DriverInitData = RaFindDriverInitData(v7, v9);
  v11 = PortReadStorageBusType(v7 + 40, 0LL, &v28);
  if ( StorIsChildAdapterPdo(DeviceObject)
    && (LOBYTE(v12) = 1, (unsigned __int8)PortReadStorageBusType(v7 + 40, v12, &KeyHandle) == 1) )
  {
    v13 = KeyHandle;
  }
  else
  {
    v13 = v28;
    if ( !v11 )
      v13 = 127;
  }
  if ( v13 == 20 )
  {
    v6 = 1;
    goto LABEL_31;
  }
  if ( v13 == 17 )
  {
    if ( DisableNativeNVMeStack )
      goto LABEL_37;
    if ( DriverInitData && (*(_DWORD *)(DriverInitData + 184) & 0x40000000) != 0 )
    {
      if ( g_OSisClient )
      {
        if ( (unsigned int)Feature_NativeNVMeStackEnableForClientOS__private_IsEnabledDeviceUsageNoInline() )
          v6 = 1;
      }
      else
      {
        v6 = 1;
      }
    }
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v32, L"EnableNVMeInterface");
    v28 = (__int64)&v29;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v32,
                4,
                (__int64)&v28,
                &KeyHandle) < 0 )
    {
      if ( !v6 )
        goto LABEL_31;
    }
    else
    {
      if ( !v29 )
      {
LABEL_28:
        v6 = 0;
        goto LABEL_31;
      }
      v6 = 1;
    }
    if ( !DriverInitData || (*(_DWORD *)(DriverInitData + 184) & 0x40000000) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"StorPort");
      RtlInitUnicodeString(&v32, L"DMArSupport");
      v28 = (__int64)&v30;
      KeyHandle = 4;
      if ( (int)PortRegistryReadDeviceKey(
                  (int)DeviceObject,
                  (int)&DestinationString,
                  (int)&v32,
                  4,
                  (__int64)&v28,
                  &KeyHandle) >= 0 )
      {
        v31 = v30 != 0;
        RtlInitUnicodeString(&DestinationString, L"DMA Management");
        RtlInitUnicodeString(&v32, L"RemappingSupported");
        PortRegistryWriteDeviceKey(
          (_DWORD)DeviceObject,
          (unsigned int)&DestinationString,
          (unsigned int)&v32,
          4,
          (__int64)&v31,
          4);
      }
      goto LABEL_31;
    }
    goto LABEL_28;
  }
LABEL_31:
  if ( !DisableNativeNVMeStack && DriverInitData && (*(_DWORD *)(DriverInitData + 184) & 0x40000) != 0 )
  {
    v6 = 1;
    v38 = 1;
LABEL_36:
    v14 = 1440;
    goto LABEL_38;
  }
  if ( v6 )
    goto LABEL_36;
LABEL_37:
  v14 = 48 * (RaidLogListSize + 132);
LABEL_38:
  NvmeAdapter = IoCreateDevice(DriverObject, v14, &DeviceName, 4u, 0x100u, 0, &SourceDevice);
  if ( NvmeAdapter < 0 )
    goto LABEL_58;
  if ( v6 )
  {
    LOBYTE(v16) = v38;
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    NvmeAdapter = CreateNvmeAdapter(DeviceExtension, SourceDevice, v16);
    if ( NvmeAdapter < 0 )
      goto LABEL_59;
  }
  else
  {
    v4 = SourceDevice->DeviceExtension;
    NvmeAdapter = RaidCreateAdapter(v4);
    if ( NvmeAdapter < 0 )
      goto LABEL_61;
  }
  v17 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
  v18 = v17;
  if ( !v17 )
  {
    NvmeAdapter = -1073741823;
    goto LABEL_58;
  }
  v25 = v13;
  v19 = *(_QWORD *)v35;
  if ( v6 )
    v20 = InitializeNvmeAdapter(
            (int)DeviceExtension,
            (int)SourceDevice,
            v35[0],
            (int)v17,
            DeviceObject,
            (__int64)&DeviceName,
            v27,
            v25);
  else
    v20 = RaidInitializeAdapter(
            (int)v4,
            (int)SourceDevice,
            v35[0],
            (int)v17,
            DeviceObject,
            (__int64)&DeviceName,
            v27,
            v25);
  DeviceName.Buffer = 0LL;
  NvmeAdapter = v20;
  if ( v20 < 0 )
  {
    IoDetachDevice(v18);
LABEL_58:
    if ( v6 )
    {
LABEL_59:
      if ( DeviceExtension )
        DeleteNvmeAdapter(DeviceExtension);
LABEL_63:
      if ( SourceDevice )
        IoDeleteDevice(SourceDevice);
      goto LABEL_65;
    }
LABEL_61:
    if ( v4 )
      RaidDeleteAdapter((__int64)v4);
    goto LABEL_63;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v19 + 80), &LockHandle);
  v21 = (_QWORD *)(v19 + 56);
  v22 = *(_QWORD *)(v19 + 56);
  if ( v6 )
    v23 = DeviceExtension + 64;
  else
    v23 = v4 + 16;
  if ( *(_QWORD **)(v22 + 8) != v21 )
    __fastfail(3u);
  v23[1] = v21;
  *v23 = v22;
  *(_QWORD *)(v22 + 8) = v23;
  *v21 = v23;
  ++*(_DWORD *)(v19 + 72);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
    RaidAdapterHack((__int64)v4);
  SourceDevice->Flags |= 0x10u;
  SourceDevice->Flags &= ~0x80u;
LABEL_65:
  if ( DeviceName.Buffer )
    ExFreePoolWithTag(DeviceName.Buffer, 0x53446152u);
  return (unsigned int)NvmeAdapter;
}
