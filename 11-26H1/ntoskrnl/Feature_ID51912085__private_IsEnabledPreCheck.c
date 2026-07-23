/*
 * XREFs of Feature_ID51912085__private_IsEnabledPreCheck @ 0x14048E9D0
 * Callers:
 *     PspThreadOpen @ 0x1409474A0 (PspThreadOpen.c)
 *     SeQuerySigningPolicy @ 0x140A3B45C (SeQuerySigningPolicy.c)
 *     PspProcessOpen @ 0x140A859D0 (PspProcessOpen.c)
 *     PspValidateCreateProcessProtection @ 0x140B1DB84 (PspValidateCreateProcessProtection.c)
 *     SepSetSystemPaths @ 0x140B603B4 (SepSetSystemPaths.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_ID51912085__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_ID51912085__private_featureState;
  if ( (Feature_ID51912085__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_ID51912085__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_ID51912085__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &Feature_ID51912085__private_descriptor);
  }
  return 1LL;
}
