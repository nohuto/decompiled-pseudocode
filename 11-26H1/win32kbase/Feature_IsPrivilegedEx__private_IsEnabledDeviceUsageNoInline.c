/*
 * XREFs of Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A31F8
 * Callers:
 *     HasPrivilege @ 0x1401D4E00 (HasPrivilege.c)
 *     _RegisterLogonProcess @ 0x1401D98D0 (_RegisterLogonProcess.c)
 * Callees:
 *     Feature_IsPrivilegedEx__private_IsEnabledFallback @ 0x1401C6140 (Feature_IsPrivilegedEx__private_IsEnabledFallback.c)
 */

__int64 Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IsPrivilegedEx__private_featureState & 0x10) != 0 )
    return Feature_IsPrivilegedEx__private_featureState & 1;
  else
    return Feature_IsPrivilegedEx__private_IsEnabledFallback(
             (unsigned int)Feature_IsPrivilegedEx__private_featureState,
             3LL);
}
