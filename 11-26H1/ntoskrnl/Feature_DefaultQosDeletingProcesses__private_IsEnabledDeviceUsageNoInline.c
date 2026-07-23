/*
 * XREFs of Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline @ 0x140617CAC
 * Callers:
 *     PspEnqueueProcessQosChangeNotification @ 0x140518208 (PspEnqueueProcessQosChangeNotification.c)
 *     PspProcessQosChangeNotificationInsertList @ 0x140618118 (PspProcessQosChangeNotificationInsertList.c)
 *     PspProcessQosChangeNotificationWorker @ 0x140B77F30 (PspProcessQosChangeNotificationWorker.c)
 * Callees:
 *     Feature_DefaultQosDeletingProcesses__private_IsEnabledFallback @ 0x140617CE8 (Feature_DefaultQosDeletingProcesses__private_IsEnabledFallback.c)
 */

__int64 Feature_DefaultQosDeletingProcesses__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DefaultQosDeletingProcesses__private_featureState & 0x10) != 0 )
    return Feature_DefaultQosDeletingProcesses__private_featureState & 1;
  else
    return Feature_DefaultQosDeletingProcesses__private_IsEnabledFallback(
             (unsigned int)Feature_DefaultQosDeletingProcesses__private_featureState,
             3LL);
}
