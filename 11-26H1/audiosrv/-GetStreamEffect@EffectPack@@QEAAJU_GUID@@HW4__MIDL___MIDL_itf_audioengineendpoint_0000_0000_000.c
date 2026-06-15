/*
 * XREFs of ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F8E8
 * Callers:
 *     ?DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180049CB0 (-DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J66PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800C91E0 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ?DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180138280 (-DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?GetSystemEffect@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18013A1BC (-GetSystemEffect@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@U_GUID@@HW.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18013A288 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x1800088C0 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18000DDCC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010920 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180010D90 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180139B8C (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MID.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::GetStreamEffect(
        EffectPack *this,
        struct _GUID *a2,
        _QWORD *a3,
        int a4,
        struct ICompositeSystemEffect **a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  unsigned __int64 v7; // r12
  int v8; // r13d
  struct _GUID *v9; // r15
  EffectPack *v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rsi
  struct _GUID v13; // xmm6
  __int64 v14; // rsi
  signed int v15; // r12d
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 i; // r11
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // r10
  __int64 j; // r9
  __int64 v23; // r11
  int k; // eax
  int m; // ecx
  __int64 v26; // rax
  bool v27; // zf
  int n; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  std::_Ref_count_base *v33; // r14
  struct _GUID v34; // [rsp+78h] [rbp-41h] BYREF
  struct _GUID v35; // [rsp+88h] [rbp-31h]
  struct _GUID v36; // [rsp+98h] [rbp-21h] BYREF
  __int64 v37; // [rsp+108h] [rbp+4Fh]
  struct _GUID *v38; // [rsp+110h] [rbp+57h]
  int v39; // [rsp+118h] [rbp+5Fh]

  v39 = (int)a3;
  v38 = a2;
  v7 = a4;
  v8 = (int)a3;
  v9 = a2;
  v10 = this;
  v11 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (unsigned __int64)a4 >= *((_QWORD *)this + 180) )
    goto LABEL_73;
  v12 = 96LL * a4;
  v37 = v12;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + *((_QWORD *)this + 181)));
  if ( v7 >= *((_QWORD *)v10 + 182) )
    goto LABEL_73;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + *((_QWORD *)v10 + 183)));
  if ( v7 >= *((_QWORD *)v10 + 184) )
    goto LABEL_73;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + *((_QWORD *)v10 + 185)));
  if ( v7 >= *((_QWORD *)v10 + 202) )
    goto LABEL_73;
  if ( !*(_DWORD *)(*((_QWORD *)v10 + 203) + 4 * v7) )
    return v11;
  if ( v8 )
    goto LABEL_41;
  v13 = *v9;
  if ( v7 >= *((_QWORD *)v10 + 180) )
    goto LABEL_73;
  v14 = *((_QWORD *)v10 + 181) + v12;
  if ( (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(*((CEndpointCharacteristics **)v10 + 198))
    || (_DWORD)v7 == 3 )
  {
    v35 = v13;
    v34 = v13;
    if ( *(_BYTE *)(v14 + 52) )
    {
      v15 = 0;
      v16 = *(int *)(v14 + 40);
      v17 = 0LL;
      for ( i = 0LL; ; i += 16LL )
      {
        if ( v17 >= v16 )
          goto LABEL_21;
        if ( i < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
          __debugbreak();
        }
        v19 = *(_QWORD *)(i + *(_QWORD *)(v14 + 32));
        if ( *(_BYTE *)(v19 + 20) )
        {
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v19, &v34) != -1 )
            break;
        }
        ++v15;
        ++v17;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 56));
      v31 = (_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                        v14 + 32,
                        v15);
      v32 = v31[1];
      if ( v32 )
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
      *(_QWORD *)&v36.Data1 = *v31;
      v33 = (std::_Ref_count_base *)v31[1];
      *(_QWORD *)v36.Data4 = v33;
      if ( (int)SystemEffectChainDescriptor::Resolve(
                  *(SystemEffectChainDescriptor **)&v36.Data1,
                  (struct SystemEffectDescriptor *)v14) < 0 )
      {
        if ( v33 )
          std::_Ref_count_base::_Decref(v33);
        if ( v14 != -56 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v14 + 56));
        goto LABEL_31;
      }
      if ( v33 )
        std::_Ref_count_base::_Decref(v33);
      if ( v14 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v14 + 56));
    }
LABEL_21:
    v20 = 0;
    v21 = 0LL;
    for ( j = 0LL; ; j += 16LL )
    {
      if ( v21 >= *(int *)(v14 + 40) )
        goto LABEL_31;
      if ( j < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
        __debugbreak();
      }
      v23 = *(_QWORD *)(j + *(_QWORD *)(v14 + 32));
      for ( k = 0; ; ++k )
      {
        if ( k >= *(_DWORD *)(v23 + 8) )
          goto LABEL_52;
        a3 = (_QWORD *)(*(_QWORD *)v23 + 16LL * k);
        a2 = (struct _GUID *)(*a3 - *(_QWORD *)&v34.Data1);
        if ( *a3 == *(_QWORD *)&v34.Data1 )
          a2 = (struct _GUID *)(a3[1] - *(_QWORD *)v34.Data4);
        if ( !a2 )
          break;
      }
      if ( k != -1 )
        break;
LABEL_52:
      ++v20;
      ++v21;
    }
    if ( v20 != -1 )
    {
      if ( v20 < 0 || v20 >= *(_DWORD *)(v14 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, 0);
        __debugbreak();
      }
      v27 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 16LL * v20) == 0LL;
      goto LABEL_39;
    }
LABEL_31:
    a3 = *(_QWORD **)(v14 + 16);
    if ( !a3 )
      return v11;
    for ( m = 0; ; ++m )
    {
      if ( m >= *((_DWORD *)a3 + 2) )
        return v11;
      a2 = (struct _GUID *)(*a3 + 16LL * m);
      v26 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&v35.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&v35.Data1 )
        v26 = *(_QWORD *)a2->Data4 - *(_QWORD *)v35.Data4;
      if ( !v26 )
        break;
    }
    v27 = m == -1;
    goto LABEL_39;
  }
  v34 = v13;
  for ( n = 0; n < *(_DWORD *)(v14 + 8); ++n )
  {
    a2 = (struct _GUID *)(*(_QWORD *)v14 + 16LL * n);
    v30 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&v34.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&v34.Data1 )
      v30 = *(_QWORD *)a2->Data4 - *(_QWORD *)v34.Data4;
    if ( !v30 )
      goto LABEL_57;
  }
  n = -1;
LABEL_57:
  v27 = n == -1;
LABEL_39:
  if ( !v27 )
  {
    v12 = v37;
LABEL_41:
    this = (EffectPack *)a4;
    if ( (unsigned __int64)a4 < *((_QWORD *)v10 + 180) )
    {
      v36 = *v38;
      return (unsigned int)EffectPack::GetInitializedSystemEffectInterface(
                             v10,
                             v12 + *((_QWORD *)v10 + 181),
                             1LL,
                             0LL,
                             &v36,
                             v39,
                             0,
                             a4,
                             a5,
                             a6,
                             a7);
    }
LABEL_73:
    _o_terminate(this, a2, a3);
    __debugbreak();
    JUMPOUT(0x18000FCDBLL);
  }
  return v11;
}
