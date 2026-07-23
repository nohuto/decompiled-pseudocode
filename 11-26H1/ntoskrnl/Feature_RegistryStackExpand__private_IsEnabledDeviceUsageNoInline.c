/*
 * XREFs of Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404626A0
 * Callers:
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtCreateKeyTransacted @ 0x1409363A0 (NtCreateKeyTransacted.c)
 *     NtOpenKey @ 0x140936550 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140936630 (NtOpenKeyEx.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     NtCreateKey @ 0x140A88920 (NtCreateKey.c)
 * Callees:
 *     Feature_RegistryStackExpand__private_IsEnabledFallback @ 0x1405352F4 (Feature_RegistryStackExpand__private_IsEnabledFallback.c)
 */

__int64 Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RegistryStackExpand__private_featureState & 0x10) != 0 )
    return Feature_RegistryStackExpand__private_featureState & 1;
  else
    return Feature_RegistryStackExpand__private_IsEnabledFallback(
             (unsigned int)Feature_RegistryStackExpand__private_featureState,
             3LL);
}
