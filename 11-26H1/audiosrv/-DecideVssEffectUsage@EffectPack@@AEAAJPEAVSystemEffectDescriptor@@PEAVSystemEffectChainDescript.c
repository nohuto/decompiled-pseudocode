/*
 * XREFs of ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003CAA8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_634ef5bcbc861a4dce38fda21ab07393__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x18003CA90 (std--_Func_impl_no_alloc__lambda_634ef5bcbc861a4dce38fda21ab07393__long_SystemEffectDescriptor__.c)
 *     std::_Func_impl_no_alloc__lambda_0d5767a0eff5e346db70c56f41998fe8__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x18013EDD0 (std--_Func_impl_no_alloc__lambda_0d5767a0eff5e346db70c56f41998fe8__long_SystemEffec_ea_18013EDD0.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18000AE0C (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18000E2D8 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18003D7C0 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     _lambda_dec62a0f3d11fac13fbc690f673d9d9c_::_lambda_dec62a0f3d11fac13fbc690f673d9d9c_ @ 0x180134CE8 (_lambda_dec62a0f3d11fac13fbc690f673d9d9c_--_lambda_dec62a0f3d11fac13fbc690f673d9d9c_.c)
 *     _lambda_09a4ae26156b72c7f708229d4da24567_::operator() @ 0x18013561C (_lambda_09a4ae26156b72c7f708229d4da24567_--operator().c)
 *     _lambda_dec62a0f3d11fac13fbc690f673d9d9c_::operator() @ 0x1801373F0 (_lambda_dec62a0f3d11fac13fbc690f673d9d9c_--operator().c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x18013A148 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::DecideVssEffectUsage(
        CEndpointCharacteristics **this,
        struct SystemEffectDescriptor *a2,
        void **a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4)
{
  unsigned __int64 v4; // rsi
  __int64 v8; // rdx
  unsigned int VirtualSurroundEffectMode; // edi
  signed int v10; // r12d
  bool v11; // bl
  __int64 v12; // rcx
  unsigned int i; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int j; // edx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  LPVOID pv; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 *v26; // [rsp+40h] [rbp-30h]
  __int128 v27; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v28[24]; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+50h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v31; // [rsp+C8h] [rbp+58h] BYREF

  v31 = a4;
  v4 = a4;
  lambda_dec62a0f3d11fac13fbc690f673d9d9c_::_lambda_dec62a0f3d11fac13fbc690f673d9d9c_(v28, this, &v31);
  VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(*(CEndpointCharacteristics **)(v8 + 1584));
  if ( VirtualSurroundEffectMode )
  {
    if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this[198]) )
    {
      v29 = 0;
      CEndpointCharacteristics::GetSpatialRenderingMode(this[198], &v29);
      if ( v29 != 1 && v29 - 3 > 3 )
        VirtualSurroundEffectMode = 0;
    }
  }
  v10 = 0;
  if ( *((int *)a3 + 2) > 0 )
  {
    v26 = (unsigned __int64 *)(this + 214);
    do
    {
      v27 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)a3, v10);
      v11 = VirtualSurroundEffectMode != 0;
      if ( VirtualSurroundEffectMode == 2 )
      {
        v30 = 0LL;
        v25 = 0LL;
        pv = 0LL;
        v29 = 0;
        if ( (int)lambda_dec62a0f3d11fac13fbc690f673d9d9c_::operator()(v28, a2, &v27, &v30, &v25) >= 0 )
        {
          v12 = v25;
          if ( v25
            && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v25 + 24LL))(
                 v25,
                 &pv,
                 &v29,
                 0LL) >= 0 )
          {
            for ( i = 0; i < v29; ++i )
            {
              v12 = 2LL * i;
              v14 = *((_QWORD *)pv + 2 * i) - *(_QWORD *)&GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( !v14 )
                v14 = *((_QWORD *)pv + 2 * i + 1) - *(_QWORD *)GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v14 )
                goto LABEL_26;
              v15 = *((_QWORD *)pv + 2 * i) - *(_QWORD *)&GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( !v15 )
                v15 = *((_QWORD *)pv + 2 * i + 1) - *(_QWORD *)GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v15 )
                goto LABEL_26;
            }
          }
          if ( v30
            && ((unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v12, v30, 48000LL, 6LL)
             || (unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v16, v30, 48000LL, 8LL)
             || (unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v17, v30, 44100LL, 6LL)
             || (unsigned __int8)lambda_09a4ae26156b72c7f708229d4da24567_::operator()(v18, v30, 44100LL, 8LL)) )
          {
LABEL_26:
            v11 = 0;
          }
        }
        CoTaskMemFree(pv);
        pv = 0LL;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
      }
      v19 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v26, v4);
      for ( j = 0; j < *(_DWORD *)(v19 + 8); ++j )
      {
        v21 = (_QWORD *)(*(_QWORD *)v19 + 16LL * j);
        v22 = *v21 - v27;
        if ( *v21 == (_QWORD)v27 )
          v22 = v21[1] - *((_QWORD *)&v27 + 1);
        if ( !v22 )
          goto LABEL_35;
      }
      j = -1;
LABEL_35:
      SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        (__int64)a2,
        a3,
        v11,
        (unsigned __int64)&unk_18018A628 & -(__int64)v11,
        1,
        j != -1);
      ++v10;
    }
    while ( v10 < *((_DWORD *)a3 + 2) );
  }
  *((_DWORD *)a3 + 4) = 28;
  return 0LL;
}
