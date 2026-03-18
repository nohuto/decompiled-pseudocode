/*
 * XREFs of Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline @ 0x1401B3454
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     Feature_HostServiceSessionInitFailure__private_IsEnabledFallback @ 0x1401B348C (Feature_HostServiceSessionInitFailure__private_IsEnabledFallback.c)
 */

__int64 Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HostServiceSessionInitFailure__private_featureState & 0x10) != 0 )
    return Feature_HostServiceSessionInitFailure__private_featureState & 1;
  else
    return Feature_HostServiceSessionInitFailure__private_IsEnabledFallback(
             (unsigned int)Feature_HostServiceSessionInitFailure__private_featureState,
             3LL);
}
