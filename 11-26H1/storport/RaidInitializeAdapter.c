/*
 * XREFs of RaidInitializeAdapter @ 0x140186B24
 * Callers:
 *     RaDriverAddDevice @ 0x140072400 (RaDriverAddDevice.c)
 * Callees:
 *     RaidQueryAcpiDsdStorageD3Property @ 0x140045CF4 (RaidQueryAcpiDsdStorageD3Property.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     RaidAllocateDeviceProperty @ 0x1400529E4 (RaidAllocateDeviceProperty.c)
 *     PortGetLinkTimeoutValue @ 0x140052BF0 (PortGetLinkTimeoutValue.c)
 *     RaGetBusInterface @ 0x140053034 (RaGetBusInterface.c)
 *     StorpInitializeAdapterTelemetry @ 0x140056650 (StorpInitializeAdapterTelemetry.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaFindDriverInitData @ 0x140183008 (RaFindDriverInitData.c)
 *     RiAllocateMiniportDeviceExtension @ 0x140183674 (RiAllocateMiniportDeviceExtension.c)
 *     PortRegistryReadDeviceKey @ 0x1401B5C34 (PortRegistryReadDeviceKey.c)
 *     PortGetRegistrySettings @ 0x1401B6FA0 (PortGetRegistrySettings.c)
 *     PortGetDriverParameters @ 0x1401B7030 (PortGetDriverParameters.c)
 *     PortGetBusyRetryCountValue @ 0x1401B70C0 (PortGetBusyRetryCountValue.c)
 *     PortRegistryWriteDeviceKey @ 0x1401B90B4 (PortRegistryWriteDeviceKey.c)
 *     PortGetIoTimeoutValue @ 0x1401BE4E8 (PortGetIoTimeoutValue.c)
 *     PortGetBusyPauseTimeValue @ 0x1401BE608 (PortGetBusyPauseTimeValue.c)
 *     PortGetIoLatencyCapValue @ 0x1401BE720 (PortGetIoLatencyCapValue.c)
 */

__int64 __fastcall RaidInitializeAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PDEVICE_OBJECT DeviceObject,
        __int128 *a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rsi
  __int128 v11; // xmm0
  int BusInterface; // eax
  int v13; // edx
  _QWORD *DriverInitData; // rax
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // ecx
  char v23; // al
  char v24; // al
  char v25; // al
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // al
  int v31; // eax
  char v32; // al
  char v33; // al
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // rdx
  bool v37; // zf
  __int64 v38; // rax
  int KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 p_Uuid; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+78h] [rbp-88h] BYREF
  int v46; // [rsp+7Ch] [rbp-84h] BYREF
  int v47; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+84h] [rbp-7Ch] BYREF
  int v49; // [rsp+88h] [rbp-78h] BYREF
  int v50; // [rsp+8Ch] [rbp-74h] BYREF
  int v51; // [rsp+90h] [rbp-70h] BYREF
  int v52; // [rsp+94h] [rbp-6Ch] BYREF
  int v53; // [rsp+98h] [rbp-68h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v55[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  int v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+DCh] [rbp-24h]
  UUID Uuid; // [rsp+200h] [rbp+100h] BYREF

  v8 = a1 + 376;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 32) = DeviceObject;
  *(_QWORD *)(a1 + 24) = a4;
  DestinationString = 0LL;
  v43 = 0;
  v54 = 0LL;
  v45 = 0;
  v11 = *a6;
  *(_DWORD *)(a1 + 2056) = a7;
  *(_DWORD *)(a1 + 2140) = 1;
  *(_OWORD *)(a1 + 40) = v11;
  *(_BYTE *)(a1 + 4957) = 1;
  *(_DWORD *)(a1 + 5428) = 0;
  *(_DWORD *)(a1 + 5776) = -1;
  *(_QWORD *)(a1 + 376) = a1;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  v42 = 0;
  v53 = 0;
  v49 = 0;
  v41 = 0LL;
  v52 = 0;
  BusInterface = RaGetBusInterface(DeviceObject);
  v13 = 0;
  if ( BusInterface != -1 )
    v13 = BusInterface;
  if ( !v13 )
    *(_BYTE *)(a1 + 104) |= 8u;
  DriverInitData = RaFindDriverInitData(*(_QWORD *)(a1 + 16), v13);
  *(_QWORD *)(a1 + 608) = DriverInitData;
  if ( !DriverInitData )
    return 3221225486LL;
  v16 = *((_DWORD *)DriverInitData + 1);
  *(_BYTE *)(a1 + 109) |= 4u;
  *(_DWORD *)(a1 + 392) = v16;
  result = RiAllocateMiniportDeviceExtension(v8);
  if ( (int)result >= 0 )
  {
    PortGetDriverParameters(*(_QWORD *)(a1 + 16) + 40LL, a7, a1 + 2064);
    v17 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 2136) = 30;
    PortGetLinkTimeoutValue(v17, a7);
    v18 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 4188) = 0;
    PortGetIoTimeoutValue(v18);
    v19 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_QWORD *)(a1 + 4960) = 0LL;
    PortGetIoLatencyCapValue(v19, a1 + 4960);
    if ( *(_QWORD *)(a1 + 4960) )
      *(_QWORD *)(a1 + 4960) *= 10000LL;
    v20 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 5732) = 0;
    PortGetBusyRetryCountValue(v20);
    v21 = *(_QWORD *)(a1 + 16) + 40LL;
    *(_DWORD *)(a1 + 5736) = 0;
    PortGetBusyPauseTimeValue(v21);
    RtlInitUnicodeString(&DestinationString, L"StorPort");
    RtlInitUnicodeString(&v41, L"TotalSenseDataBytes");
    KeyHandle = 4;
    p_Uuid = (__int64)&v43;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0 )
    {
      v22 = v43;
    }
    else
    {
      v22 = 256;
      v43 = 256;
    }
    if ( v22 > 0x12 )
    {
      v23 = v22;
      if ( v22 >= 0xFF )
        v23 = -1;
      *(_BYTE *)(a1 + 4956) = v23;
    }
    else
    {
      *(_BYTE *)(a1 + 4956) = 18;
    }
    RtlInitUnicodeString(&v41, L"EnableIdlePowerManagement");
    KeyHandle = 4;
    p_Uuid = (__int64)&v45;
    *(_BYTE *)(a1 + 104) &= ~0x20u;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0 )
    {
      v24 = *(_BYTE *)(a1 + 104);
      if ( v45 )
        v25 = v24 | 0x20;
      else
        v25 = v24 & 0xDF;
      *(_BYTE *)(a1 + 104) = v25;
    }
    RtlInitUnicodeString(&v41, L"DisableRuntimePowerManagement");
    *(_BYTE *)(a1 + 107) &= ~0x20u;
    p_Uuid = (__int64)&v46;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0 )
    {
      v26 = *(_BYTE *)(a1 + 107);
      if ( v46 )
        v27 = v26 | 0x20;
      else
        v27 = v26 & 0xDF;
      *(_BYTE *)(a1 + 107) = v27;
    }
    RtlInitUnicodeString(&v41, L"DisableD3Cold");
    v28 = *(_BYTE *)(a1 + 107) & 0xEF;
    KeyHandle = 4;
    *(_BYTE *)(a1 + 107) = v28 | 8;
    p_Uuid = (__int64)&v47;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0 )
    {
      v29 = *(_BYTE *)(a1 + 107);
      if ( v47 )
        v30 = v29 & 0xF7;
      else
        v30 = v29 | 8;
      *(_BYTE *)(a1 + 107) = v30;
    }
    RtlInitUnicodeString(&v41, L"IdleTimeoutInMS");
    *(_DWORD *)(a1 + 5040) = 60000;
    p_Uuid = (__int64)&v48;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0 )
    {
      v31 = v48;
      *(_BYTE *)(a1 + 107) |= 0x80u;
      *(_DWORD *)(a1 + 5040) = v31;
    }
    *(_BYTE *)(a1 + 113) &= ~1u;
    RtlInitUnicodeString(&v41, L"DlrmDisable");
    KeyHandle = 4;
    p_Uuid = (__int64)&v49;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0 )
      *(_BYTE *)(a1 + 113) = (v49 != 0) | *(_BYTE *)(a1 + 113) & 0xFE;
    RtlInitUnicodeString(&v41, L"UseDMAv3");
    *(_BYTE *)(a1 + 108) &= ~4u;
    p_Uuid = (__int64)&v50;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0 )
      *(_BYTE *)(a1 + 108) = (v50 != 0 ? 4 : 0) | *(_BYTE *)(a1 + 108) & 0xFB;
    RtlInitUnicodeString(&v41, L"PowerSrbTimeout");
    *(_DWORD *)(a1 + 5672) = *(_DWORD *)(a1 + 4188);
    KeyHandle = 4;
    p_Uuid = (__int64)&v51;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0
      && v51 )
    {
      *(_DWORD *)(a1 + 5672) = v51;
    }
    if ( *(_DWORD *)(a1 + 5672) > 0x6Eu )
      *(_DWORD *)(a1 + 5672) = 110;
    RtlInitUnicodeString(&v41, L"BusSpecificResetTimeout");
    *(_DWORD *)(a1 + 6096) = 5;
    p_Uuid = (__int64)&v42;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0
      && v42 )
    {
      *(_DWORD *)(a1 + 6096) = v42;
    }
    RtlInitUnicodeString(&v41, L"PLDRTimeout");
    *(_DWORD *)(a1 + 6100) = 10;
    p_Uuid = (__int64)&v42;
    v42 = 0;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0
      && v42 )
    {
      *(_DWORD *)(a1 + 6100) = v42;
    }
    RtlInitUnicodeString(&v41, L"DisableNVMeActiveNamespaceIDListCheck");
    *(_BYTE *)(a1 + 111) &= ~0x40u;
    p_Uuid = (__int64)&v52;
    KeyHandle = 4;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0 )
    {
      v32 = *(_BYTE *)(a1 + 111);
      if ( v52 )
        v33 = v32 | 0x40;
      else
        v33 = v32 & 0xBF;
      *(_BYTE *)(a1 + 111) = v33;
    }
    v34 = *(_BYTE *)(a1 + 108) & 0xFE;
    *(_QWORD *)(a1 + 5032) = 0LL;
    *(_BYTE *)(a1 + 108) = v34 | 0x20;
    memset_0(v55, 0, 0x148uLL);
    v35 = *(_QWORD *)(a1 + 16);
    v55[0] = 255;
    v56 = 0LL;
    v57 = 0xFFFFFFFFLL;
    v59 = 0;
    v58 = -1;
    PortGetRegistrySettings(v35 + 40, a7, v55);
    *(_QWORD *)(a1 + 4352) = v57;
    *(_QWORD *)(a1 + 4360) = v56;
    *(_DWORD *)(a1 + 4336) = v58;
    *(_DWORD *)(a1 + 4344) = v59;
    *(_QWORD *)(a1 + 4368) = 0LL;
    *(_QWORD *)(a1 + 4376) = 0LL;
    *(_QWORD *)(a1 + 4384) = 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 4340) = 6;
    if ( a8 != 127 )
      *(_DWORD *)(a1 + 4340) = a8;
    RaidDriverGetName(a3, (__int64)&v54);
    *(_QWORD *)(a1 + 4784) = *((_QWORD *)&v54 + 1);
    RaidAllocateDeviceProperty(DeviceObject, v36, (_QWORD *)(a1 + 4792));
    v37 = RaidLogListSize == 0;
    *(_DWORD *)(a1 + 4996) = RaidLogListSize;
    v38 = a1 + 6336;
    *(_DWORD *)(a1 + 4992) = -1;
    if ( v37 )
      v38 = 0LL;
    *(_QWORD *)(a1 + 5000) = v38;
    if ( StorageD3AllowedOnCurrentPlatform )
      StorageD3InModernStandbyEnabled = 1;
    if ( RaidQueryAcpiDsdStorageD3Property(*(PDEVICE_OBJECT *)(a1 + 8), (_DWORD *)(a1 + 5776)) )
      StorageD3InModernStandbyEnabled = *(_DWORD *)(a1 + 5776) != 0;
    if ( StorageD3RegistryState == 1 )
    {
      StorageD3InModernStandbyEnabled = 1;
    }
    else
    {
      if ( !StorageD3RegistryState )
        StorageD3InModernStandbyEnabled = 0;
      if ( !StorageD3InModernStandbyEnabled )
        goto LABEL_69;
    }
    *(_BYTE *)(a1 + 112) |= 0x40u;
LABEL_69:
    if ( EnableNVMeICE && (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x20000) != 0 )
      IoRegisterPlugPlayNotification(
        EventCategoryDeviceInterfaceChange,
        1u,
        (PVOID)&GUID_DEVINTERFACE_NVME_ICE,
        *(PDRIVER_OBJECT *)(a3 + 8),
        RegisterForNvmeIceInterfaceCallback,
        0LL,
        (PVOID *)(a1 + 6264));
    Uuid = 0LL;
    RtlInitUnicodeString(&v41, L"AdapterGuid");
    p_Uuid = (__int64)&Uuid;
    KeyHandle = 16;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                3,
                (__int64)&p_Uuid,
                &KeyHandle) < 0
      && ExUuidCreate(&Uuid) >= 0 )
    {
      PortRegistryWriteDeviceKey(
        (_DWORD)DeviceObject,
        (unsigned int)&DestinationString,
        (unsigned int)&v41,
        3,
        p_Uuid,
        16);
    }
    *(UUID *)(a1 + 5128) = Uuid;
    StorpInitializeAdapterTelemetry(a1);
    *(_DWORD *)(a1 + 6240) = FirmwareActivateTimeout;
    RtlInitUnicodeString(&v41, L"FwActivateTimeoutForController");
    KeyHandle = 4;
    p_Uuid = (__int64)&v53;
    if ( (int)PortRegistryReadDeviceKey(
                (int)DeviceObject,
                (int)&DestinationString,
                (int)&v41,
                4,
                (__int64)&p_Uuid,
                &KeyHandle) >= 0 )
      *(_DWORD *)(a1 + 6240) = v53;
    KeInitializeDpc(
      (PRKDPC)(*(_QWORD *)(a1 + 8) + 200LL),
      (PKDEFERRED_ROUTINE)RaidpAdapterDpcRoutine,
      *(PVOID *)(a1 + 8));
    KeInitializeEvent((PRKEVENT)(a1 + 6168), SynchronizationEvent, 0);
    *(_DWORD *)(a1 + 128) &= ~2u;
    result = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
