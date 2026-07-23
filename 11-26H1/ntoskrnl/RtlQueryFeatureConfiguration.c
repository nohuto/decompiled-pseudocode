/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1404C5BC0
 * Callers:
 *     CmQuerySingleFeatureConfiguration @ 0x140AF28CC (CmQuerySingleFeatureConfiguration.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140B4B9AC (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140B517FC (wil_RtlStagingConfig_QueryFeatureState.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     RtlAcquireSwapReference @ 0x14031057C (RtlAcquireSwapReference.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404C5CC4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140A52258 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcEnterRegion @ 0x140B121BC (RtlpFcEnterRegion.c)
 *     RtlpFcGetBufferManager @ 0x140B2F118 (RtlpFcGetBufferManager.c)
 */

NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  __int64 *BufferManager; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // eax
  ULONGLONG v12; // rsi
  __int64 v13; // r15
  int FeatureConfigurationFromBufferSet; // eax
  NTSTATUS v15; // ebx
  __m128i v16; // xmm1
  __m128i v18[2]; // [rsp+20h] [rbp-28h] BYREF

  v18[0] = 0LL;
  if ( KeGetEffectiveIrql() <= 1u
    || ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0 && !PoPowerDownActionInProgress )
  {
    BufferManager = (__int64 *)RtlpFcGetBufferManager();
    RtlpFcEnterRegion();
    v11 = RtlAcquireSwapReference(BufferManager, v9, v10);
    v12 = BufferManager[v11 + 27];
    v13 = 12LL * v11;
    FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(
                                          &BufferManager[v13 + 3],
                                          FeatureId,
                                          (unsigned int)ConfigurationType,
                                          v18);
    v15 = FeatureConfigurationFromBufferSet;
    if ( FeatureConfigurationFromBufferSet < 0 )
    {
      if ( FeatureConfigurationFromBufferSet != -1073741275 && FeatureConfigurationFromBufferSet != -2147483614 )
        goto LABEL_5;
    }
    else
    {
      v16 = v18[0];
      v15 = 0;
      *(_QWORD *)&FeatureConfiguration->FeatureId = v18[0].m128i_i64[0];
      FeatureConfiguration->VariantPayload = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
    }
    *ChangeStamp = v12;
LABEL_5:
    RtlpFcBufferManagerDereferenceBuffers(BufferManager, &BufferManager[v13 + 3]);
    return v15;
  }
  return -2147483614;
}
