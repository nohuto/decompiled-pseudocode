/*
 * XREFs of Feature_3043474747__private_IsEnabledDeviceUsageNoInline @ 0x1405B8698
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     Feature_3043474747__private_IsEnabledFallback @ 0x1405B86D4 (Feature_3043474747__private_IsEnabledFallback.c)
 */

__int64 Feature_3043474747__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3043474747__private_featureState & 0x10) != 0 )
    return Feature_3043474747__private_featureState & 1;
  else
    return Feature_3043474747__private_IsEnabledFallback((unsigned int)Feature_3043474747__private_featureState, 3LL);
}
