/*
 * XREFs of HalpIsHvPresent @ 0x1404B2B68
 * Callers:
 *     HalpArtAvailable @ 0x1404B29B4 (HalpArtAvailable.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x140579710 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14057C2D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpNmiReboot @ 0x140596590 (HalpNmiReboot.c)
 *     HalSocRequestConfigurationData @ 0x14059BCDC (HalSocRequestConfigurationData.c)
 *     HalpLbrInitialize @ 0x140BF5224 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140CB5644 (HalpMiscGetParameters.c)
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
