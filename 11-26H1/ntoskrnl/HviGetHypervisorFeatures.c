/*
 * XREFs of HviGetHypervisorFeatures @ 0x1406E09D0
 * Callers:
 *     HvlGetSystemPasidCapabilities @ 0x1405BFA20 (HvlGetSystemPasidCapabilities.c)
 *     HvlpTryConfigureInterface @ 0x1405C405C (HvlpTryConfigureInterface.c)
 *     HvlpDetermineEnlightenments @ 0x1405C4248 (HvlpDetermineEnlightenments.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F4498 (KiDetectHardwareSpecControlFeatures.c)
 *     HviIsKernelApertureAvailable @ 0x14063A8EC (HviIsKernelApertureAvailable.c)
 *     HviGetIptFeatures @ 0x1406E0B48 (HviGetIptFeatures.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x140722F40 (SpcIsHyperVCr3RspErrataPresent.c)
 *     HvlQueryDetailInfo @ 0x140779AFC (HvlQueryDetailInfo.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x140814DEC (RtlpInitFunctionOverrideCapabilities.c)
 *     NtFilterBootOption @ 0x14081BCA0 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x140B85B08 (SepSecureBootCorrectBcd.c)
 *     HalpLbrInitialize @ 0x140BF5224 (HalpLbrInitialize.c)
 *     KiInitializeKernel @ 0x140BFC190 (KiInitializeKernel.c)
 *     KiComputeDispatchInterruptCost @ 0x140CCF150 (KiComputeDispatchInterruptCost.c)
 *     KiInitSystem @ 0x140CCFE5C (KiInitSystem.c)
 *     EtwpTraceSystemInitialization @ 0x140CE77E0 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1406E0BE4 (HviIsHypervisorMicrosoftCompatible.c)
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
