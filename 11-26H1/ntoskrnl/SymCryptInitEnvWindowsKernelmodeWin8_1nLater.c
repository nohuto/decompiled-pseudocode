/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1405532EC
 * Callers:
 *     SymCryptInit @ 0x1405E5590 (SymCryptInit.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x14055622C (SymCryptDetectCpuFeaturesByCpuid.c)
 *     SymCryptInitEnvCommon @ 0x1405563AC (SymCryptInitEnvCommon.c)
 *     SymCryptFatal @ 0x1405E5578 (SymCryptFatal.c)
 *     RtlGetEnabledExtendedFeatures @ 0x140619420 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlGetVersion @ 0x140A92BE0 (RtlGetVersion.c)
 */

__int64 __fastcall SymCryptInitEnvWindowsKernelmodeWin8_1nLater(unsigned int a1)
{
  __int64 result; // rax
  char EnabledExtendedFeatures; // al
  struct _OSVERSIONINFOW VersionInformation; // [rsp+20h] [rbp-138h] BYREF

  result = (unsigned int)g_SymCryptFlags;
  if ( (g_SymCryptFlags & 1) == 0 )
  {
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( RtlGetVersion(&VersionInformation) < 0 )
      SymCryptFatal(1853059702LL);
    if ( VersionInformation.dwMajorVersion < 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion < 3 )
    {
      SymCryptFatal(1853059702LL);
    }
    SymCryptDetectCpuFeaturesByCpuid(1LL);
    EnabledExtendedFeatures = RtlGetEnabledExtendedFeatures(0xFFFFFFFFFFFFFFFFuLL);
    if ( (EnabledExtendedFeatures & 4) == 0 )
      g_SymCryptCpuFeaturesNotPresent |= 0x10u;
    if ( (EnabledExtendedFeatures & 0xE0) == 0 )
      g_SymCryptCpuFeaturesNotPresent |= 0x1000u;
    g_SymCryptCpuFeaturesNotPresent &= ~0x20u;
    return SymCryptInitEnvCommon(a1);
  }
  return result;
}
