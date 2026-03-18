/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x1406DC990
 * Callers:
 *     HviIsKernelApertureAvailable @ 0x1406378E8 (HviIsKernelApertureAvailable.c)
 *     MicrocodeUpdate @ 0x1406DD970 (MicrocodeUpdate.c)
 *     SpcIsHyperVCr3RspErrataPresent @ 0x14071E2B0 (SpcIsHyperVCr3RspErrataPresent.c)
 *     EtwpTraceSystemInitialization @ 0x140CE1440 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  if ( !HviIsAnyHypervisorPresent() )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
