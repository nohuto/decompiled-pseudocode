/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000FE80
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18002C660 (AudioServerIsFormatSupported.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002D7E0 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18002F210 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     AudioServerGetMixFormat @ 0x180030220 (AudioServerGetMixFormat.c)
 * Callees:
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x1800088C0 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180008980 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18000DDCC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000F84C (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010920 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180010D90 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E04 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180010E90 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FF80 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     CreateAudioMediaType @ 0x1800B50F4 (CreateAudioMediaType.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180139B8C (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4__MIDL___MID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct EndpointCharacteristicsDescriptor *a1,
        struct _GUID *a2,
        int a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  __int64 *v8; // rbx
  unsigned __int16 *v9; // rsi
  const struct tWAVEFORMATEX *v10; // r15
  __int64 cbSize; // r14
  char *v12; // rax
  char *v13; // rdi
  __int64 v14; // r14
  unsigned __int16 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 k; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  _QWORD *v22; // rbx
  __int64 v23; // r15
  __int64 v24; // r13
  HRESULT AudioMediaType; // r12d
  struct _GUID *v26; // r15
  struct _GUID v27; // xmm6
  __int64 v28; // r14
  int v29; // r8d
  __int64 v30; // r11
  __int64 j; // r9
  __int64 v32; // r10
  IAudioMediaType **v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int16 v36; // ax
  __int64 v37; // rax
  HRESULT InitializedSystemEffectInterface; // eax
  CEndpointCharacteristics **v39; // r14
  bool v40; // zf
  __int64 v41; // rax
  int v42; // eax
  struct tWAVEFORMATEX **v43; // r15
  bool v45; // r14
  void *v46; // rcx
  const struct tWAVEFORMATEX *v47; // r12
  __int64 v48; // r14
  struct tWAVEFORMATEX *v49; // rax
  struct tWAVEFORMATEX *v50; // rcx
  signed int v51; // r15d
  __int64 i; // rcx
  __int64 v53; // r8
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rcx
  std::_Ref_count_base *v59; // r15
  IAudioMediaType *v60; // [rsp+68h] [rbp-79h] BYREF
  __int64 v61; // [rsp+70h] [rbp-71h] BYREF
  _QWORD v62[2]; // [rsp+78h] [rbp-69h] BYREF
  IAudioMediaType *ppIAudioMediaType[2]; // [rsp+88h] [rbp-59h] BYREF
  struct tWAVEFORMATEX *v64[2]; // [rsp+98h] [rbp-49h] BYREF
  char v65; // [rsp+A8h] [rbp-39h]
  struct _GUID v66; // [rsp+B8h] [rbp-29h] BYREF
  char *v67; // [rsp+C8h] [rbp-19h]
  __int128 v68; // [rsp+D0h] [rbp-11h]

  LODWORD(v60) = 0;
  v8 = 0LL;
  v62[0] = 0LL;
  if ( a6 )
    *a6 = 0LL;
  v9 = 0LL;
  v10 = Src;
  cbSize = Src->cbSize;
  v12 = (char *)CoTaskMemAlloc(cbSize + 18);
  v13 = v12;
  if ( !v12 )
  {
    v13 = 0LL;
    AudioMediaType = -2147024882;
    goto LABEL_82;
  }
  memcpy_0(v12, v10, cbSize + 18);
  v67 = v13;
  v14 = a4->cbSize;
  v15 = (unsigned __int16 *)CoTaskMemAlloc(v14 + 18);
  v9 = v15;
  if ( !v15 )
  {
    v9 = 0LL;
    AudioMediaType = -2147024882;
    goto LABEL_82;
  }
  memcpy_0(v15, a4, v14 + 18);
  *(_QWORD *)&v68 = v9;
  if ( (*((_WORD *)v13 + 7) & 0xFFF8u) > 0x100 )
  {
    AudioMediaType = -2004287480;
    goto LABEL_82;
  }
  if ( *(_WORD *)v13 != 0xFFFE )
  {
    v16 = 1LL;
    if ( *(_WORD *)v13 != 1 )
    {
LABEL_8:
      LODWORD(v60) = v16;
      v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      k = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      goto LABEL_9;
    }
    *(_WORD *)v13 = 3;
LABEL_52:
    *((_WORD *)v13 + 7) = 32;
    v36 = 4 * *((_WORD *)v13 + 1);
    *((_WORD *)v13 + 6) = v36;
    *((_DWORD *)v13 + 2) = *((_DWORD *)v13 + 1) * v36;
    goto LABEL_8;
  }
  v16 = (v13[18] & 7) == 0;
  LODWORD(v60) = (v13[18] & 7) == 0;
  v17 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
  k = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
  v35 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)v13 + 3);
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)v13 + 3) )
    v35 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)v13 + 4);
  if ( !v35 )
  {
    LODWORD(v60) = v16;
    if ( (v13[18] & 7) == 0 )
    {
      *(GUID *)(v13 + 24) = GUID_00000003_0000_0010_8000_00aa00389b71;
      *((_WORD *)v13 + 9) = 32;
      goto LABEL_52;
    }
  }
LABEL_9:
  v19 = *v9;
  if ( (_WORD)v19 == 1 )
  {
    *v9 = 3;
    LODWORD(v60) = v16;
    goto LABEL_17;
  }
  if ( (_WORD)v19 == 0xFFFE )
  {
    v20 = v17 - *((_QWORD *)v9 + 3);
    if ( !v20 )
      v20 = k - *((_QWORD *)v9 + 4);
    if ( !v20 )
    {
      LODWORD(v60) = v16;
      if ( (v9[9] & 7) == 0 )
      {
        *(GUID *)(v9 + 12) = GUID_00000003_0000_0010_8000_00aa00389b71;
        v9[9] = 32;
        LOBYTE(v60) = v16;
LABEL_17:
        v9[7] = 32;
        v21 = 4 * v9[1];
        v9[6] = v21;
        v19 = *((_DWORD *)v9 + 1) * (unsigned int)v21;
        *((_DWORD *)v9 + 2) = v19;
      }
    }
  }
  v22 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( (unsigned __int64)a3 >= v22[180] )
    goto LABEL_157;
  v23 = 96LL * a3;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v23 + v22[181]));
  if ( (unsigned __int64)a3 >= v22[182] )
    goto LABEL_157;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v23 + v22[183]));
  if ( (unsigned __int64)a3 >= v22[184] )
    goto LABEL_157;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v23 + v22[185]));
  if ( (unsigned __int64)a3 >= v22[202] )
    goto LABEL_157;
  v24 = *((_QWORD *)a1 + 1);
  if ( !*(_DWORD *)(v22[203] + 4LL * a3) )
  {
    AudioMediaType = 0;
    v8 = 0LL;
    v62[0] = 0LL;
    if ( a3 != 3
      && !(unsigned int)EffectPack::EndpointConnectorSupportsProcessingModes((EffectPack *)v24, (unsigned int)a3, v16) )
    {
      *(GUID *)v64 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v55 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)(v24 + 1440), a3);
      InitializedSystemEffectInterface = EffectPack::GetInitializedSystemEffectInterface(
                                           v24,
                                           v55,
                                           1LL,
                                           0LL,
                                           v64,
                                           0,
                                           1,
                                           a3,
                                           0LL,
                                           v62,
                                           0LL);
      goto LABEL_65;
    }
    goto LABEL_66;
  }
  AudioMediaType = 0;
  v8 = 0LL;
  v62[0] = 0LL;
  if ( (unsigned __int64)a3 >= *(_QWORD *)(v24 + 1440) )
    goto LABEL_157;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v23 + *(_QWORD *)(v24 + 1448)));
  if ( (unsigned __int64)a3 >= *(_QWORD *)(v24 + 1456) )
    goto LABEL_157;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v23 + *(_QWORD *)(v24 + 1464)));
  if ( (unsigned __int64)a3 >= *(_QWORD *)(v24 + 1472) )
    goto LABEL_157;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v23 + *(_QWORD *)(v24 + 1480)));
  if ( (unsigned __int64)a3 >= *(_QWORD *)(v24 + 1616) )
    goto LABEL_157;
  if ( !*(_DWORD *)(*(_QWORD *)(v24 + 1624) + 4LL * a3) )
    goto LABEL_66;
  v26 = a2;
  v27 = *a2;
  if ( (unsigned __int64)a3 >= *(_QWORD *)(v24 + 1440) )
    goto LABEL_157;
  v28 = *(_QWORD *)(v24 + 1448) + 96LL * a3;
  if ( (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)(v24 + 1584))
    || a3 == 3 )
  {
    *(struct _GUID *)ppIAudioMediaType = v27;
    if ( *(_BYTE *)(v28 + 52) )
    {
      *(struct _GUID *)v64 = v27;
      v51 = 0;
      for ( i = 0LL; ; i = v61 + 16 )
      {
        v61 = i;
        if ( v51 >= *(_DWORD *)(v28 + 40) )
          goto LABEL_32;
        if ( v51 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, k);
          __debugbreak();
        }
        if ( *(_BYTE *)(*(_QWORD *)(i + *(_QWORD *)(v28 + 32)) + 20LL) )
        {
          v56 = (__int64 *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                             v28 + 32,
                             v51);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v56, ppIAudioMediaType) != -1 )
            break;
        }
        ++v51;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(v28 + 56));
      v61 = v28 + 56;
      v57 = (_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                        v28 + 32,
                        v51);
      v58 = v57[1];
      if ( v58 )
        _InterlockedIncrement((volatile signed __int32 *)(v58 + 8));
      *(_QWORD *)&v66.Data1 = *v57;
      v59 = (std::_Ref_count_base *)v57[1];
      *(_QWORD *)v66.Data4 = v59;
      if ( (int)SystemEffectChainDescriptor::Resolve(
                  *(SystemEffectChainDescriptor **)&v66.Data1,
                  (struct SystemEffectDescriptor *)v28) < 0 )
      {
        if ( v59 )
          std::_Ref_count_base::_Decref(v59);
        if ( v28 != -56 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v28 + 56));
        goto LABEL_110;
      }
      if ( v59 )
        std::_Ref_count_base::_Decref(v59);
      if ( v28 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v28 + 56));
    }
    else
    {
      *(struct _GUID *)v64 = v27;
    }
LABEL_32:
    v29 = 0;
    v30 = 0LL;
    for ( j = 0LL; ; j += 16LL )
    {
      if ( v30 >= *(int *)(v28 + 40) )
        goto LABEL_110;
      if ( j < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, k);
        __debugbreak();
      }
      v32 = *(_QWORD *)(j + *(_QWORD *)(v28 + 32));
      for ( k = 0LL; ; k = (unsigned int)(k + 1) )
      {
        if ( (int)k >= *(_DWORD *)(v32 + 8) )
          goto LABEL_124;
        v33 = (IAudioMediaType **)(*(_QWORD *)v32 + 16LL * (int)k);
        v34 = (char *)*v33 - (char *)ppIAudioMediaType[0];
        if ( *v33 == ppIAudioMediaType[0] )
          v34 = (char *)v33[1] - (char *)ppIAudioMediaType[1];
        if ( !v34 )
          break;
      }
      if ( (_DWORD)k != -1 )
        break;
LABEL_124:
      ++v29;
      ++v30;
    }
    if ( v29 != -1 )
    {
      if ( v29 < 0 || v29 >= *(_DWORD *)(v28 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, k);
        __debugbreak();
      }
      v19 = 2LL * v29;
      if ( !*(_QWORD *)(*(_QWORD *)(v28 + 32) + 16LL * v29) )
        goto LABEL_66;
      goto LABEL_62;
    }
LABEL_110:
    v53 = *(_QWORD *)(v28 + 16);
    if ( !v53 )
      goto LABEL_66;
    for ( k = 0LL; ; k = (unsigned int)(k + 1) )
    {
      if ( (int)k >= *(_DWORD *)(v53 + 8) )
        goto LABEL_66;
      v19 = *(_QWORD *)v53 + 16LL * (int)k;
      v54 = *(_QWORD *)v19 - (unsigned __int64)v64[0];
      if ( *(struct tWAVEFORMATEX **)v19 == v64[0] )
        v54 = *(_QWORD *)(v19 + 8) - (unsigned __int64)v64[1];
      if ( !v54 )
        break;
    }
    if ( (_DWORD)k == -1 )
      goto LABEL_66;
LABEL_62:
    v26 = a2;
    goto LABEL_63;
  }
  *(struct _GUID *)v64 = v27;
  for ( k = 0LL; (int)k < *(_DWORD *)(v28 + 8); k = (unsigned int)(k + 1) )
  {
    v19 = *(_QWORD *)v28 + 16LL * (int)k;
    v37 = *(_QWORD *)v19 - *(_QWORD *)&v27.Data1;
    if ( *(_QWORD *)v19 == *(_QWORD *)&v27.Data1 )
      v37 = *(_QWORD *)(v19 + 8) - *(_QWORD *)v27.Data4;
    if ( !v37 )
      goto LABEL_59;
  }
  k = 0xFFFFFFFFLL;
LABEL_59:
  if ( (_DWORD)k != -1 )
  {
LABEL_63:
    v16 = a3;
    if ( (unsigned __int64)a3 < *(_QWORD *)(v24 + 1440) )
    {
      v66 = *v26;
      InitializedSystemEffectInterface = EffectPack::GetInitializedSystemEffectInterface(
                                           v24,
                                           *(_QWORD *)(v24 + 1448) + 96LL * a3,
                                           1LL,
                                           0LL,
                                           &v66,
                                           0,
                                           0,
                                           a3,
                                           0LL,
                                           v62,
                                           0LL);
LABEL_65:
      v8 = (__int64 *)v62[0];
      AudioMediaType = InitializedSystemEffectInterface;
      goto LABEL_66;
    }
LABEL_157:
    _o_terminate(v19, k, v16);
    __debugbreak();
    JUMPOUT(0x18001090FLL);
  }
LABEL_66:
  if ( AudioMediaType < 0 )
    goto LABEL_82;
  if ( !v8 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)v13) )
    {
      AudioMediaType = -2004287480;
      goto LABEL_82;
    }
    if ( *((_DWORD *)v13 + 1) == *((_DWORD *)v9 + 1)
      && (_BYTE)v60
      && *((_WORD *)v13 + 1) == v9[1]
      && !(unsigned int)ValidateWaveFormatEx(Src) )
    {
      AudioMediaType = 0;
      goto LABEL_82;
    }
    AudioMediaType = 1;
    v39 = (CEndpointCharacteristics **)a1;
    goto LABEL_81;
  }
  ppIAudioMediaType[0] = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  AudioMediaType = CreateAudioMediaType((const WAVEFORMATEX *)v9, v9[8] + 18, ppIAudioMediaType);
  if ( AudioMediaType < 0 )
  {
    if ( ppIAudioMediaType[0] )
      ((void (__fastcall *)(IAudioMediaType *))ppIAudioMediaType[0]->lpVtbl->Release)(ppIAudioMediaType[0]);
  }
  else
  {
    AudioMediaType = CreateAudioMediaType((const WAVEFORMATEX *)v13, *((unsigned __int16 *)v13 + 8) + 18, &v60);
    if ( AudioMediaType < 0 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v61);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v60);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(ppIAudioMediaType);
      goto LABEL_82;
    }
    v39 = (CEndpointCharacteristics **)a1;
    v40 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 56LL))(*(_QWORD *)a1) == 0;
    v41 = *v8;
    if ( v40 )
      v42 = (*(__int64 (__fastcall **)(__int64 *, IAudioMediaType *, IAudioMediaType *, __int64 *))(v41 + 56))(
              v8,
              ppIAudioMediaType[0],
              v60,
              &v61);
    else
      v42 = (*(__int64 (__fastcall **)(__int64 *, IAudioMediaType *, IAudioMediaType *, __int64 *))(v41 + 64))(
              v8,
              ppIAudioMediaType[0],
              v60,
              &v61);
    AudioMediaType = v42;
    if ( v42 >= 0 )
    {
      if ( v42 == 1 || (unsigned int)ValidateWaveFormatEx(Src) )
        AudioMediaType = 1;
      if ( v61 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
      if ( v60 )
        ((void (__fastcall *)(IAudioMediaType *))v60->lpVtbl->Release)(v60);
      if ( ppIAudioMediaType[0] )
        ((void (__fastcall *)(IAudioMediaType *))ppIAudioMediaType[0]->lpVtbl->Release)(ppIAudioMediaType[0]);
LABEL_81:
      v43 = a6;
      if ( a6 && AudioMediaType )
      {
        Src = 0LL;
        v64[0] = (struct tWAVEFORMATEX *)&Src;
        v64[1] = 0LL;
        v65 = 1;
        LODWORD(v60) = 1;
        v66 = *a2;
        v45 = CEndpointCharacteristics::TryGetOverridingMixFormat(
                *v39,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                &v66,
                &v64[1]) >= 0
           && Src;
        if ( v65 )
        {
          v46 = *(void **)v64[0];
          *(_QWORD *)v64[0] = v64[1];
          if ( v46 )
            CoTaskMemFree(v46);
        }
        v47 = a4;
        if ( v45 )
          v47 = Src;
        v48 = v47->cbSize;
        v49 = (struct tWAVEFORMATEX *)operator new[](v48 + 18, (const struct std::nothrow_t *)&std::nothrow);
        *v43 = v49;
        if ( v49 )
        {
          memcpy_0(v49, v47, v48 + 18);
          AudioMediaType = 1;
          v50 = Src;
          Src = 0LL;
          if ( v50 )
            CoTaskMemFree(v50);
        }
        else
        {
          AudioMediaType = -2147024882;
          wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &Src,
            0LL);
        }
      }
      goto LABEL_82;
    }
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    if ( v60 )
      ((void (__fastcall *)(IAudioMediaType *))v60->lpVtbl->Release)(v60);
    if ( ppIAudioMediaType[0] )
      ((void (__fastcall *)(IAudioMediaType *))ppIAudioMediaType[0]->lpVtbl->Release)(ppIAudioMediaType[0]);
  }
LABEL_82:
  CoTaskMemFree(v9);
  CoTaskMemFree(v13);
  if ( v8 )
    (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
  return (unsigned int)AudioMediaType;
}
