/*
 * XREFs of HviGetHardwareFeatures @ 0x1404DF900
 * Callers:
 *     HalpWdatDiscover @ 0x140599C24 (HalpWdatDiscover.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405BFA20 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1405C4248 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x14063A9B4 (HvipApertureDetectParameters.c)
 *     HvlQueryDetailInfo @ 0x140779AFC (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140B54650 (HvlQueryVsmProtectionInfo.c)
 *     HalpIommuInitializeAll @ 0x140C1378C (HalpIommuInitializeAll.c)
 *     HalpInterruptInitDiscard @ 0x140CB5AF4 (HalpInterruptInitDiscard.c)
 *     HalpHvCheckIommuCapability @ 0x140CB5D44 (HalpHvCheckIommuCapability.c)
 *     EtwpTraceSystemInitialization @ 0x140CE77E0 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall HviGetHardwareFeatures(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)HviIsAnyHypervisorPresent() )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
  }
  else
  {
    result = 0LL;
  }
  if ( (unsigned int)result < 0x40000006 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    _RAX = 1073741830LL;
    __asm { cpuid }
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = _RBX;
    *(_DWORD *)(a1 + 8) = _RCX;
    *(_DWORD *)(a1 + 12) = _RDX;
  }
  return result;
}
