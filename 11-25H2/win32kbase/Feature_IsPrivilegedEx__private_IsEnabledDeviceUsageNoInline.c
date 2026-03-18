/*
 * XREFs of Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x1401AF438
 * Callers:
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 *     HasPrivilege @ 0x1401AF490 (HasPrivilege.c)
 * Callees:
 *     Feature_IsPrivilegedEx__private_IsEnabledFallback @ 0x1401AF470 (Feature_IsPrivilegedEx__private_IsEnabledFallback.c)
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
