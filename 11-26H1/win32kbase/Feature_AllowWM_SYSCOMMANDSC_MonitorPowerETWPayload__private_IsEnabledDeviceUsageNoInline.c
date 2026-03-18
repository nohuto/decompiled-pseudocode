/*
 * XREFs of Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline @ 0x1401DBD10
 * Callers:
 *     EtwTraceQueuePostMessage @ 0x1400E6690 (EtwTraceQueuePostMessage.c)
 *     EtwTraceBeginRetrieveSendMessage @ 0x1401AB0D0 (EtwTraceBeginRetrieveSendMessage.c)
 *     EtwTraceBeginSendMessage @ 0x1401AB1D0 (EtwTraceBeginSendMessage.c)
 *     EtwTraceRetrievePostMessage @ 0x1401AB3D0 (EtwTraceRetrievePostMessage.c)
 * Callees:
 *     Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledFallback @ 0x1401DBD4C (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledFallback.c)
 */

__int64 Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_featureState & 0x10) != 0 )
    return Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_featureState & 1;
  else
    return Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_IsEnabledFallback(
             (unsigned int)Feature_AllowWM_SYSCOMMANDSC_MonitorPowerETWPayload__private_featureState,
             3LL);
}
