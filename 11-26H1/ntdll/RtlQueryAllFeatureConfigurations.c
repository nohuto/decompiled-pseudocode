/*
 * XREFs of RtlQueryAllFeatureConfigurations @ 0x18005FB00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005F238 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005F864 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18016E810 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryAllFeatureConfigurations(
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION Configurations,
        PSIZE_T ConfigurationCount)
{
  NTSTATUS AllFeatureConfigurationsFromBufferSet; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG v11[2]; // [rsp+28h] [rbp-10h] BYREF

  v11[0] = 0LL;
  v10 = 0LL;
  AllFeatureConfigurationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(
                                            *(__int64 *)&ConfigurationType,
                                            1,
                                            v11,
                                            &v10);
  if ( AllFeatureConfigurationsFromBufferSet >= 0 )
  {
    AllFeatureConfigurationsFromBufferSet = RtlpFcQueryAllFeatureConfigurationsFromBufferSet(
                                              v10,
                                              (unsigned int)ConfigurationType,
                                              Configurations,
                                              ConfigurationCount);
    if ( AllFeatureConfigurationsFromBufferSet >= 0 )
    {
      if ( ChangeStamp )
        *ChangeStamp = v11[0];
      AllFeatureConfigurationsFromBufferSet = 0;
    }
  }
  if ( v10 )
    RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&xmmword_1801CBC88, v10);
  return AllFeatureConfigurationsFromBufferSet;
}
