/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1404CC190
 * Callers:
 *     CmQuerySingleFeatureConfiguration @ 0x140AEFD08 (CmQuerySingleFeatureConfiguration.c)
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140B49C1C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x140B4EF6C (wil_RtlStagingConfig_QueryFeatureState.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     RtlAcquireSwapReference @ 0x1402C58E0 (RtlAcquireSwapReference.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404CC294 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140A48F68 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcEnterRegion @ 0x140B1077C (RtlpFcEnterRegion.c)
 *     RtlpFcGetBufferManager @ 0x140B2D098 (RtlpFcGetBufferManager.c)
 */

__int64 __fastcall RtlQueryFeatureConfiguration(unsigned int a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  __int64 *BufferManager; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r15
  int FeatureConfigurationFromBufferSet; // eax
  unsigned int v15; // ebx
  __m128i v16; // xmm1
  __m128i v18[2]; // [rsp+20h] [rbp-28h] BYREF

  v18[0] = 0LL;
  if ( KeGetEffectiveIrql() <= 1u
    || ((__int64)KiDpcWatchdogConfigurationLock.StackLimit & 3) == 0 && !BYTE1(stru_140F10828.WriteOperationCount) )
  {
    BufferManager = (__int64 *)RtlpFcGetBufferManager();
    RtlpFcEnterRegion();
    v11 = RtlAcquireSwapReference(BufferManager, v9, v10);
    v12 = BufferManager[v11 + 27];
    v13 = 12LL * v11;
    FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(
                                          &BufferManager[v13 + 3],
                                          a1,
                                          a2,
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
      *(_QWORD *)a4 = v18[0].m128i_i64[0];
      *(_DWORD *)(a4 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
    }
    *a3 = v12;
LABEL_5:
    RtlpFcBufferManagerDereferenceBuffers(BufferManager, &BufferManager[v13 + 3]);
    return v15;
  }
  return 2147483682LL;
}
