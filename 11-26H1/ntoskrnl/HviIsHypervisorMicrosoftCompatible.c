/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1406DC944
 * Callers:
 *     HvlpTryConfigureInterface @ 0x1405C17EC (HvlpTryConfigureInterface.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1405F1AD8 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1406DC6E8 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406DC730 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorVersion @ 0x1406DC7C0 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1406DC808 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x1406DC8A8 (HviGetIptFeatures.c)
 *     HalpDmaInitializeCvmSupport @ 0x140CB0B80 (HalpDmaInitializeCvmSupport.c)
 *     MiInitializeSystemDefaults @ 0x140CF3840 (MiInitializeSystemDefaults.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1406DC778 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
