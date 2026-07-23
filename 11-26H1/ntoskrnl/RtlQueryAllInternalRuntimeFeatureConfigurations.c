/*
 * XREFs of RtlQueryAllInternalRuntimeFeatureConfigurations @ 0x14061A820
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404C5CC4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1404D2078 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet @ 0x14062798C (RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet.c)
 *     RtlpFcQueryAllGovernedFeaturesFromBufferSet @ 0x14080FB98 (RtlpFcQueryAllGovernedFeaturesFromBufferSet.c)
 *     RtlpFcGetBufferManager @ 0x140B2F118 (RtlpFcGetBufferManager.c)
 */

__int64 __fastcall RtlQueryAllInternalRuntimeFeatureConfigurations(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 *BufferManager; // rbp
  __int64 v10; // r8
  __int64 v11; // rdi
  unsigned int AllInternalFeatureConfigurationsFromBufferSet; // eax
  __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned int AllGovernedFeaturesFromBufferSet; // eax
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[4]; // [rsp+28h] [rbp-20h] BYREF

  v18[0] = 0LL;
  v17 = 0LL;
  BufferManager = (unsigned __int64 *)RtlpFcGetBufferManager();
  RtlpFcBufferManagerReferenceBuffers((__int64)BufferManager, (__int64)v18, &v17);
  v10 = a2;
  v11 = v17;
  AllInternalFeatureConfigurationsFromBufferSet = RtlpFcQueryAllInternalFeatureConfigurationsFromBufferSet(
                                                    v17,
                                                    1LL,
                                                    v10,
                                                    a3);
  v14 = AllInternalFeatureConfigurationsFromBufferSet;
  if ( (int)(AllInternalFeatureConfigurationsFromBufferSet + 0x80000000) < 0
    || AllInternalFeatureConfigurationsFromBufferSet == -2147483643 )
  {
    AllGovernedFeaturesFromBufferSet = RtlpFcQueryAllGovernedFeaturesFromBufferSet(v11, a4, a5);
    if ( ((AllGovernedFeaturesFromBufferSet + 0x80000000) & 0x80000000) != 0
      || AllGovernedFeaturesFromBufferSet == -2147483643 )
    {
      if ( v14 == -2147483643 || AllGovernedFeaturesFromBufferSet == -2147483643 )
      {
        v14 = -2147483643;
      }
      else
      {
        if ( a1 )
          *a1 = v18[0];
        v14 = 0;
      }
    }
    else
    {
      v14 = AllGovernedFeaturesFromBufferSet;
    }
  }
  RtlpFcBufferManagerDereferenceBuffers(BufferManager, v11, v13);
  return v14;
}
