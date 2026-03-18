/*
 * XREFs of HviGetHypervisorFeatures @ 0x1406DC730
 * Callers:
 *     HvlGetSystemPasidCapabilities @ 0x1405BD1B0 (HvlGetSystemPasidCapabilities.c)
 *     HvlpTryConfigureInterface @ 0x1405C17EC (HvlpTryConfigureInterface.c)
 *     HvlpDetermineEnlightenments @ 0x1405C19D8 (HvlpDetermineEnlightenments.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F1AD8 (KiDetectHardwareSpecControlFeatures.c)
 *     HviIsKernelApertureAvailable @ 0x1406378E8 (HviIsKernelApertureAvailable.c)
 *     HviGetIptFeatures @ 0x1406DC8A8 (HviGetIptFeatures.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x14071E2B0 (SpcIsHyperVCr3RspErrataPresent.c)
 *     HvlQueryDetailInfo @ 0x140776C54 (HvlQueryDetailInfo.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14080F35C (RtlpInitFunctionOverrideCapabilities.c)
 *     HalpLbrInitialize @ 0x140BEF224 (HalpLbrInitialize.c)
 *     KiInitializeKernel @ 0x140BF6190 (KiInitializeKernel.c)
 *     KiComputeDispatchInterruptCost @ 0x140CC90C0 (KiComputeDispatchInterruptCost.c)
 *     KiInitSystem @ 0x140CC9D74 (KiInitSystem.c)
 *     EtwpTraceSystemInitialization @ 0x140CE1440 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406DC944 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
