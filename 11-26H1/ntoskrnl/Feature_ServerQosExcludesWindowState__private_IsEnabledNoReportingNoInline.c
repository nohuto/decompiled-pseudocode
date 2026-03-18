/*
 * XREFs of Feature_ServerQosExcludesWindowState__private_IsEnabledNoReportingNoInline @ 0x140450220
 * Callers:
 *     KiComputeThreadQos @ 0x1402BC220 (KiComputeThreadQos.c)
 * Callees:
 *     Feature_ServerQosExcludesWindowState__private_IsEnabledFallback @ 0x140532ED8 (Feature_ServerQosExcludesWindowState__private_IsEnabledFallback.c)
 */

__int64 Feature_ServerQosExcludesWindowState__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_ServerQosExcludesWindowState__private_featureState & 2) != 0 )
    return Feature_ServerQosExcludesWindowState__private_featureState & 1;
  else
    return Feature_ServerQosExcludesWindowState__private_IsEnabledFallback(
             (unsigned int)Feature_ServerQosExcludesWindowState__private_featureState,
             0LL);
}
