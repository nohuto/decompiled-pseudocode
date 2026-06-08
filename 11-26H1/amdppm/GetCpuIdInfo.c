/*
 * XREFs of GetCpuIdInfo @ 0x14000E620
 * Callers:
 *     IsFastCppcSupported @ 0x140004850 (IsFastCppcSupported.c)
 *     IsTargettedCpuForQosExperiment_AMD @ 0x1400048CC (IsTargettedCpuForQosExperiment_AMD.c)
 *     IsRaplSupported @ 0x140023340 (IsRaplSupported.c)
 *     InitMonitorMWaitSupport @ 0x14002356C (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x140023630 (IsMonitorMWaitSupported.c)
 *     InitDriver @ 0x140023F88 (InitDriver.c)
 *     IsACountMCountSupported @ 0x140024298 (IsACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x140024310 (ValidatePStateCapability.c)
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
