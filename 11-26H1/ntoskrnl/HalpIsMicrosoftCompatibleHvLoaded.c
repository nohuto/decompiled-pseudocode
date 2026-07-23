/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC
 * Callers:
 *     HaliCompleteAcpiAPSleep @ 0x1404B2880 (HaliCompleteAcpiAPSleep.c)
 *     HalpArtAvailable @ 0x1404B29B4 (HalpArtAvailable.c)
 *     HalSocRequestApi @ 0x1404E885C (HalSocRequestApi.c)
 *     HalpCmcStartPolling @ 0x14057D0BC (HalpCmcStartPolling.c)
 *     HalpHvIsFrequencyAvailable @ 0x140587618 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsPartitionCpuManager @ 0x140587720 (HalpIsPartitionCpuManager.c)
 *     HalpProcGetFeatureBits @ 0x140589A50 (HalpProcGetFeatureBits.c)
 *     HalpWdatDiscover @ 0x140599C24 (HalpWdatDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x14059AE90 (HalpHvWatchdogDiscover.c)
 *     HalSocRequestConfigurationData @ 0x14059BCDC (HalSocRequestConfigurationData.c)
 *     HalpInterruptGetIrtInfo @ 0x1407840A8 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140BF3728 (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140CB5644 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404B2B68 (HalpIsHvPresent.c)
 */

bool HalpIsMicrosoftCompatibleHvLoaded()
{
  char v0; // bl

  v0 = 0;
  if ( HalpIsHvPresent() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX == 824407624;
  }
  return v0;
}
