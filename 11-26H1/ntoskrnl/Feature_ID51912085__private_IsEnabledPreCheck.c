/*
 * XREFs of Feature_ID51912085__private_IsEnabledPreCheck @ 0x140494E80
 * Callers:
 *     PspThreadOpen @ 0x1409854A0 (PspThreadOpen.c)
 *     SeQuerySigningPolicy @ 0x140A283BC (SeQuerySigningPolicy.c)
 *     PspProcessOpen @ 0x140A7FB60 (PspProcessOpen.c)
 *     PspValidateCreateProcessProtection @ 0x140B1B974 (PspValidateCreateProcessProtection.c)
 *     SepSetSystemPaths @ 0x140B5D234 (SepSetSystemPaths.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052D25C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140532A10 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
