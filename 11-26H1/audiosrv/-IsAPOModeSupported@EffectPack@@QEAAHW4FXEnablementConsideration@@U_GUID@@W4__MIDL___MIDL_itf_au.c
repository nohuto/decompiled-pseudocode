/*
 * XREFs of ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800095A0
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800089DC (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009368 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDesc.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F634 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18002D270 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z @ 0x18010C07C (-IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z.c)
 *     _lambda_27cd9712d7984e7fa7dba7b637d2d0ce_::operator() @ 0x180135BEC (_lambda_27cd9712d7984e7fa7dba7b637d2d0ce_--operator().c)
 * Callees:
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18000DDCC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800B0D18 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::IsAPOModeSupported(_QWORD *a1, unsigned __int64 a2, __m128i *a3, int a4)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  BOOL v8; // esi
  __int64 v9; // rcx
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // r12
  int v12; // r14d
  __int64 v13; // r9
  __int64 j; // rcx
  __int64 v15; // r10
  int v16; // ecx
  __int64 v17; // r9
  __int64 n; // rdx
  __int64 v19; // r11
  int ii; // eax
  _QWORD *v21; // r10
  unsigned __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rdx
  bool v25; // zf
  int i; // eax
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  int m; // eax
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  int k; // eax
  _QWORD *v34; // r8
  unsigned int v35; // edx
  __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rax
  void *v39; // r14
  __m128i v40; // [rsp+20h] [rbp-30h]
  __m128i v41; // [rsp+20h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v43; // [rsp+40h] [rbp-10h]

  if ( (unsigned __int64)a4 >= a1[182] )
  {
LABEL_73:
    _o_terminate();
    __debugbreak();
    JUMPOUT(0x180009905LL);
  }
  v6 = a1[183] + 96LL * a4;
  v7 = 0;
  if ( (_DWORD)a2 != 1 )
  {
    v8 = 1;
    v9 = *(_QWORD *)(a1[198] + 80LL);
    if ( v9 )
    {
      *(_OWORD *)pvar = 0LL;
      v43 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
             v9,
             &PKEY_AudioEndpoint_Disable_SysFx,
             pvar) >= 0
        && LOWORD(pvar[0]) == 19 )
      {
        v8 = LODWORD(pvar[1]) == 0;
      }
      PropVariantClear(pvar);
      if ( !v8 && a4 != 3 )
      {
        v41 = *a3;
        for ( i = 0; i < *(_DWORD *)(v6 + 8); ++i )
        {
          v28 = (_QWORD *)(*(_QWORD *)v6 + 16LL * i);
          v29 = *v28 - v41.m128i_i64[0];
          if ( *v28 == v41.m128i_i64[0] )
            v29 = v28[1] - v41.m128i_i64[1];
          if ( !v29 )
            goto LABEL_42;
        }
        i = -1;
LABEL_42:
        v25 = i == -1;
        goto LABEL_33;
      }
    }
  }
  v40 = *a3;
  v10 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v11 = a3->m128i_i64[0];
  if ( *(_BYTE *)(v6 + 52) )
  {
    v12 = 0;
    v13 = 0LL;
    for ( j = 0LL; ; j += 16LL )
    {
      if ( v13 >= *(int *)(v6 + 40) )
        goto LABEL_14;
      if ( j < 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, a2);
        __debugbreak();
      }
      v15 = *(_QWORD *)(j + *(_QWORD *)(v6 + 32));
      if ( *(_BYTE *)(v15 + 20) )
      {
        for ( k = 0; ; ++k )
        {
          if ( k >= *(_DWORD *)(v15 + 8) )
            goto LABEL_13;
          v34 = (_QWORD *)(*(_QWORD *)v15 + 16LL * k);
          a2 = *v34 - v40.m128i_i64[0];
          if ( *v34 == v40.m128i_i64[0] )
            a2 = v34[1] - v10;
          if ( !a2 )
            break;
        }
        if ( k != -1 )
          break;
      }
LABEL_13:
      ++v12;
      ++v13;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 56));
    if ( v12 < 0 || v12 >= *(_DWORD *)(v6 + 40) )
      goto LABEL_72;
    v36 = 2LL * v12;
    v37 = *(_QWORD *)(v6 + 32);
    v38 = *(_QWORD *)(v37 + 8 * v36 + 8);
    if ( v38 )
      _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
    pvar[0] = *(PROPVARIANT *)(v37 + 8 * v36);
    v39 = *(void **)(v37 + 8 * v36 + 8);
    pvar[1] = v39;
    if ( (int)SystemEffectChainDescriptor::Resolve(
                (SystemEffectChainDescriptor *)pvar[0],
                (struct SystemEffectDescriptor *)v6) < 0 )
    {
      if ( v39 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v39);
      if ( v6 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 56));
LABEL_24:
      v23 = *(_QWORD *)(v6 + 16);
      if ( v23 )
      {
        for ( m = 0; m < *(_DWORD *)(v23 + 8); ++m )
        {
          v31 = (_QWORD *)(*(_QWORD *)v23 + 16LL * m);
          v32 = *v31 - v40.m128i_i64[0];
          if ( *v31 == v40.m128i_i64[0] )
            v32 = v31[1] - v40.m128i_i64[1];
          if ( !v32 )
          {
            v24 = *(_QWORD *)(v6 + 16);
            if ( m == -1 )
              break;
            goto LABEL_32;
          }
        }
      }
      v24 = 0LL;
      goto LABEL_32;
    }
    if ( v39 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v39);
    if ( v6 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 56));
  }
LABEL_14:
  v16 = 0;
  v17 = 0LL;
  for ( n = 0LL; ; n += 16LL )
  {
    if ( v17 >= *(int *)(v6 + 40) )
      goto LABEL_24;
    if ( n < 0 )
    {
      ATL::_AtlRaiseException(0xC000008C, n);
LABEL_72:
      ATL::_AtlRaiseException(0xC000008C, v35);
      goto LABEL_73;
    }
    v19 = *(_QWORD *)(n + *(_QWORD *)(v6 + 32));
    for ( ii = 0; ; ++ii )
    {
      if ( ii >= *(_DWORD *)(v19 + 8) )
        goto LABEL_27;
      v21 = (_QWORD *)(*(_QWORD *)v19 + 16LL * ii);
      v22 = *v21 - v11;
      if ( *v21 == v11 )
        v22 = v21[1] - v10;
      if ( !v22 )
        break;
    }
    if ( ii != -1 )
      break;
LABEL_27:
    ++v16;
    ++v17;
  }
  if ( v16 == -1 )
    goto LABEL_24;
  if ( v16 < 0 || v16 >= *(_DWORD *)(v6 + 40) )
  {
    ATL::_AtlRaiseException(0xC000008C, n);
    __debugbreak();
  }
  v24 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 16LL * v16);
LABEL_32:
  v25 = v24 == 0;
LABEL_33:
  LOBYTE(v7) = !v25;
  return v7;
}
