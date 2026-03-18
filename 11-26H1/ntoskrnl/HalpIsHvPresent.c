/*
 * XREFs of HalpIsHvPresent @ 0x1404B9338
 * Callers:
 *     HalpArtAvailable @ 0x1404B9184 (HalpArtAvailable.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B938C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1405771E0 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x140579DA0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpNmiReboot @ 0x140593E10 (HalpNmiReboot.c)
 *     HalSocRequestConfigurationData @ 0x14059955C (HalSocRequestConfigurationData.c)
 *     HalpLbrInitialize @ 0x140BEF224 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140CAF604 (HalpMiscGetParameters.c)
 * Callees:
 *     <none>
 */

char HalpIsHvPresent()
{
  char v0; // r8

  v0 = byte_140E0A846;
  if ( byte_140E0A846 == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX != 1986945624;
    }
    byte_140E0A846 = v0;
  }
  return v0;
}
