/*
 * XREFs of HalpHvIsFrequencyAvailable @ 0x1405850F8
 * Callers:
 *     HalSocRequestApi @ 0x1404EF27C (HalSocRequestApi.c)
 *     HalpHvGetApicFrequency @ 0x140584F50 (HalpHvGetApicFrequency.c)
 *     HalpHvGetTscFrequency @ 0x140584F80 (HalpHvGetTscFrequency.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B938C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsXboxNanovisorPresent @ 0x14058526C (HalpIsXboxNanovisorPresent.c)
 */

bool __fastcall HalpHvIsFrequencyAvailable()
{
  if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    return (unsigned __int8)HalpIsXboxNanovisorPresent() != 0;
  _RAX = 1073741827LL;
  __asm { cpuid }
  return (_RDX & 0x100) != 0;
}
