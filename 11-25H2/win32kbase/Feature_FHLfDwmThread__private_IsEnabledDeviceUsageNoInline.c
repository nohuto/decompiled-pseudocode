/*
 * XREFs of Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline @ 0x1401A712C
 * Callers:
 *     UserSurfaceAccessCheck @ 0x1400D5420 (UserSurfaceAccessCheck.c)
 *     InitClientInfo @ 0x140162A98 (InitClientInfo.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     Feature_FHLfDwmThread__private_IsEnabledFallback @ 0x1401A7164 (Feature_FHLfDwmThread__private_IsEnabledFallback.c)
 */

__int64 Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FHLfDwmThread__private_featureState & 0x10) != 0 )
    return Feature_FHLfDwmThread__private_featureState & 1;
  else
    return Feature_FHLfDwmThread__private_IsEnabledFallback(
             (unsigned int)Feature_FHLfDwmThread__private_featureState,
             3LL);
}
