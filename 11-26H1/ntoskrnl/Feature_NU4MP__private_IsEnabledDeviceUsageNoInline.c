/*
 * XREFs of Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80
 * Callers:
 *     PopDiagTraceAcDcStateChange @ 0x1407D54C4 (PopDiagTraceAcDcStateChange.c)
 *     PopDiagTraceBatteryCountChange @ 0x1407D5EF0 (PopDiagTraceBatteryCountChange.c)
 *     PopDiagTraceExternalDisplayState @ 0x1407D668C (PopDiagTraceExternalDisplayState.c)
 *     PopDiagTracePreSleepNotification @ 0x1407D79C4 (PopDiagTracePreSleepNotification.c)
 *     SshSessionManagerTraceBatteryCountChange @ 0x1407E908C (SshSessionManagerTraceBatteryCountChange.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x1407E914C (SshSessionManagerTraceCsEnterReason.c)
 *     SshSessionManagerTraceSystemStop @ 0x1407E94B8 (SshSessionManagerTraceSystemStop.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 *     PopIsInputSuppressionEngaged @ 0x140ADB528 (PopIsInputSuppressionEngaged.c)
 *     PopEvaluateInputSuppressionAction @ 0x140B763E0 (PopEvaluateInputSuppressionAction.c)
 *     PopUpdateExternalDisplayState @ 0x140B777F0 (PopUpdateExternalDisplayState.c)
 *     SshSessionManagerTraceAcDcStateChange @ 0x140B77844 (SshSessionManagerTraceAcDcStateChange.c)
 *     SshSessionManagerTraceCsExitReason @ 0x140B77904 (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140B77BD0 (SshSessionManagerTracePreSleepNotification.c)
 *     PopDiagTraceGracefulShutdown @ 0x140C03B68 (PopDiagTraceGracefulShutdown.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledFallback @ 0x140602FBC (Feature_NU4MP__private_IsEnabledFallback.c)
 */

__int64 Feature_NU4MP__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NU4MP__private_featureState & 0x10) != 0 )
    return Feature_NU4MP__private_featureState & 1;
  else
    return Feature_NU4MP__private_IsEnabledFallback((unsigned int)Feature_NU4MP__private_featureState, 3LL);
}
