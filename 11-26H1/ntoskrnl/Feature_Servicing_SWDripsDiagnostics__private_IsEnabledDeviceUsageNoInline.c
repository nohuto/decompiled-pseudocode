/*
 * XREFs of Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140529210
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1402F93B8 (PpmExitCoordinatedIdle.c)
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 *     PopCalculateCsSummary @ 0x140422F4C (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140423CE4 (PopCalculateIdleInformation.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D94D8 (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopDiagTraceCsExitReason @ 0x140B5BB78 (PopDiagTraceCsExitReason.c)
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B69084 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledFallback @ 0x14052924C (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_SWDripsDiagnostics__private_featureState & 0x10) != 0 )
    return Feature_Servicing_SWDripsDiagnostics__private_featureState & 1;
  else
    return Feature_Servicing_SWDripsDiagnostics__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_SWDripsDiagnostics__private_featureState,
             3LL);
}
