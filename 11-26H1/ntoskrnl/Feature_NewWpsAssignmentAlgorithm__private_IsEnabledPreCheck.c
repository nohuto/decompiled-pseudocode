/*
 * XREFs of Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck @ 0x140417018
 * Callers:
 *     PpmPerfRecordMostActiveWorkloadClass @ 0x140416B34 (PpmPerfRecordMostActiveWorkloadClass.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052F77C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140534EB0 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_NewWpsAssignmentAlgorithm__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_NewWpsAssignmentAlgorithm__private_featureState;
  if ( (Feature_NewWpsAssignmentAlgorithm__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_NewWpsAssignmentAlgorithm__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_NewWpsAssignmentAlgorithm__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_NewWpsAssignmentAlgorithm__private_descriptor);
  }
  return 1LL;
}
