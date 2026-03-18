/*
 * XREFs of Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline @ 0x1404DF174
 * Callers:
 *     SepOneWayLinkLogonSessions @ 0x14063AEE8 (SepOneWayLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessionsEx @ 0x14063B1C0 (SepOneWayLinkLogonSessionsEx.c)
 *     SepLogonSystemManagedAdmin @ 0x140B50F90 (SepLogonSystemManagedAdmin.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 * Callees:
 *     Feature_AdminlessElevatedToken__private_IsEnabledFallback @ 0x1405314AC (Feature_AdminlessElevatedToken__private_IsEnabledFallback.c)
 */

__int64 Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AdminlessElevatedToken__private_featureState & 0x10) != 0 )
    return Feature_AdminlessElevatedToken__private_featureState & 1;
  else
    return Feature_AdminlessElevatedToken__private_IsEnabledFallback(
             (unsigned int)Feature_AdminlessElevatedToken__private_featureState,
             3LL);
}
