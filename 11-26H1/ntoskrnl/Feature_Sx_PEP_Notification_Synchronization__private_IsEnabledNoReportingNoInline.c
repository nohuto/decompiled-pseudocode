/*
 * XREFs of Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x14060124C
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403B46F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFxActivateDevice @ 0x1404D5290 (PopFxActivateDevice.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1404DAFA0 (PopFxHandleReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x14060BD70 (PopIrpWorker.c)
 *     PopNotifyDevice @ 0x140C0DA04 (PopNotifyDevice.c)
 *     PopSystemIrpCompletion @ 0x140C0DBB0 (PopSystemIrpCompletion.c)
 * Callees:
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback @ 0x14060122C (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledFallback.c)
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
