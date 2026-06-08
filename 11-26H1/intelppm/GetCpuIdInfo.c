/*
 * XREFs of GetCpuIdInfo @ 0x140010330
 * Callers:
 *     IsTurboModeSupported @ 0x140005C34 (IsTurboModeSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x140005CA0 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpSupported @ 0x140005D14 (IsHwpSupported.c)
 *     IsACountMCountSupported @ 0x140005DBC (IsACountMCountSupported.c)
 *     IsProcGV3Capable @ 0x140005E24 (IsProcGV3Capable.c)
 *     IsHwpNativeInterruptSupported @ 0x14002950C (IsHwpNativeInterruptSupported.c)
 *     IsHgsInterruptSupported @ 0x140029588 (IsHgsInterruptSupported.c)
 *     IsPackageThermStatusSupported @ 0x140029F34 (IsPackageThermStatusSupported.c)
 *     IsMonitorMWaitSupported @ 0x14002A11C (IsMonitorMWaitSupported.c)
 *     InitEnergyCountersMsrEx @ 0x14002A440 (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x14002A500 (ProbeFixedFunctionCounters.c)
 *     ConnectHwpInterrupt @ 0x14002A7C0 (ConnectHwpInterrupt.c)
 *     IsHwpFastMsrSupported @ 0x14002AE28 (IsHwpFastMsrSupported.c)
 *     IsHwpIdleOptimizationSupported @ 0x14002AEA4 (IsHwpIdleOptimizationSupported.c)
 *     IsHwpPackageControlSupported @ 0x14002AF20 (IsHwpPackageControlSupported.c)
 *     IsRdtResourcePrioritizationSupported @ 0x14002AFE8 (IsRdtResourcePrioritizationSupported.c)
 *     GetHwDebugRegisters @ 0x14002B1D0 (GetHwDebugRegisters.c)
 *     IsOverclockingStatusSupported @ 0x14002B444 (IsOverclockingStatusSupported.c)
 *     InitMonitorMWaitSupport @ 0x14002B640 (InitMonitorMWaitSupport.c)
 *     GetCPUFamilyAndModel @ 0x140049008 (GetCPUFamilyAndModel.c)
 *     InitDriver @ 0x14004A03C (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
