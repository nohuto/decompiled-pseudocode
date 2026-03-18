/*
 * XREFs of HviGetHardwareFeatures @ 0x1404E6360
 * Callers:
 *     HalpWdatDiscover @ 0x1405974A4 (HalpWdatDiscover.c)
 *     HvlGetSystemPasidCapabilities @ 0x1405BD1B0 (HvlGetSystemPasidCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1405C19D8 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x1406379B0 (HvipApertureDetectParameters.c)
 *     HvlQueryDetailInfo @ 0x140776C54 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140B51DB0 (HvlQueryVsmProtectionInfo.c)
 *     HalpIommuInitializeAll @ 0x140C0D57C (HalpIommuInitializeAll.c)
 *     HalpInterruptInitDiscard @ 0x140CAFAB4 (HalpInterruptInitDiscard.c)
 *     HalpHvCheckIommuCapability @ 0x140CAFD04 (HalpHvCheckIommuCapability.c)
 *     EtwpTraceSystemInitialization @ 0x140CE1440 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
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
