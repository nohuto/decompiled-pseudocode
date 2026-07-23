/*
 * XREFs of Feature_50070238__private_IsEnabledDeviceUsageNoInline @ 0x14071D5F8
 * Callers:
 *     BgpBcInitializeCriticalMode @ 0x140D1AA6C (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     Feature_50070238__private_IsEnabledFallback @ 0x14071D634 (Feature_50070238__private_IsEnabledFallback.c)
 */

__int64 Feature_50070238__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_50070238__private_featureState & 0x10) != 0 )
    return Feature_50070238__private_featureState & 1;
  else
    return Feature_50070238__private_IsEnabledFallback((unsigned int)Feature_50070238__private_featureState, 3LL);
}
