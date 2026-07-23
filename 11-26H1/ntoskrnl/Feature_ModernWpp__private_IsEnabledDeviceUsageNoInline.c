/*
 * XREFs of Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140523420
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwSetInformation @ 0x14082E9F0 (EtwSetInformation.c)
 *     EtwpTrackProviderBinary @ 0x14082EB48 (EtwpTrackProviderBinary.c)
 *     EtwpTrackProviderRegistration @ 0x140912B20 (EtwpTrackProviderRegistration.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     EtwpSetProviderTraitsCommon @ 0x140919184 (EtwpSetProviderTraitsCommon.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     Feature_ModernWpp__private_IsEnabledFallback @ 0x1406CA244 (Feature_ModernWpp__private_IsEnabledFallback.c)
 */

__int64 Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ModernWpp__private_featureState & 0x10) != 0 )
    return Feature_ModernWpp__private_featureState & 1;
  else
    return Feature_ModernWpp__private_IsEnabledFallback((unsigned int)Feature_ModernWpp__private_featureState, 3LL);
}
