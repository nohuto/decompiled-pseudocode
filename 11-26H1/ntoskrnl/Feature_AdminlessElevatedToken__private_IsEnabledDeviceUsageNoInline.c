/*
 * XREFs of Feature_AdminlessElevatedToken__private_IsEnabledDeviceUsageNoInline @ 0x1404D8854
 * Callers:
 *     SepOneWayLinkLogonSessions @ 0x14063DFB0 (SepOneWayLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessionsEx @ 0x14063E288 (SepOneWayLinkLogonSessionsEx.c)
 *     SepLogonSystemManagedAdmin @ 0x140B53828 (SepLogonSystemManagedAdmin.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     Feature_AdminlessElevatedToken__private_IsEnabledFallback @ 0x1405339AC (Feature_AdminlessElevatedToken__private_IsEnabledFallback.c)
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
