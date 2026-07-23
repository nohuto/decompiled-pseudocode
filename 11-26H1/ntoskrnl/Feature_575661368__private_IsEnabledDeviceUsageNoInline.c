/*
 * XREFs of Feature_575661368__private_IsEnabledDeviceUsageNoInline @ 0x1406C71D8
 * Callers:
 *     WmipQuerySingleMultiple @ 0x140829764 (WmipQuerySingleMultiple.c)
 *     WmipQueryAllDataMultiple @ 0x140A0C1A8 (WmipQueryAllDataMultiple.c)
 * Callees:
 *     Feature_575661368__private_IsEnabledFallback @ 0x1406C7214 (Feature_575661368__private_IsEnabledFallback.c)
 */

__int64 Feature_575661368__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_575661368__private_featureState & 0x10) != 0 )
    return Feature_575661368__private_featureState & 1;
  else
    return Feature_575661368__private_IsEnabledFallback((unsigned int)Feature_575661368__private_featureState, 3LL);
}
