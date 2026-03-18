/*
 * XREFs of ACPIThermalStartDevice @ 0x1400BAC70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIThermalLoopEx @ 0x140029C18 (ACPIThermalLoopEx.c)
 *     WPP_RECORDER_SF_qqss @ 0x1400338F4 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x140042918 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x140042A28 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIInternalSetDeviceInterface @ 0x14004E790 (ACPIInternalSetDeviceInterface.c)
 *     ACPIRegisterForDeviceNotifications @ 0x14004F080 (ACPIRegisterForDeviceNotifications.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     ACPIThermalGetSensorDevice @ 0x140069E88 (ACPIThermalGetSensorDevice.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1400CD388 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rdi
  const char *v5; // rbp
  __int64 v6; // rcx
  const char *v7; // rcx
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  struct _KEVENT *v11; // r12
  __int64 v12; // rcx
  PVOID v13; // rbx
  int SensorDevice; // esi
  __int64 v15; // rcx
  const char *v16; // rax
  PVOID *v17; // r15
  PIRP *v18; // r14
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PIRP v20; // rax
  __int64 Pool2; // rax
  __int64 v22; // rax
  struct _DEVICE_OBJECT *v23; // rcx
  __int64 v24; // rax
  ULONG v25; // r8d
  __int64 v26; // rcx
  const char *v27; // rax
  int v28; // ebx
  void *v29; // rcx
  PVOID P[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 v32; // [rsp+60h] [rbp-88h] BYREF
  _OWORD v33[3]; // [rsp+70h] [rbp-78h] BYREF

  DWORD1(v33[0]) = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = byte_140075A82;
  v6 = *(_QWORD *)(DeviceExtension + 200);
  *(_DWORD *)(v6 + 96) = 100;
  *(_DWORD *)(v6 + 92) = -1;
  v7 = byte_140075A82;
  *(_DWORD *)(DeviceExtension + 192) |= 0x8000000u;
  v8 = byte_140075A82;
  v9 = *(_QWORD *)(DeviceExtension + 8);
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v7 = *(const char **)(DeviceExtension + 608);
    if ( (v9 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
      (char)Irp,
      DeviceExtension,
      v7,
      v8);
  v10 = *(_QWORD *)(DeviceExtension + 200);
  v11 = (struct _KEVENT *)(v10 + 280);
  KeClearEvent((PRKEVENT)(v10 + 280));
  *(_QWORD *)(v10 + 112) = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 760), 1347245151);
  P[0] = 0LL;
  memset(v33, 0, sizeof(v33));
  v12 = *(_QWORD *)(DeviceExtension + 760);
  v32 = THRM_EXTENSIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v12, (unsigned int)&v32, 0, 0, (__int64)v33, (__int64)P) < 0 )
  {
    *(_DWORD *)(v10 + 128) = 0;
  }
  else
  {
    v13 = P[0];
    if ( *((_WORD *)P[0] + 1) == 3 && *((_DWORD *)P[0] + 6) )
      *(_DWORD *)(v10 + 128) = **((unsigned __int8 **)P[0] + 4);
    AMLIFreeDataBuffs((__int64)v13);
    ExFreePoolWithTag(v13, 0x52706341u);
  }
  SensorDevice = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_THERMAL_ZONE);
  if ( SensorDevice < 0 )
  {
    v15 = *(_QWORD *)(DeviceExtension + 8);
    v16 = byte_140075A82;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(DeviceExtension + 608);
      if ( (v15 & 0x400000000000LL) != 0 )
        v16 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x15u,
        (__int64)&WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
        SensorDevice,
        DeviceExtension,
        v5,
        v16);
    v17 = (PVOID *)(v10 + 200);
    v18 = (PIRP *)(v10 + 192);
    goto LABEL_32;
  }
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 768));
  v17 = (PVOID *)(v10 + 200);
  *(_QWORD *)(v10 + 200) = AttachedDeviceReference;
  v20 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v18 = (PIRP *)(v10 + 192);
  *v18 = v20;
  if ( !v20
    || (ACPIRegisterForDeviceNotifications(
          *(_QWORD *)(DeviceExtension + 768),
          (__int64)ACPIThermalEvent,
          *(_QWORD *)(DeviceExtension + 768)),
        (Pool2 = ExAllocatePool2(256LL, 64LL, 1416651585LL)) == 0) )
  {
    SensorDevice = -1073741670;
LABEL_32:
    if ( *v17 )
    {
      ObfDereferenceObject(*v17);
      *v17 = 0LL;
    }
    if ( *v18 )
    {
      IoFreeIrp(*v18);
      *v18 = 0LL;
    }
    v29 = *(void **)(DeviceExtension + 224);
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0x54706341u);
      *(_QWORD *)(DeviceExtension + 224) = 0LL;
    }
    KeSetEvent(v11, 0, 0);
    goto LABEL_39;
  }
  *(_QWORD *)(Pool2 + 8) = &ACPIThermalGuidList;
  *(_DWORD *)Pool2 = 1;
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(Pool2 + 16), (__int64)ACPIThermalQueryWmiRegInfo);
  AcpiGetDriverProxyWrappedEndpoint((_QWORD *)(v22 + 24), (__int64)ACPIThermalQueryWmiDataBlock);
  v23 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 768);
  *(_QWORD *)(DeviceExtension + 224) = v24;
  SensorDevice = IoWMIRegistrationControl(v23, v25);
  if ( SensorDevice < 0 )
    goto LABEL_32;
  SensorDevice = ACPIThermalGetSensorDevice((_QWORD *)DeviceExtension);
  if ( SensorDevice < 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(DeviceExtension + 768), 2u);
    v26 = *(_QWORD *)(DeviceExtension + 8);
    v27 = byte_140075A82;
    if ( (v26 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(DeviceExtension + 608);
      if ( (v26 & 0x400000000000LL) != 0 )
        v27 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0x16u,
        (__int64)&WPP_d279f2bc80703de7af54b101c3d5140c_Traceguids,
        SensorDevice,
        DeviceExtension,
        v5,
        v27);
    goto LABEL_32;
  }
  ACPIThermalAcquireCoolingInterfaces(DeviceExtension);
  *(_DWORD *)(DeviceExtension + 368) = 2;
  v28 = ACPIDeviceInternalDeviceRequest((_QWORD *)DeviceExtension, 1LL, 0LL, 0LL, 0);
  ACPIThermalLoopEx(DeviceExtension, 0x8000000, 0x10000000);
  SensorDevice = 0;
  if ( v28 != 259 )
    SensorDevice = v28;
  if ( SensorDevice < 0 )
    goto LABEL_32;
LABEL_39:
  Irp->IoStatus.Status = SensorDevice;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)SensorDevice;
}
