/*
 * XREFs of RtlQueryAllInternalFeatureConfigurations @ 0x180148B60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180013B08 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180014134 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x180152FF0 (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 */

__int64 __fastcall RtlQueryAllInternalFeatureConfigurations(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r15d
  int AllInternalFeatureConfigurationsFromBufferSet; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v7 = a1;
  AllInternalFeatureConfigurationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(a1, 1, &v11, &v10);
  if ( AllInternalFeatureConfigurationsFromBufferSet >= 0 )
  {
    AllInternalFeatureConfigurationsFromBufferSet = RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet(
                                                      v10,
                                                      v7,
                                                      a3,
                                                      a4);
    if ( AllInternalFeatureConfigurationsFromBufferSet >= 0 )
    {
      if ( a2 )
        *a2 = v11;
      AllInternalFeatureConfigurationsFromBufferSet = 0;
    }
  }
  if ( v10 )
    RtlpFcBufferManagerDereferenceBuffers((volatile signed __int64 *)&xmmword_1801CCC48, v10);
  return (unsigned int)AllInternalFeatureConfigurationsFromBufferSet;
}
