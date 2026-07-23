/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x140587618
 * Callers:
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x140587470 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x1405874A0 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x14058778C (HalpIsXboxNanovisorPresent.c)
 */

bool __fastcall HalpHvIsFrequencyAvailable()
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RDX & 0x100) != 0;
}
