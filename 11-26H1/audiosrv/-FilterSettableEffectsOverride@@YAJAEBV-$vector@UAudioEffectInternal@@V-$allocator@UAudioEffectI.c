/*
 * XREFs of ?FilterSettableEffectsOverride@@YAJAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@AEAV32@@Z @ 0x1800AA57C
 * Callers:
 *     ?HasSameOverrideWithDifferentStates@@YA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@1@Z @ 0x1800AA3F4 (-HasSameOverrideWithDifferentStates@@YA_NAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioE.c)
 *     ?AreEffectsOverrideEqual@@YA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@2@1@Z @ 0x1800FA874 (-AreEffectsOverrideEqual@@YA_NAEBV-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectIntern.c)
 * Callees:
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@AEAAPEAUAudioEffectState@CProcessingModeParameters@@QEAU23@$$QEAU23@@Z @ 0x1800D3E58 (--$_Emplace_reallocate@UAudioEffectState@CProcessingModeParameters@@@-$vector@UAudioEffectState@.c)
 */

__int64 __fastcall FilterSettableEffectsOverride(_QWORD **a1, __m128i **a2, __int64 a3, const char *a4)
{
  __m128i *v6; // rbx
  __m128i *v7; // rsi
  __m128i v8; // xmm1
  _QWORD *v9; // rax
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rcx
  __m128i *v12; // rdx
  __int64 result; // rax
  __m128i v14; // [rsp+28h] [rbp-30h] BYREF
  __int32 v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *a2;
  v7 = a2[1];
  try
  {
    while ( v6 != v7 )
    {
      v8 = *v6;
      v14 = *v6;
      v15 = v6[1].m128i_i32[0];
      v9 = *a1;
      if ( *a1 != a1[1] )
      {
        v10 = _mm_srli_si128(v8, 8).m128i_u64[0];
        while ( 1 )
        {
          v11 = v8.m128i_i64[0] - *v9;
          if ( v8.m128i_i64[0] == *v9 )
            v11 = v10 - v9[1];
          if ( !v11 )
            break;
          v9 += 3;
          if ( v9 == a1[1] )
            goto LABEL_13;
        }
        v12 = *(__m128i **)(a3 + 8);
        if ( v12 == *(__m128i **)(a3 + 16) )
        {
          std::vector<CProcessingModeParameters::AudioEffectState>::_Emplace_reallocate<CProcessingModeParameters::AudioEffectState>(
            a3,
            v12,
            &v14);
        }
        else
        {
          *v12 = v8;
          v12[1].m128i_i32[0] = v15;
          *(_QWORD *)(a3 + 8) += 20LL;
        }
      }
LABEL_13:
      v6 = (__m128i *)((char *)v6 + 20);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x73F,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           a4);
  }
  return result;
}
