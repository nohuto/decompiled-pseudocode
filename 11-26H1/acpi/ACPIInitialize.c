/*
 * XREFs of ACPIInitialize @ 0x1400D7008
 * Callers:
 *     ACPIInitStartACPI @ 0x1400DB3BC (ACPIInitStartACPI.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIEnableInitializeACPI @ 0x14002E3C0 (ACPIEnableInitializeACPI.c)
 *     ACPIGetTableVersion @ 0x140030A60 (ACPIGetTableVersion.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     ACPIInitializeKernelTableHandler @ 0x1400543D4 (ACPIInitializeKernelTableHandler.c)
 *     ACPIKsrSupportInitialize @ 0x140054A00 (ACPIKsrSupportInitialize.c)
 *     ACPIInterruptInitialize @ 0x1400A94DC (ACPIInterruptInitialize.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1400C098C (ACPIQueryPhysicalDeviceLocation.c)
 *     AcpiIrqLibInitializeGlobalState @ 0x1400D73C4 (AcpiIrqLibInitializeGlobalState.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400D74F4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIInitializeAMLI @ 0x1400D7A1C (ACPIInitializeAMLI.c)
 *     ACPIInitializeDDBs @ 0x1400D7B14 (ACPIInitializeDDBs.c)
 *     AcpiIrqLibConfigureLibrary @ 0x1400D7BD8 (AcpiIrqLibConfigureLibrary.c)
 *     ACPILoadProcessRSDT @ 0x1400DDE64 (ACPILoadProcessRSDT.c)
 */

char __fastcall ACPIInitialize(ULONG_PTR BugCheckParameter3)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  _QWORD *v6; // rax
  int v7; // eax
  int v8; // edx
  bool v9; // al
  __int64 v10; // rdx
  int v11; // eax
  int v12; // edx
  ULONG_PTR BugCheckParameter4; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  ULONG_PTR v18; // rbx
  __int64 DeviceExtension; // rax
  unsigned int v21; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v22; // [rsp+60h] [rbp+18h] BYREF

  v22 = 0;
  off_14008BCA8 = (__int64 (__fastcall *)(int, int, int, int, __int64, int))ACPINsObjMatchCallback;
  off_14008BCC0 = (__int64 (__fastcall *)())ACPIDeviceMatchCallback;
  off_14008BCD8 = (__int64 (__fastcall *)(int, int, int, int, __int64, int))ACPIDeviceIdMutiStringMatchCallback;
  v2 = EmProviderRegister(AcpiDriverObject, &EntryReg, 3LL, &CallbackReg, 3, &AcpiEmProviderHandle);
  if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_L(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      1,
      31,
      (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
      v2);
  }
  v4 = ACPIInitializeAMLI();
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        1,
        32,
        (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
        v4);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 0LL, 0LL, 0LL);
  }
  AcpiIrqLibInitializeGlobalState(BugCheckParameter3);
  KeInitializeSpinLock(&GpeTableLock);
  KeInitializeSpinLock(&NotifyHandlerLock);
  qword_14008E8A8 = (__int64)&AcpiDynamicDataBlockTableList;
  AcpiDynamicDataBlockTableList = (__int64)&AcpiDynamicDataBlockTableList;
  KeInitializeSpinLock((PKSPIN_LOCK)AcpiInformation + 8);
  v6 = (_QWORD *)((char *)AcpiInformation + 48);
  *((_QWORD *)AcpiInformation + 7) = (char *)AcpiInformation + 48;
  *v6 = v6;
  *((_QWORD *)AcpiInformation + 9) = 0LL;
  *((_DWORD *)AcpiInformation + 20) = 0;
  v7 = ACPILoadProcessRSDT();
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        1,
        33,
        (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
        v7);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 3uLL, 0LL, 0LL);
  }
  v21 = 0;
  v9 = (AcpiOverrideAttributes & 0x20000) == 0
    && ((AcpiOverrideAttributes & 0x40000) != 0 || (int)ACPIGetTableVersion(1346584902, &v21) >= 0 && v21 >= 5);
  gAcpiHonorBiosPolarities = v9;
  if ( *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u )
    AcpiRetainDebugDeviceInD0 = 1;
  ACPIKsrSupportInitialize();
  ACPIEnableInitializeACPI(0LL, v10);
  v11 = ACPIInitializeDDBs();
  BugCheckParameter4 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        1,
        34,
        (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
        v11);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 4uLL, 0LL, BugCheckParameter4);
  }
  v14 = NotifyHalWithMachineStatesAndRetrieveInterruptModel(&v22);
  if ( v14 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 0xEuLL, 0LL, v14);
  v15 = AcpiIrqLibConfigureLibrary(v22, *((_QWORD *)AcpiInformation + 4));
  if ( v15 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 0xFuLL, 0LL, v15);
  v16 = ACPIInterruptInitialize(BugCheckParameter3);
  v18 = v16;
  if ( v16 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        22,
        35,
        (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids);
    }
    KeBugCheckEx(0xA5u, 0x11uLL, 5uLL, 0LL, v18);
  }
  ACPIInitializeKernelTableHandler(1, *(_QWORD *)(BugCheckParameter3 + 8));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( DeviceExtension )
    ACPIQueryPhysicalDeviceLocation(DeviceExtension);
  return 1;
}
