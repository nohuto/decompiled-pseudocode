/*
 * XREFs of CmInitSystem2 @ 0x140D10B0C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     Feature_MachineHiveCache__private_ReportDeviceUsage @ 0x1405276FC (Feature_MachineHiveCache__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x140777A94 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     CmpRegisterTraceLoggingProvider @ 0x14077E01C (CmpRegisterTraceLoggingProvider.c)
 *     CmpBuildMachineHiveCache @ 0x14085D9F4 (CmpBuildMachineHiveCache.c)
 *     MmLockRegistryRecoverySections @ 0x14086AAD8 (MmLockRegistryRecoverySections.c)
 *     IoCreateDriver @ 0x140B5A8C0 (IoCreateDriver.c)
 *     CmpMachineHiveListInitialize @ 0x140B66A74 (CmpMachineHiveListInitialize.c)
 *     CmFcInitSystem3 @ 0x140D10B94 (CmFcInitSystem3.c)
 */

void CmInitSystem2()
{
  int v0; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v1 = 2097182LL;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  CmFcInitSystem3();
  v0 = IoCreateDriver(&v1, VRegSetup);
  if ( v0 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v0, 0LL, 0LL);
  if ( LODWORD(WheapPfaLock.ThreadLock) )
    MmLockRegistryRecoverySections();
  CmpVolumeManagerCreateContextsForWellKnownVolumes();
  CmpMachineHiveListInitialize();
  Feature_MachineHiveCache__private_ReportDeviceUsage();
  CmpBuildMachineHiveCache();
}
