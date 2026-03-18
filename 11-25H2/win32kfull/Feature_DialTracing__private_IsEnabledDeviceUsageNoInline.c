/*
 * XREFs of Feature_DialTracing__private_IsEnabledDeviceUsageNoInline @ 0x14028D6F8
 * Callers:
 *     ??0InteractiveControlManager@@AEAA@XZ @ 0x14012FDB0 (--0InteractiveControlManager@@AEAA@XZ.c)
 *     DisableUserkTraceLogging @ 0x14028D5E0 (DisableUserkTraceLogging.c)
 *     EnableUserkTraceLogging @ 0x14028D690 (EnableUserkTraceLogging.c)
 *     ??1InteractiveControlManager@@AEAA@XZ @ 0x1402DFB10 (--1InteractiveControlManager@@AEAA@XZ.c)
 * Callees:
 *     Feature_DialTracing__private_IsEnabledFallback @ 0x14028D730 (Feature_DialTracing__private_IsEnabledFallback.c)
 */

__int64 Feature_DialTracing__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DialTracing__private_featureState & 0x10) != 0 )
    return Feature_DialTracing__private_featureState & 1;
  else
    return Feature_DialTracing__private_IsEnabledFallback((unsigned int)Feature_DialTracing__private_featureState, 3LL);
}
