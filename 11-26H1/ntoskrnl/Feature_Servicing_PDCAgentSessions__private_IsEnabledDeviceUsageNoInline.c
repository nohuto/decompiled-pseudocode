/*
 * XREFs of Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x140603C28
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     PopSessionConnected @ 0x140B72588 (PopSessionConnected.c)
 *     PopSessionConnectionChange @ 0x140B72640 (PopSessionConnectionChange.c)
 * Callees:
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledFallback @ 0x140603C64 (Feature_Servicing_PDCAgentSessions__private_IsEnabledFallback.c)
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
