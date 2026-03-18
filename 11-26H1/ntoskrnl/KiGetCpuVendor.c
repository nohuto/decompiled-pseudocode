/*
 * XREFs of KiGetCpuVendor @ 0x140C0A4F8
 * Callers:
 *     HvlpProcessIommu @ 0x1404EE194 (HvlpProcessIommu.c)
 *     KiGetIptInfo @ 0x1405ECB58 (KiGetIptInfo.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x140824A80 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140824DB0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408266A4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408269B8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x140827210 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwSetPerformanceTraceInformation @ 0x140B36610 (EtwSetPerformanceTraceInformation.c)
 *     KiIsNXSupported @ 0x140BF425C (KiIsNXSupported.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     KiInitializeNxSupportDiscard @ 0x140CCB288 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     strncmp @ 0x14073D360 (strncmp.c)
 */

__int64 KiGetCpuVendor()
{
  struct _KPRCB *CurrentPrcb; // r8
  char Str1[16]; // [rsp+20h] [rbp-20h] BYREF

  _RAX = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  __asm { cpuid }
  CurrentPrcb->VendorString[0] = 0;
  *(_QWORD *)&Str1[4] = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&Str1[12] = _RCX;
  *(_QWORD *)CurrentPrcb->VendorString = __PAIR64__(_RDX, _RBX);
  *(_DWORD *)&CurrentPrcb->VendorString[8] = *(_DWORD *)&Str1[12];
  CurrentPrcb->VendorString[12] = 0;
  if ( strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
  {
    if ( !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
      return 2LL;
    if ( !strncmp(&Str1[4], "CentaurHauls", 0xCuLL) )
      return 3LL;
    if ( strncmp(&Str1[4], "HygonGenuine", 0xCuLL) )
      return strncmp(&Str1[4], "  Shanghai  ", 0xCuLL) == 0 ? 3 : 0;
  }
  return 1LL;
}
