/*
 * XREFs of RtlQueryAllInternalFeatureConfigurations @ 0x140617720
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404CC294 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D88A8 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x14062493C (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x140B2D098 (RtlpFcGetBufferManager.c)
 */

__int64 __fastcall RtlQueryAllInternalFeatureConfigurations(unsigned int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *BufferManager; // rbp
  int AllInternalFeatureConfigurationsFromBufferSet; // ebx
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  BufferManager = (unsigned __int64 *)RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers((__int64)BufferManager, (__int64)&v13, &v12);
  AllInternalFeatureConfigurationsFromBufferSet = RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet(
                                                    v12,
                                                    a1,
                                                    a3,
                                                    a4);
  if ( AllInternalFeatureConfigurationsFromBufferSet >= 0 )
  {
    if ( a2 )
      *a2 = v13;
    AllInternalFeatureConfigurationsFromBufferSet = 0;
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v12, v10);
  return (unsigned int)AllInternalFeatureConfigurationsFromBufferSet;
}
