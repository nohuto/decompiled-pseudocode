/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1800ECBC0
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1800ECAEC (wil_RtlStagingConfig_QueryFeatureState.c)
 *     RtlpFtInitialize @ 0x18011D618 (RtlpFtInitialize.c)
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005F238 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005F864 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800ECD00 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800ECDC0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x180109488 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18016E134 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  NTSTATUS v8; // ebx
  __m128i v9; // xmm1
  ULONGLONG v10; // rax
  int v11; // eax
  __m128i v12; // xmm1
  ULONGLONG v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __m128i v16; // [rsp+30h] [rbp-10h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( ConfigurationType == RtlFeatureConfigurationBoot )
  {
    v8 = RtlQueryInternalFeatureConfiguration(FeatureId, 1LL, &v14, &v16);
    if ( v8 >= 0 && (v16.m128i_i8[12] & 1) != 0 )
    {
      v9 = v16;
      v10 = v14;
      *(_QWORD *)&FeatureConfiguration->FeatureId = v16.m128i_i64[0];
      FeatureConfiguration->VariantPayload = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
      *ChangeStamp = v10;
      return v8;
    }
  }
  if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(*(__int64 *)&FeatureId, 0, &v14, &v15) < 0 )
  {
    v8 = RtlpFcQueryFeatureConfigurationFromKernel(FeatureId, (unsigned int)ConfigurationType, ChangeStamp, &v16);
    if ( !v8 )
      RtlpFcConvertFeatureConfigurationsInternalToExternal(&v16, FeatureConfiguration, 1LL);
    goto LABEL_9;
  }
  v11 = RtlpFcQueryFeatureConfigurationFromBufferSet(v15, FeatureId, (unsigned int)ConfigurationType, &v16);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v12 = v16;
    v8 = 0;
    *(_QWORD *)&FeatureConfiguration->FeatureId = v16.m128i_i64[0];
    FeatureConfiguration->VariantPayload = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
LABEL_8:
    *ChangeStamp = v14;
    goto LABEL_9;
  }
  if ( v11 == -1073741275 || v11 == -2147483614 )
    goto LABEL_8;
LABEL_9:
  if ( v15 )
    RtlpFcBufferManagerDereferenceBuffers((unsigned __int64 *)&xmmword_1801CBC88, v15);
  return v8;
}
