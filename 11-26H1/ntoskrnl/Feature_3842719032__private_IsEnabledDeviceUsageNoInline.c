/*
 * XREFs of Feature_3842719032__private_IsEnabledDeviceUsageNoInline @ 0x140619394
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x1403CF940 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     Feature_3842719032__private_IsEnabledFallback @ 0x1406193D0 (Feature_3842719032__private_IsEnabledFallback.c)
 */

__int64 Feature_3842719032__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_3842719032__private_featureState & 0x10) != 0 )
    return Feature_3842719032__private_featureState & 1;
  else
    return Feature_3842719032__private_IsEnabledFallback((unsigned int)Feature_3842719032__private_featureState, 3LL);
}
