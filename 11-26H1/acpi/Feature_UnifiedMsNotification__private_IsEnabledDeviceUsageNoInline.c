/*
 * XREFs of Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline @ 0x140065BD0
 * Callers:
 *     ACPIPepCleanupPlatformNotificationSupport @ 0x1400B4070 (ACPIPepCleanupPlatformNotificationSupport.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1400B4674 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepWnfCallback @ 0x1400B4A20 (ACPIPepWnfCallback.c)
 * Callees:
 *     Feature_UnifiedMsNotification__private_IsEnabledFallback @ 0x140065C0C (Feature_UnifiedMsNotification__private_IsEnabledFallback.c)
 */

__int64 Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UnifiedMsNotification__private_featureState & 0x10) != 0 )
    return Feature_UnifiedMsNotification__private_featureState & 1;
  else
    return Feature_UnifiedMsNotification__private_IsEnabledFallback(
             (unsigned int)Feature_UnifiedMsNotification__private_featureState,
             3LL);
}
