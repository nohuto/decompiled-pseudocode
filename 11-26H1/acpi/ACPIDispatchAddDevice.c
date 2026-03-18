/*
 * XREFs of ACPIDispatchAddDevice @ 0x14005E070
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyA @ 0x1400019D0 (RtlStringCchCopyA.c)
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x14002F0B4 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_sL @ 0x14005A20C (WPP_RECORDER_SF_sL.c)
 *     ACPIGetPortRangeInterfaces @ 0x14005E6CC (ACPIGetPortRangeInterfaces.c)
 *     memset @ 0x140072740 (memset.c)
 *     ACPICreateRootSymbolicLink @ 0x1400AEB0C (ACPICreateRootSymbolicLink.c)
 *     AcpiSetupNativeMethodInterface @ 0x1400B4E54 (AcpiSetupNativeMethodInterface.c)
 */

__int64 __fastcall ACPIDispatchAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  char v2; // bl
  struct _DEVICE_OBJECT *v5; // rbp
  int v6; // edx
  char *Pool2; // r15
  unsigned int v8; // edi
  char *v9; // rax
  int v10; // edx
  char *v11; // r12
  NTSTATUS v12; // eax
  int v13; // edx
  int v14; // edx
  _QWORD *v15; // rax
  int v16; // edx
  _QWORD *v17; // r14
  const char *v18; // rax
  const char *v19; // rcx
  KIRQL v20; // al
  KIRQL v21; // al
  int v22; // edx
  __int64 v23; // rdx
  PDEVICE_OBJECT SourceDevice; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  SourceDevice = 0LL;
  v5 = 0LL;
  Pool2 = (char *)ExAllocatePool2(64LL, 14LL, 1399874369LL);
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        6,
        11,
        (__int64)&WPP_49a3cf2aed283f952c963990affd9223_Traceguids,
        14);
    }
    v8 = -1073741670;
LABEL_24:
    if ( SourceDevice )
      IoDeleteDevice(SourceDevice);
    v18 = (const char *)&unk_1400D605B;
    v19 = (const char *)&unk_1400D605B;
    goto LABEL_33;
  }
  RtlStringCchCopyA(Pool2, 0xEuLL, "ACPI\\PNP0C08");
  v9 = (char *)ExAllocatePool2(64LL, 11LL, 1399874369LL);
  v11 = v9;
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        6,
        12,
        (__int64)&WPP_49a3cf2aed283f952c963990affd9223_Traceguids,
        11);
    }
LABEL_19:
    v8 = -1073741670;
LABEL_20:
    ExFreePoolWithTag(Pool2, 0);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    if ( v5 )
      IoDetachDevice(v5);
    goto LABEL_24;
  }
  RtlStringCchCopyA(v9, 0xBuLL, "0x5F534750");
  v12 = IoCreateDevice(DriverObject, 0, 0LL, 0x32u, 0x100u, 0, &SourceDevice);
  v8 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        6,
        13,
        (__int64)&WPP_49a3cf2aed283f952c963990affd9223_Traceguids,
        (__int64)Pool2,
        v12);
    SourceDevice = 0LL;
    goto LABEL_20;
  }
  v5 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_qq(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        6,
        14,
        (__int64)&WPP_49a3cf2aed283f952c963990affd9223_Traceguids,
        (char)SourceDevice,
        (char)DeviceObject);
    }
    v8 = -1073741810;
    goto LABEL_20;
  }
  v15 = ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
  v17 = v15;
  if ( !v15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        22,
        15,
        (__int64)&WPP_49a3cf2aed283f952c963990affd9223_Traceguids);
    }
    goto LABEL_19;
  }
  memset(v15, 0, 0x3F8uLL);
  *((_DWORD *)v17 + 183) = 1;
  _InterlockedIncrement((volatile signed __int32 *)v17 + 182);
  v20 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  SourceDevice->DeviceExtension = v17;
  v17[96] = SourceDevice;
  v17[97] = v5;
  v17[76] = Pool2;
  v17[3] = &AcpiFdoIrpDispatch;
  v17[98] = DeviceObject;
  *((_DWORD *)v17 + 4) = 1599293264;
  v17[77] = v11;
  *((_DWORD *)v17 + 127) = 0;
  *((_DWORD *)v17 + 128) = 1;
  *((_DWORD *)v17 + 129) = 1;
  *((_DWORD *)v17 + 130) = 1;
  *((_DWORD *)v17 + 131) = 1;
  *((_DWORD *)v17 + 132) = 4;
  *(_QWORD *)((char *)v17 + 532) = 4LL;
  *((_DWORD *)v17 + 135) = 0;
  *((_DWORD *)v17 + 137) = 1;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v20);
  _InterlockedOr64(v17 + 1, 0x1E00000200010uLL);
  v17[101] = v17 + 100;
  v17[100] = v17 + 100;
  v17[103] = v17 + 102;
  v17[102] = v17 + 102;
  v17[105] = v17 + 104;
  v17[104] = v17 + 104;
  v17[107] = v17 + 106;
  v17[106] = v17 + 106;
  v17[74] = v17 + 73;
  v17[73] = v17 + 73;
  *((_DWORD *)v17 + 176) = -1;
  v17[90] = v17 + 89;
  v17[89] = v17 + 89;
  *v17 = &gAcpiTriageInfo;
  ::DriverObject = DriverObject;
  v21 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  RootDeviceExtension = (ULONG_PTR)v17;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
  ACPIGetPortRangeInterfaces(DeviceObject);
  if ( IoWMIRegistrationControl(SourceDevice, 1u) < 0
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      1,
      10,
      (__int64)&WPP_3ad0379a4aff33c3a6e5470e3717ea43_Traceguids);
  }
  AcpiSetupNativeMethodInterface();
  SourceDevice->Flags &= ~0x80u;
  ACPICreateRootSymbolicLink(DeviceObject);
  IoRegisterPlugPlayNotification(
    EventCategoryDeviceInterfaceChange,
    1u,
    &GUID_PRM_DEVICE,
    ::DriverObject,
    AcpiPrmNotifyInterfaceChange,
    0LL,
    &NotificationEntry);
  v23 = v17[1];
  v18 = (const char *)&unk_1400D605B;
  v19 = (const char *)&unk_1400D605B;
  v2 = (char)v17;
  if ( (v23 & 0x200000000000LL) != 0 )
  {
    v19 = (const char *)v17[76];
    if ( (v23 & 0x400000000000LL) != 0 )
      v18 = (const char *)v17[77];
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_49a3cf2aed283f952c963990affd9223_Traceguids,
      v8,
      v2,
      v19,
      v18);
  return v8;
}
