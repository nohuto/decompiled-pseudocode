/*
 * XREFs of Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140520D7C
 * Callers:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwSetInformation @ 0x1408287B0 (EtwSetInformation.c)
 *     EtwpTrackProviderBinary @ 0x140828908 (EtwpTrackProviderBinary.c)
 *     EtwpTrackProviderRegistration @ 0x140936F80 (EtwpTrackProviderRegistration.c)
 *     EtwpAddRegEntryToGroup @ 0x14093B720 (EtwpAddRegEntryToGroup.c)
 *     EtwpProviderArrivalCallback @ 0x14093C304 (EtwpProviderArrivalCallback.c)
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 *     EtwpSetProviderTraitsCommon @ 0x14093D5E4 (EtwpSetProviderTraitsCommon.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 * Callees:
 *     Feature_ModernWpp__private_IsEnabledFallback @ 0x1406C6548 (Feature_ModernWpp__private_IsEnabledFallback.c)
 */

__int64 Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ModernWpp__private_featureState & 0x10) != 0 )
    return Feature_ModernWpp__private_featureState & 1;
  else
    return Feature_ModernWpp__private_IsEnabledFallback((unsigned int)Feature_ModernWpp__private_featureState, 3LL);
}
