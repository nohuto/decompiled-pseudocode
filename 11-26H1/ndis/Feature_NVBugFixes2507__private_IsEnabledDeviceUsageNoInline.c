/*
 * XREFs of Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline @ 0x14009764C
 * Callers:
 *     PktMonAttachProvider @ 0x1400E8510 (PktMonAttachProvider.c)
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     Feature_NVBugFixes2507__private_IsEnabledFallback @ 0x140097688 (Feature_NVBugFixes2507__private_IsEnabledFallback.c)
 */

__int64 Feature_NVBugFixes2507__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NVBugFixes2507__private_featureState & 0x10) != 0 )
    return Feature_NVBugFixes2507__private_featureState & 1;
  else
    return Feature_NVBugFixes2507__private_IsEnabledFallback(
             (unsigned int)Feature_NVBugFixes2507__private_featureState,
             3LL);
}
