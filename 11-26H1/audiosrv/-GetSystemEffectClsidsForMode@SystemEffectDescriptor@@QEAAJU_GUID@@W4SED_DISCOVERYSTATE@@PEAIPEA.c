/*
 * XREFs of ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180052700
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180139B8C (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MID.c)
 * Callees:
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18000DDCC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::GetSystemEffectClsidsForMode(
        __int64 a1,
        __m128i *i,
        int a3,
        _DWORD *a4,
        _QWORD *a5,
        int a6)
{
  unsigned __int64 v9; // xmm0_8
  __int64 v10; // r14
  int v11; // esi
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // ecx
  __int64 v16; // r10
  __int64 m; // r8
  __int64 v18; // r11
  int n; // eax
  _QWORD *v20; // r9
  __int64 v21; // r8
  int k; // eax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  void *v27; // rbx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  void *v30; // rax
  int j; // eax
  _QWORD *v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  SystemEffectChainDescriptor *v39; // rcx
  std::_Ref_count_base *v40; // rsi
  __m128i v41; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v41 = *i;
  v9 = _mm_srli_si128(*i, 8).m128i_u64[0];
  v10 = i->m128i_i64[0];
  if ( !a6 )
  {
    v11 = 0;
    v12 = *(int *)(a1 + 40);
    v13 = 0LL;
    for ( i = 0LL; ; ++i )
    {
      if ( v13 >= v12 )
        goto LABEL_7;
      if ( (__int64)i < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)i);
        __debugbreak();
      }
      v14 = *(__int64 *)((char *)i->m128i_i64 + *(_QWORD *)(a1 + 32));
      if ( *(_BYTE *)(v14 + 20) )
      {
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_DWORD *)(v14 + 8) )
            goto LABEL_6;
          v33 = (_QWORD *)(*(_QWORD *)v14 + 16LL * j);
          v34 = *v33 - v41.m128i_i64[0];
          if ( *v33 == v41.m128i_i64[0] )
            v34 = v33[1] - v9;
          if ( !v34 )
            break;
        }
        if ( j != -1 )
          break;
      }
LABEL_6:
      ++v11;
      ++v13;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    if ( v11 < 0 || v11 >= *(_DWORD *)(a1 + 40) )
    {
LABEL_71:
      ATL::_AtlRaiseException(0xC000008C, v35);
      JUMPOUT(0x180052A77LL);
    }
    v36 = 2LL * v11;
    v37 = *(_QWORD *)(a1 + 32);
    v38 = *(_QWORD *)(v37 + 8 * v36 + 8);
    if ( v38 )
      _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
    v39 = *(SystemEffectChainDescriptor **)(v37 + 8 * v36);
    v40 = *(std::_Ref_count_base **)(v37 + 8 * v36 + 8);
    if ( (int)SystemEffectChainDescriptor::Resolve(v39, (struct SystemEffectDescriptor *)a1) < 0 )
    {
      if ( v40 )
        std::_Ref_count_base::_Decref(v40);
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
LABEL_17:
      v21 = *(_QWORD *)(a1 + 16);
      if ( v21 )
      {
        for ( k = 0; k < *(_DWORD *)(v21 + 8); ++k )
        {
          v23 = (_QWORD *)(*(_QWORD *)v21 + 16LL * k);
          v24 = *v23 - v41.m128i_i64[0];
          if ( *v23 == v41.m128i_i64[0] )
            v24 = v23[1] - v41.m128i_i64[1];
          if ( !v24 )
          {
            if ( k == -1 )
              break;
            v25 = *(_QWORD *)(a1 + 16);
            goto LABEL_29;
          }
        }
      }
      v25 = 0LL;
LABEL_43:
      if ( a3 == 1 )
        v25 = *(_QWORD *)(a1 + 16);
      goto LABEL_29;
    }
    if ( v40 )
      std::_Ref_count_base::_Decref(v40);
    if ( a1 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  }
LABEL_7:
  v15 = 0;
  v16 = 0LL;
  for ( m = 0LL; ; m += 16LL )
  {
    if ( v16 >= *(int *)(a1 + 40) )
      goto LABEL_17;
    if ( m < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)i);
      goto LABEL_71;
    }
    v18 = *(_QWORD *)(m + *(_QWORD *)(a1 + 32));
    for ( n = 0; ; ++n )
    {
      if ( n >= *(_DWORD *)(v18 + 8) )
        goto LABEL_25;
      v20 = (_QWORD *)(*(_QWORD *)v18 + 16LL * n);
      i = (__m128i *)(*v20 - v10);
      if ( *v20 == v10 )
        i = (__m128i *)(v20[1] - v9);
      if ( !i )
        break;
    }
    if ( n != -1 )
      break;
LABEL_25:
    ++v15;
    ++v16;
  }
  if ( v15 == -1 )
    goto LABEL_17;
  if ( v15 < 0 || v15 >= *(_DWORD *)(a1 + 40) )
  {
    ATL::_AtlRaiseException(0xC000008C, 0);
    __debugbreak();
  }
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL * v15);
  if ( !v25 )
    goto LABEL_43;
LABEL_29:
  *a4 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( !v25 )
    return 0LL;
  v26 = v25 + 56;
  if ( a3 != 1 )
    v26 = v25 + 40;
  if ( !a5 || *(int *)(v26 + 8) <= 0 )
  {
LABEL_40:
    *a4 = *(_DWORD *)(v26 + 8);
    return 0LL;
  }
  v27 = 0LL;
  v28 = *(int *)(v26 + 8);
  if ( 0xFFFFFFFFFFFFFFFFuLL / v28 >= 0x10 )
  {
    v29 = 16 * v28;
    if ( v29 <= 0x7FFFFFFF )
    {
      v30 = CoTaskMemAlloc((unsigned int)v29);
      v27 = v30;
      if ( v30 )
      {
        memcpy_0(v30, *(const void **)v26, 16LL * *(int *)(v26 + 8));
        *a5 = v27;
        CoTaskMemFree(0LL);
        goto LABEL_40;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x270,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  CoTaskMemFree(v27);
  return 2147942414LL;
}
