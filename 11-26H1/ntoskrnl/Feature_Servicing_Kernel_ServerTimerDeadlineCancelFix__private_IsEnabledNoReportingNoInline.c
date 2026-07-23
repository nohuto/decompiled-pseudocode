/*
 * XREFs of Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline @ 0x1405EFA60
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1405EFCA8 (KePrepareClockTimerForIdle.c)
 * Callees:
 *     Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledFallback @ 0x1405EFA40 (Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_featureState & 2) != 0 )
    return Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_featureState & 1;
  else
    return Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Kernel_ServerTimerDeadlineCancelFix__private_featureState,
             0);
}
