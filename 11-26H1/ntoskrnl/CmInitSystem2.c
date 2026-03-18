/*
 * XREFs of CmInitSystem2 @ 0x140D0A83C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     Feature_MachineHiveCache__private_ReportDeviceUsage @ 0x14052508C (Feature_MachineHiveCache__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x140774A94 (CmpVolumeManagerCreateContextsForWellKnownVolumes.c)
 *     CmpRegisterTraceLoggingProvider @ 0x14077B3DC (CmpRegisterTraceLoggingProvider.c)
 *     CmpBuildMachineHiveCache @ 0x140857664 (CmpBuildMachineHiveCache.c)
 *     MmLockRegistryRecoverySections @ 0x1408646F8 (MmLockRegistryRecoverySections.c)
 *     IoCreateDriver @ 0x140B57970 (IoCreateDriver.c)
 *     CmpMachineHiveListInitialize @ 0x140B639D4 (CmpMachineHiveListInitialize.c)
 *     CmFcInitSystem3 @ 0x140D0A8C4 (CmFcInitSystem3.c)
 */

void CmInitSystem2()
{
  int v0; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v1 = 2097182LL;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  CmFcInitSystem3();
  v0 = IoCreateDriver(&v1, (unsigned __int64)VRegSetup);
  if ( v0 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v0, 0LL, 0LL);
  if ( LODWORD(WheapPfaLock.StackBase) )
    MmLockRegistryRecoverySections();
  CmpVolumeManagerCreateContextsForWellKnownVolumes();
  CmpMachineHiveListInitialize();
  Feature_MachineHiveCache__private_ReportDeviceUsage();
  CmpBuildMachineHiveCache();
}
