/*
 * XREFs of Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x140606734
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     PopSessionConnected @ 0x140B77568 (PopSessionConnected.c)
 *     PopSessionConnectionChange @ 0x140B77620 (PopSessionConnectionChange.c)
 * Callees:
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledFallback @ 0x140606770 (Feature_Servicing_PDCAgentSessions__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PDCAgentSessions__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PDCAgentSessions__private_featureState & 1;
  else
    return Feature_Servicing_PDCAgentSessions__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PDCAgentSessions__private_featureState,
             3LL);
}
