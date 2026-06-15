/*
 * XREFs of ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000E988
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004A3BC (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004BA2C (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005E524 (-RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x180090CAC (-CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18013BEC8 (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18000DDCC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18000EDF0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall EffectPack::GetDefaultConnectorProcessingModeConfiguration(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  struct _GUID *v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  GUID v9; // xmm7
  _QWORD *v10; // rdx
  __int64 SupportedConnectorModesInternal; // rcx
  __int64 v12; // r8
  GUID v13; // xmm6
  GUID v14; // xmm1
  __int64 v15; // rbx
  BOOL v16; // edi
  __int64 v17; // rcx
  unsigned __int64 v18; // xmm0_8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r10
  int v22; // ecx
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // r11
  _QWORD *v26; // r8
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  int v30; // ecx
  bool v31; // zf
  int i; // eax
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  int k; // eax
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  int j; // eax
  unsigned __int64 v39; // rcx
  unsigned int v40; // edx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-51h] BYREF
  __int64 v45; // [rsp+30h] [rbp-41h]
  struct _GUID *v46; // [rsp+38h] [rbp-39h]
  GUID v47; // [rsp+40h] [rbp-31h]
  GUID v48; // [rsp+50h] [rbp-21h]

  v6 = a3;
  v46 = a3;
  v7 = a2;
  v8 = (unsigned __int64)this;
  v9 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(
                                      this,
                                      a2 & (unsigned int)-(((a2 - 2) & 0xFFFFFFFD) != 0),
                                      0LL,
                                      0LL);
  if ( *(_DWORD *)(SupportedConnectorModesInternal + 8) )
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
      goto LABEL_91;
    v13 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  else
  {
    v13 = GUID_00000000_0000_0000_0000_000000000000;
  }
LABEL_4:
  v14 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  while ( a4 )
  {
    if ( v7 >= *(_QWORD *)(v8 + 1456) )
    {
      _o_terminate(SupportedConnectorModesInternal, v10, v12);
      __debugbreak();
      JUMPOUT(0x18000EDDCLL);
    }
    v15 = *(_QWORD *)(v8 + 1464) + 96 * v7;
    v16 = 1;
    v17 = *(_QWORD *)(*(_QWORD *)(v8 + 1584) + 80LL);
    if ( v17 )
    {
      *(_OWORD *)pvar = 0LL;
      v45 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(
             v17,
             &PKEY_AudioEndpoint_Disable_SysFx,
             pvar) >= 0
        && LOWORD(pvar[0]) == 19 )
      {
        v16 = LODWORD(pvar[1]) == 0;
      }
      PropVariantClear(pvar);
      if ( !v16 && (_DWORD)v7 != 3 )
      {
        v47 = v13;
        for ( i = 0; i < *(_DWORD *)(v15 + 8); ++i )
        {
          v33 = (_QWORD *)(*(_QWORD *)v15 + 16LL * i);
          v34 = *v33 - *(_QWORD *)&v47.Data1;
          if ( *v33 == *(_QWORD *)&v47.Data1 )
            v34 = v33[1] - *(_QWORD *)v47.Data4;
          if ( !v34 )
            goto LABEL_59;
        }
        i = -1;
LABEL_59:
        v30 = 0;
        v31 = i == -1;
        v14 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        goto LABEL_40;
      }
      v14 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    v48 = v13;
    v18 = _mm_srli_si128((__m128i)v13, 8).m128i_u64[0];
    v7 = v18;
    v6 = *(struct _GUID **)&v13.Data1;
    if ( *(_BYTE *)(v15 + 52) )
    {
      v8 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      while ( v19 < *(int *)(v15 + 40) )
      {
        if ( v20 < 0 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v10);
          __debugbreak();
        }
        v21 = *(_QWORD *)(v20 + *(_QWORD *)(v15 + 32));
        if ( *(_BYTE *)(v21 + 20) )
        {
          for ( j = 0; j < *(_DWORD *)(v21 + 8); ++j )
          {
            v10 = (_QWORD *)(*(_QWORD *)v21 + 16LL * j);
            v39 = *v10 - *(_QWORD *)&v13.Data1;
            if ( *v10 == *(_QWORD *)&v13.Data1 )
              v39 = v10[1] - v18;
            if ( !v39 )
            {
              if ( j == -1 )
                break;
              EnterCriticalSection((LPCRITICAL_SECTION)(v15 + 56));
              *(_QWORD *)&v47.Data1 = v15 + 56;
              if ( (v8 & 0x80000000) != 0LL || (int)v8 >= *(_DWORD *)(v15 + 40) )
                goto LABEL_90;
              v41 = 2LL * (int)v8;
              v42 = *(_QWORD *)(v15 + 32);
              v43 = *(_QWORD *)(v42 + 8 * v41 + 8);
              if ( v43 )
                _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
              pvar[0] = *(PROPVARIANT *)(v42 + 8 * v41);
              v8 = *(_QWORD *)(v42 + 8 * v41 + 8);
              pvar[1] = (PROPVARIANT)v8;
              if ( (int)SystemEffectChainDescriptor::Resolve(
                          (SystemEffectChainDescriptor *)pvar[0],
                          (struct SystemEffectDescriptor *)v15) < 0 )
              {
                if ( v8 )
                  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
                if ( v15 != -56 )
                  LeaveCriticalSection((LPCRITICAL_SECTION)(v15 + 56));
                v14 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                goto LABEL_30;
              }
              if ( v8 )
                std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
              if ( v15 != -56 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v15 + 56));
              v14 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
              goto LABEL_20;
            }
          }
        }
        v8 = (unsigned int)(v8 + 1);
        ++v19;
        v20 += 16LL;
      }
    }
LABEL_20:
    v22 = 0;
    v23 = 0LL;
    v24 = 0LL;
    while ( 2 )
    {
      if ( v23 >= *(int *)(v15 + 40) )
      {
LABEL_30:
        v28 = *(_QWORD *)(v15 + 16);
        if ( v28 )
        {
          for ( k = 0; k < *(_DWORD *)(v28 + 8); ++k )
          {
            v36 = (_QWORD *)(*(_QWORD *)v28 + 16LL * k);
            v37 = *v36 - *(_QWORD *)&v48.Data1;
            if ( *v36 == *(_QWORD *)&v48.Data1 )
              v37 = v36[1] - *(_QWORD *)v48.Data4;
            if ( !v37 )
            {
              if ( k == -1 )
                break;
              v29 = *(_QWORD *)(v15 + 16);
              goto LABEL_39;
            }
          }
        }
        v29 = 0LL;
        goto LABEL_39;
      }
      if ( v24 >= 0 )
      {
        v25 = *(_QWORD *)(v24 + *(_QWORD *)(v15 + 32));
        for ( LODWORD(v10) = 0; ; LODWORD(v10) = (_DWORD)v10 + 1 )
        {
          if ( (int)v10 >= *(_DWORD *)(v25 + 8) )
            goto LABEL_33;
          v26 = (_QWORD *)(*(_QWORD *)v25 + 16LL * (int)v10);
          v27 = *v26 - *(_QWORD *)&v13.Data1;
          if ( *v26 == *(_QWORD *)&v13.Data1 )
            v27 = v26[1] - v18;
          if ( !v27 )
            break;
        }
        if ( (_DWORD)v10 == -1 )
        {
LABEL_33:
          ++v22;
          ++v23;
          v24 += 16LL;
          continue;
        }
        if ( v22 == -1 )
          goto LABEL_30;
        if ( v22 < 0 || v22 >= *(_DWORD *)(v15 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v10);
          __debugbreak();
        }
        v29 = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 16LL * v22);
LABEL_39:
        v30 = 0;
        v31 = v29 == 0;
        v6 = v46;
LABEL_40:
        LOBYTE(v30) = !v31;
        if ( v30 )
          v9 = v13;
        else
          v9 = v14;
        goto LABEL_42;
      }
      break;
    }
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v10);
LABEL_90:
    ATL::_AtlRaiseException(0xC000008C, v40);
LABEL_91:
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      v13 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       SupportedConnectorModesInternal,
                       0);
      goto LABEL_4;
    }
    v14 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v13 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
LABEL_42:
  if ( v6 )
    *v6 = v13;
  if ( a4 )
    *a4 = v9;
  if ( a5 )
    *a5 = v13;
}
