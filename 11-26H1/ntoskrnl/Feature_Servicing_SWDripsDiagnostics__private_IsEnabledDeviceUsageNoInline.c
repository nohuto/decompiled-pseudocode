/*
 * XREFs of Feature_Servicing_SWDripsDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x140526BA0
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x1403EC374 (PpmExitCoordinatedIdle.c)
 *     PopCalculateCsSummary @ 0x14042A4C8 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopCalculateIdleInformation @ 0x140434E0C (PopCalculateIdleInformation.c)
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1407D6328 (PopSleepstudyCaptureResiliencyStatistics.c)
 *     PopDiagTraceCsExitReason @ 0x140B58D58 (PopDiagTraceCsExitReason.c)
 *     PopSleepstudyCaptureSessionStatistics @ 0x140B65FE4 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     Feature_Servicing_SWDripsDiagnostics__private_IsEnabledFallback @ 0x140526BDC (Feature_Servicing_SWDripsDiagnostics__private_IsEnabledFallback.c)
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
