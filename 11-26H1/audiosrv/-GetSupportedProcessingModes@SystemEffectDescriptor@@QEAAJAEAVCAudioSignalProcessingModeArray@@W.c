/*
 * XREFs of ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18000CB9C
 * Callers:
 *     ?GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x18000CB1C (-GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x18000E7D8 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18013A288 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010920 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800B0AF8 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetSupportedProcessingModes(int *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v5; // esi
  void *v6; // rax
  int v7; // eax
  int v8; // r14d
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // r12
  unsigned int v12; // esi
  __int64 v13; // rax
  _QWORD *v15; // rdx
  int v16; // r15d
  __int64 v17; // r14
  int v18; // r14d
  __int64 v19; // r15
  __int64 v20; // rax
  int j; // eax
  _QWORD *v22; // r8
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // r12
  unsigned int v26; // esi
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rcx
  bool v30; // sf
  __int64 v31; // rdx
  int i; // eax
  _QWORD *v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  if ( a3 )
  {
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)a1);
    v16 = 0;
    v17 = 0LL;
    while ( v16 < a1[10] )
    {
      v28 = 0;
      if ( v17 < 0 )
      {
LABEL_67:
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v15);
        __debugbreak();
      }
      while ( 1 )
      {
        if ( v16 >= a1[10] )
          goto LABEL_67;
        v29 = *(_QWORD *)(v17 + *((_QWORD *)a1 + 4));
        if ( v28 >= *(_DWORD *)(v29 + 8) )
          break;
        if ( v28 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v15);
          __debugbreak();
        }
        v15 = (_QWORD *)(*(_QWORD *)v29 + 16LL * v28);
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_DWORD *)(v3 + 8) )
            goto LABEL_59;
          v33 = (_QWORD *)(*(_QWORD *)v3 + 16LL * i);
          v34 = *v33 - *v15;
          if ( *v33 == *v15 )
            v34 = v33[1] - v15[1];
          if ( !v34 )
            break;
        }
        if ( i == -1 )
        {
LABEL_59:
          v35 = *(_QWORD *)(v17 + *((_QWORD *)a1 + 4));
          if ( v28 >= *(_DWORD *)(v35 + 8) )
          {
            ATL::_AtlRaiseException(0xC000008C, (unsigned int)v15);
            __debugbreak();
          }
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                v3,
                                (_OWORD *)(*(_QWORD *)v35 + 16LL * v28)) )
          {
            v31 = 582LL;
            goto LABEL_71;
          }
        }
        ++v28;
      }
      ++v16;
      v17 += 16LL;
    }
    if ( !*((_QWORD *)a1 + 2) )
      return 0LL;
    v18 = 0;
    v19 = 0LL;
    while ( 2 )
    {
      v20 = *((_QWORD *)a1 + 2);
      if ( v18 >= *(_DWORD *)(v20 + 8) )
        return 0LL;
      if ( v18 < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v15);
        __debugbreak();
      }
      v15 = (_QWORD *)(*(_QWORD *)v20 + 16LL * v18);
      for ( j = 0; ; ++j )
      {
        if ( j >= *(_DWORD *)(v3 + 8) )
          goto LABEL_35;
        v22 = (_QWORD *)(*(_QWORD *)v3 + 16LL * j);
        v23 = *v22 - *v15;
        if ( *v22 == *v15 )
          v23 = v22[1] - v15[1];
        if ( !v23 )
          break;
      }
      if ( j != -1 )
      {
LABEL_44:
        ++v18;
        v19 += 16LL;
        continue;
      }
      break;
    }
LABEL_35:
    v24 = *(_DWORD *)(v3 + 8);
    v25 = **((_QWORD **)a1 + 2);
    if ( v24 != *(_DWORD *)(v3 + 12) )
    {
LABEL_41:
      v15 = (_QWORD *)(*(_QWORD *)v3 + 16LL * *(int *)(v3 + 8));
      if ( v15 )
        *(_OWORD *)v15 = *(_OWORD *)(v19 + v25);
      ++*(_DWORD *)(v3 + 8);
      goto LABEL_44;
    }
    if ( *(_DWORD *)(v3 + 12) )
    {
      v30 = (v24 & 0x40000000) != 0;
      v26 = 2 * v24;
      if ( v30 )
        goto LABEL_51;
    }
    else
    {
      v26 = 1;
    }
    if ( v26 <= 0x7FFFFFFuLL )
    {
      v27 = _o__recalloc(*(_QWORD *)v3, v26, 16LL);
      if ( v27 )
      {
        *(_DWORD *)(v3 + 12) = v26;
        *(_QWORD *)v3 = v27;
        goto LABEL_41;
      }
    }
LABEL_51:
    v31 = 594LL;
    goto LABEL_71;
  }
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 == a1[2] )
  {
    while ( v5 > 0 )
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v3, (unsigned int)--v5);
  }
  else
  {
    if ( *(_QWORD *)a2 )
    {
      free(*(void **)a2);
      *(_QWORD *)v3 = 0LL;
    }
    *(_QWORD *)(v3 + 8) = 0LL;
    v6 = calloc(a1[2], 0x10uLL);
    *(_QWORD *)v3 = v6;
    if ( v6 )
      *(_DWORD *)(v3 + 12) = a1[2];
  }
  v7 = a1[2];
  v8 = 0;
  if ( v7 > 0 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 < 0 || v8 >= v7 )
      {
        ATL::_AtlRaiseException(0xC000008C, a2);
        __debugbreak();
      }
      v10 = *(_DWORD *)(v3 + 8);
      v11 = *(_QWORD *)a1;
      if ( v10 != *(_DWORD *)(v3 + 12) )
        goto LABEL_17;
      if ( *(_DWORD *)(v3 + 12) )
      {
        v30 = (v10 & 0x40000000) != 0;
        v12 = 2 * v10;
        if ( v30 )
          goto LABEL_20;
      }
      else
      {
        v12 = 1;
      }
      LODWORD(a2) = v12;
      if ( v12 <= 0x7FFFFFFuLL )
      {
        v13 = _o__recalloc(*(_QWORD *)v3, v12, 16LL);
        if ( v13 )
        {
          *(_DWORD *)(v3 + 12) = v12;
          *(_QWORD *)v3 = v13;
LABEL_17:
          a2 = *(_QWORD *)v3 + 16LL * *(int *)(v3 + 8);
          if ( a2 )
            *(_OWORD *)a2 = *(_OWORD *)(v9 + v11);
          ++*(_DWORD *)(v3 + 8);
        }
      }
LABEL_20:
      v7 = a1[2];
      ++v8;
      v9 += 16LL;
    }
    while ( v8 < v7 );
  }
  if ( *(_DWORD *)(v3 + 8) == v7 )
    return 0LL;
  v31 = 568LL;
LABEL_71:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v31,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v36);
  return 2147942414LL;
}
