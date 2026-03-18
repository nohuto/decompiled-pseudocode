/*
 * XREFs of Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x1404690D0
 * Callers:
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtCreateKeyTransacted @ 0x140974390 (NtCreateKeyTransacted.c)
 *     NtOpenKey @ 0x140974540 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140974620 (NtOpenKeyEx.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     NtCreateKey @ 0x140A82AB0 (NtCreateKey.c)
 * Callees:
 *     Feature_RegistryStackExpand__private_IsEnabledFallback @ 0x140532E58 (Feature_RegistryStackExpand__private_IsEnabledFallback.c)
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
