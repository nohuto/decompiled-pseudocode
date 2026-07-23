/*
 * XREFs of Feature_1144514872__private_IsEnabledDeviceUsageNoInline @ 0x1406CA1E8
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     Feature_1144514872__private_IsEnabledFallback @ 0x1406CA224 (Feature_1144514872__private_IsEnabledFallback.c)
 */

__int64 Feature_1144514872__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1144514872__private_featureState & 0x10) != 0 )
    return Feature_1144514872__private_featureState & 1;
  else
    return Feature_1144514872__private_IsEnabledFallback((unsigned int)Feature_1144514872__private_featureState, 3LL);
}
