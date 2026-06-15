/*
 * XREFs of ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18000BFD0
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18000DDCC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::GetChainDescriptorForMode(__int64 a1, __m128i *a2, int a3)
{
  __int64 *v3; // r15
  unsigned __int64 v5; // xmm0_8
  __int64 v6; // r12
  int v7; // edi
  __int64 v8; // rcx
  __int64 i; // r8
  __int64 v10; // r9
  int v11; // r8d
  __int64 v12; // rsi
  __int64 k; // r11
  __int64 v14; // rdi
  __int64 v15; // r10
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v19; // r8
  int m; // ecx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  int j; // r11d
  _QWORD *v24; // r10
  unsigned __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rdi
  __int64 v28; // rax
  SystemEffectChainDescriptor *v29; // rcx
  std::_Ref_count_base *v30; // rdi

  v3 = (__int64 *)a2;
  v5 = _mm_srli_si128(*a2, 8).m128i_u64[0];
  v6 = a2->m128i_i64[0];
  if ( !a3 )
  {
    v7 = 0;
    a2 = (__m128i *)*(int *)(a1 + 40);
    v8 = 0LL;
    for ( i = 0LL; ; i += 16LL )
    {
      if ( v8 >= (__int64)a2 )
        goto LABEL_7;
      if ( i < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
        __debugbreak();
      }
      v10 = *(_QWORD *)(i + *(_QWORD *)(a1 + 32));
      if ( *(_BYTE *)(v10 + 20) )
      {
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_DWORD *)(v10 + 8) )
            goto LABEL_6;
          v24 = (_QWORD *)(*(_QWORD *)v10 + 16LL * j);
          v25 = *v24 - v6;
          if ( *v24 == v6 )
            v25 = v24[1] - v5;
          if ( !v25 )
            break;
        }
        if ( j != -1 )
          break;
      }
LABEL_6:
      ++v7;
      ++v8;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    if ( v7 < 0 || v7 >= *(_DWORD *)(a1 + 40) )
    {
LABEL_55:
      ATL::_AtlRaiseException(0xC000008C, v26);
      JUMPOUT(0x18000C24ELL);
    }
    v27 = *(_QWORD *)(a1 + 32) + 16LL * v7;
    v28 = *(_QWORD *)(v27 + 8);
    if ( v28 )
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
    v29 = *(SystemEffectChainDescriptor **)v27;
    v30 = *(std::_Ref_count_base **)(v27 + 8);
    if ( (int)SystemEffectChainDescriptor::Resolve(v29, (struct SystemEffectDescriptor *)a1) < 0 )
    {
      if ( v30 )
        std::_Ref_count_base::_Decref(v30);
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
      goto LABEL_21;
    }
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
    if ( a1 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  }
LABEL_7:
  v11 = 0;
  v12 = 0LL;
  for ( k = 0LL; ; k += 16LL )
  {
    if ( v12 >= *(int *)(a1 + 40) )
      goto LABEL_21;
    if ( k < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
      goto LABEL_55;
    }
    v14 = *(_QWORD *)(a1 + 32);
    v15 = *(_QWORD *)(k + v14);
    for ( LODWORD(a2) = 0; ; LODWORD(a2) = (_DWORD)a2 + 1 )
    {
      if ( (int)a2 >= *(_DWORD *)(v15 + 8) )
        goto LABEL_31;
      v16 = (_QWORD *)(*(_QWORD *)v15 + 16LL * (int)a2);
      v17 = *v16 - v6;
      if ( *v16 == v6 )
        v17 = v16[1] - v5;
      if ( !v17 )
        break;
    }
    if ( (_DWORD)a2 != -1 )
      break;
LABEL_31:
    ++v11;
    ++v12;
  }
  if ( v11 != -1 )
  {
    if ( v11 < 0 || v11 >= *(_DWORD *)(a1 + 40) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
      __debugbreak();
    }
    return *(_QWORD *)(v14 + 16LL * v11);
  }
LABEL_21:
  v19 = *(_QWORD *)(a1 + 16);
  if ( v19 )
  {
    for ( m = 0; m < *(_DWORD *)(v19 + 8); ++m )
    {
      v21 = (_QWORD *)(*(_QWORD *)v19 + 16LL * m);
      v22 = *v21 - *v3;
      if ( *v21 == *v3 )
        v22 = v21[1] - v3[1];
      if ( !v22 )
      {
        if ( m == -1 )
          return 0LL;
        return v19;
      }
    }
  }
  return 0LL;
}
