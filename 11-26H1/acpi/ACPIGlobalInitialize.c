/*
 * XREFs of ACPIGlobalInitialize @ 0x1400D8740
 * Callers:
 *     DriverEntry @ 0x1400D8CB0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002EC00 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1400D3E50 (ACPIGetUsedDebuggingDevices.c)
 *     ACPILoadFindRSDT @ 0x1400D884C (ACPILoadFindRSDT.c)
 */

void *ACPIGlobalInitialize()
{
  int v0; // edx
  __int64 RSDT; // rbx

  AcpiHalDispatchTable = 1094930505;
  qword_14008E8B8 = (__int64)ACPIGpeHalEnableDisableEvents;
  dword_14008E8B4 = 2;
  qword_14008E8C0 = (__int64)ACPIEnableInitializeACPI;
  qword_14008E8C8 = (__int64)ACPIWakeEnableWakeEvents;
  qword_14008E8D0 = (__int64)ACPIWakeMarkHiberPhase;
  ((void (__fastcall *)(int *, __int64 *))HalDispatchTable->HalInitPowerManagement)(
    &AcpiHalDispatchTable,
    &PmHalDispatchTable);
  RSDT = ACPILoadFindRSDT();
  if ( !RSDT )
    KeBugCheckEx(0xA5u, 0x11uLL, 1uLL, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      6,
      30,
      (__int64)&WPP_a984ea3e217b3fb5c4c90658d89fa1c5_Traceguids,
      RSDT);
  }
  *((_BYTE *)AcpiInformation + 84) = 1;
  *(_QWORD *)AcpiInformation = RSDT;
  ACPIGetUsedDebuggingDevices();
  return AcpiInformation;
}
