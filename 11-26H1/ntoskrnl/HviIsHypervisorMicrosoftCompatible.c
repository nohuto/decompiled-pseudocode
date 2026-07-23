/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1406E0BE4
 * Callers:
 *     HvlpTryConfigureInterface @ 0x1405C405C (HvlpTryConfigureInterface.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F4498 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1406E0980 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorVersion @ 0x1406E0A60 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1406E0AA8 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x1406E0B48 (HviGetIptFeatures.c)
 *     HalpDmaInitializeCvmSupport @ 0x140CB6BC0 (HalpDmaInitializeCvmSupport.c)
 *     MiInitializeSystemDefaults @ 0x140CF9BC0 (MiInitializeSystemDefaults.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1406E0A18 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
