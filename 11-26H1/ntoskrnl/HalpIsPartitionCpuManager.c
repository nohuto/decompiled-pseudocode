/*
 * XREFs of HalpIsPartitionCpuManager @ 0x140587720
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x140586D60 (HalpTimerInitializeHypervisorTimer.c)
 *     HalSocRequestConfigurationData @ 0x14059BCDC (HalSocRequestConfigurationData.c)
 *     HalpInterruptRegisterController @ 0x14059D384 (HalpInterruptRegisterController.c)
 *     HalpProcIsSmtDisabled @ 0x140CB5508 (HalpProcIsSmtDisabled.c)
 *     HalpMiscGetParameters @ 0x140CB5644 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 */

char HalpIsPartitionCpuManager()
{
  char v0; // r10
  char v6; // al
  unsigned __int64 v8; // [rsp+20h] [rbp-18h]

  if ( HalpPrebootMode )
    return 1;
  if ( HalpIsMicrosoftCompatibleHvLoaded() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    v8 = __PAIR64__(_RBX, _RAX);
    v6 = v0;
    if ( (v8 & 0x100000000000LL) != 0 )
      return 1;
    return v6;
  }
  return v0;
}
