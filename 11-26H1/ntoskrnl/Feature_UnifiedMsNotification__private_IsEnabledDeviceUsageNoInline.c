/*
 * XREFs of Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline @ 0x14060052C
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     Feature_UnifiedMsNotification__private_IsEnabledFallback @ 0x140600568 (Feature_UnifiedMsNotification__private_IsEnabledFallback.c)
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
