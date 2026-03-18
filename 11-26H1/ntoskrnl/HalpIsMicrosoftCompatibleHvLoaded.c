/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B938C
 * Callers:
 *     HaliCompleteAcpiAPSleep @ 0x1404B9050 (HaliCompleteAcpiAPSleep.c)
 *     HalpArtAvailable @ 0x1404B9184 (HalpArtAvailable.c)
 *     HalSocRequestApi @ 0x1404EF27C (HalSocRequestApi.c)
 *     HalpCmcStartPolling @ 0x14057AB8C (HalpCmcStartPolling.c)
 *     HalpHvIsFrequencyAvailable @ 0x1405850F8 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsPartitionCpuManager @ 0x140585200 (HalpIsPartitionCpuManager.c)
 *     HalpProcGetFeatureBits @ 0x140587530 (HalpProcGetFeatureBits.c)
 *     HalpWdatDiscover @ 0x1405974A4 (HalpWdatDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x140598710 (HalpHvWatchdogDiscover.c)
 *     HalSocRequestConfigurationData @ 0x14059955C (HalSocRequestConfigurationData.c)
 *     HalpInterruptGetIrtInfo @ 0x1407815A8 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140BED728 (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140CAF604 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1404B9338 (HalpIsHvPresent.c)
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
