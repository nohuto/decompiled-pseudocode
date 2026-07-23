/*
 * XREFs of Feature_1023137082__private_IsEnabledDeviceUsageNoInline @ 0x1406C9BF8
 * Callers:
 *     EtwpTraceThreadRundown @ 0x14051ED18 (EtwpTraceThreadRundown.c)
 *     EtwTraceThread @ 0x140A7C440 (EtwTraceThread.c)
 * Callees:
 *     Feature_1023137082__private_IsEnabledFallback @ 0x1406C9C34 (Feature_1023137082__private_IsEnabledFallback.c)
 */

__int64 Feature_1023137082__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1023137082__private_featureState & 0x10) != 0 )
    return Feature_1023137082__private_featureState & 1;
  else
    return Feature_1023137082__private_IsEnabledFallback((unsigned int)Feature_1023137082__private_featureState, 3LL);
}
