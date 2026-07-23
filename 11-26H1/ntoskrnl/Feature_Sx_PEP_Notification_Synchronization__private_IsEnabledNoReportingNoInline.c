/*
 * XREFs of Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x140603CFC
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403BE5F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxActivateDevice @ 0x1404CEB00 (PopFxActivateDevice.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1404D4680 (PopFxHandleReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x14060EED0 (PopIrpWorker.c)
 *     PopNotifyDevice @ 0x140C13C14 (PopNotifyDevice.c)
 *     PopSystemIrpCompletion @ 0x140C13DC0 (PopSystemIrpCompletion.c)
 * Callees:
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback @ 0x140603CDC (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback.c)
 */

__int64 Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Sx_PEP_Notification_Synchronization__private_featureState & 2) != 0 )
    return Feature_Sx_PEP_Notification_Synchronization__private_featureState & 1;
  else
    return Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback(
             (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_featureState,
             0);
}
