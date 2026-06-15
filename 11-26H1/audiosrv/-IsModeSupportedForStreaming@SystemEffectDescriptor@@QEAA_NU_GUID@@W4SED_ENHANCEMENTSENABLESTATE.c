/*
 * XREFs of ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18004CFF8
 * Callers:
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180011074 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetRawModePostMixEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800804AC (-GetRawModePostMixEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 * Callees:
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18000DDCC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall SystemEffectDescriptor::IsModeSupportedForStreaming(__int64 a1, __m128i *a2, int a3)
{
  __int64 *v3; // r9
  unsigned __int64 v5; // xmm0_8
  __int64 v6; // r14
  int v7; // esi
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 j; // rcx
  __int64 v11; // r10
  int v12; // ecx
  __int64 v13; // r9
  __int64 n; // rdx
  __int64 v15; // r11
  int ii; // eax
  _QWORD *v17; // r10
  unsigned __int64 v18; // r8
  __int64 v19; // r8
  int m; // eax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  bool v24; // zf
  int i; // eax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  int k; // eax
  _QWORD *v30; // r8
  unsigned int v31; // edx
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  SystemEffectChainDescriptor *v35; // rcx
  std::_Ref_count_base *v36; // rsi
  __m128i v37; // [rsp+20h] [rbp-38h]

  v3 = (__int64 *)a2;
  if ( !a3 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
    {
      v27 = (_QWORD *)(*(_QWORD *)a1 + 16LL * i);
      v28 = *v27 - *v3;
      if ( *v27 == *v3 )
        v28 = v27[1] - v3[1];
      if ( !v28 )
        goto LABEL_41;
    }
    i = -1;
LABEL_41:
    v24 = i == -1;
    return !v24;
  }
  v37 = *a2;
  v5 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  v6 = a2->m128i_i64[0];
  if ( *(_BYTE *)(a1 + 52) )
  {
    v7 = 0;
    v8 = *(int *)(a1 + 40);
    v9 = 0LL;
    for ( j = 0LL; ; j += 16LL )
    {
      if ( v9 >= v8 )
        goto LABEL_8;
      if ( j < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
        __debugbreak();
      }
      v11 = *(_QWORD *)(j + *(_QWORD *)(a1 + 32));
      if ( *(_BYTE *)(v11 + 20) )
      {
        for ( k = 0; ; ++k )
        {
          if ( k >= *(_DWORD *)(v11 + 8) )
            goto LABEL_7;
          v30 = (_QWORD *)(*(_QWORD *)v11 + 16LL * k);
          a2 = (__m128i *)(*v30 - v37.m128i_i64[0]);
          if ( *v30 == v37.m128i_i64[0] )
            a2 = (__m128i *)(v30[1] - v5);
          if ( !a2 )
            break;
        }
        if ( k != -1 )
          break;
      }
LABEL_7:
      ++v7;
      ++v9;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    if ( v7 < 0 || v7 >= *(_DWORD *)(a1 + 40) )
    {
LABEL_66:
      ATL::_AtlRaiseException(0xC000008C, v31);
      JUMPOUT(0x18004D2A5LL);
    }
    v32 = 2LL * v7;
    v33 = *(_QWORD *)(a1 + 32);
    v34 = *(_QWORD *)(v33 + 8 * v32 + 8);
    if ( v34 )
      _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
    v35 = *(SystemEffectChainDescriptor **)(v33 + 8 * v32);
    v36 = *(std::_Ref_count_base **)(v33 + 8 * v32 + 8);
    if ( (int)SystemEffectChainDescriptor::Resolve(v35, (struct SystemEffectDescriptor *)a1) < 0 )
    {
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
LABEL_18:
      v19 = *(_QWORD *)(a1 + 16);
      if ( v19 )
      {
        for ( m = 0; m < *(_DWORD *)(v19 + 8); ++m )
        {
          v21 = (_QWORD *)(*(_QWORD *)v19 + 16LL * m);
          v22 = *v21 - v37.m128i_i64[0];
          if ( *v21 == v37.m128i_i64[0] )
            v22 = v21[1] - v37.m128i_i64[1];
          if ( !v22 )
          {
            if ( m == -1 )
              break;
            v23 = *(_QWORD *)(a1 + 16);
            goto LABEL_32;
          }
        }
      }
      v23 = 0LL;
      goto LABEL_32;
    }
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
    if ( a1 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  }
LABEL_8:
  v12 = 0;
  v13 = 0LL;
  for ( n = 0LL; ; n += 16LL )
  {
    if ( v13 >= *(int *)(a1 + 40) )
      goto LABEL_18;
    if ( n < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, n);
      goto LABEL_66;
    }
    v15 = *(_QWORD *)(n + *(_QWORD *)(a1 + 32));
    for ( ii = 0; ; ++ii )
    {
      if ( ii >= *(_DWORD *)(v15 + 8) )
        goto LABEL_26;
      v17 = (_QWORD *)(*(_QWORD *)v15 + 16LL * ii);
      v18 = *v17 - v6;
      if ( *v17 == v6 )
        v18 = v17[1] - v5;
      if ( !v18 )
        break;
    }
    if ( ii != -1 )
      break;
LABEL_26:
    ++v12;
    ++v13;
  }
  if ( v12 == -1 )
    goto LABEL_18;
  if ( v12 < 0 || v12 >= *(_DWORD *)(a1 + 40) )
  {
    ATL::_AtlRaiseException(0xC000008C, n);
    __debugbreak();
  }
  v23 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * v12);
LABEL_32:
  v24 = v23 == 0;
  return !v24;
}
