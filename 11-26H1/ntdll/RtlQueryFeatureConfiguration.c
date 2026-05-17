/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x1800E3B20
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1800E3A50 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     RtlpFtInitialize @ 0x18011D868 (RtlpFtInitialize.c)
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180013B08 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180014134 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1800E4000 (RtlQueryInternalFeatureConfiguration.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x1800E40C0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x18010ABF0 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18016F134 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

__int64 __fastcall RtlQueryFeatureConfiguration(__int64 a1, unsigned int a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v7; // r15d
  int v8; // ebx
  __m128i v9; // xmm1
  unsigned __int64 v10; // rax
  int v11; // eax
  __m128i v12; // xmm1
  unsigned __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __m128i v16; // [rsp+30h] [rbp-10h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v7 = a1;
  v16 = 0LL;
  if ( !a2 )
  {
    v8 = RtlQueryInternalFeatureConfiguration(a1, 1LL, &v14, &v16);
    if ( v8 >= 0 && (v16.m128i_i8[12] & 1) != 0 )
    {
      v9 = v16;
      v10 = v14;
      *(_QWORD *)a4 = v16.m128i_i64[0];
      *(_DWORD *)(a4 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
      *a3 = v10;
      return (unsigned int)v8;
    }
  }
  if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(a1, 0, &v14, &v15) < 0 )
  {
    v8 = RtlpFcQueryFeatureConfigurationFromKernel(v7, a2, a3, &v16);
    if ( !v8 )
      RtlpFcConvertFeatureConfigurationsInternalToExternal(&v16, a4, 1LL);
    goto LABEL_9;
  }
  v11 = RtlpFcQueryFeatureConfigurationFromBufferSet(v15, v7, a2, &v16);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v12 = v16;
    v8 = 0;
    *(_QWORD *)a4 = v16.m128i_i64[0];
    *(_DWORD *)(a4 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
LABEL_8:
    *a3 = v14;
    goto LABEL_9;
  }
  if ( v11 == -1073741275 || v11 == -2147483614 )
    goto LABEL_8;
LABEL_9:
  if ( v15 )
    RtlpFcBufferManagerDereferenceBuffers((volatile signed __int64 *)&xmmword_1801CCC48, v15);
  return (unsigned int)v8;
}
