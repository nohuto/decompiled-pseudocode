/*
 * XREFs of Feature_VirtualMonIoctlChecks__private_IsEnabledDeviceUsageNoInline @ 0x14009320C
 * Callers:
 *     DpiIndirectDdiIoControl @ 0x14044250C (DpiIndirectDdiIoControl.c)
 * Callees:
 *     Feature_VirtualMonIoctlChecks__private_IsEnabledFallback @ 0x140093248 (Feature_VirtualMonIoctlChecks__private_IsEnabledFallback.c)
 */

__int64 Feature_VirtualMonIoctlChecks__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_VirtualMonIoctlChecks__private_featureState & 0x10) != 0 )
    return Feature_VirtualMonIoctlChecks__private_featureState & 1;
  else
    return Feature_VirtualMonIoctlChecks__private_IsEnabledFallback(
             (unsigned int)Feature_VirtualMonIoctlChecks__private_featureState,
             3LL);
}
