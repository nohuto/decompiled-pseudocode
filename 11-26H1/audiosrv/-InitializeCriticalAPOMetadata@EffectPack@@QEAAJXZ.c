/*
 * XREFs of ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18013A288
 * Callers:
 *     ?IsCriticalAPO@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@@Z @ 0x18013A55C (-IsCriticalAPO@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@@Z.c)
 * Callees:
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x180008980 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18000CB9C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F634 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F8E8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180011074 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindCriticalAPO@EffectPack@@AEAAHPEAUIAudioSystemEffects2@@@Z @ 0x180139020 (-FindCriticalAPO@EffectPack@@AEAAHPEAUIAudioSystemEffects2@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::InitializeCriticalAPOMetadata(EffectPack *this)
{
  int StreamEffect; // r14d
  unsigned int v3; // edi
  int *v4; // rax
  int SupportedProcessingModes; // eax
  unsigned int v6; // esi
  signed int i; // esi
  EffectPack *v8; // rcx
  unsigned int v9; // edi
  int *v10; // rax
  int v11; // eax
  signed int j; // esi
  EffectPack *v13; // rcx
  unsigned int k; // edi
  EffectPack *v16; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v17[4]; // [rsp+40h] [rbp-30h]
  void *v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  struct _GUID v20; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct IAudioSystemEffects2 *v22; // [rsp+A0h] [rbp+30h] BYREF

  StreamEffect = 0;
  v17[0] = eHostProcessConnector;
  v17[1] = eOffloadConnector;
  v17[2] = eKeywordDetectorConnector;
  *((_DWORD *)this + 377) = 1;
  v3 = 0;
LABEL_2:
  if ( v3 < 3 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v4 = (int *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 180, v3);
    SupportedProcessingModes = SystemEffectDescriptor::GetSupportedProcessingModes(v4, (__int64)&v18, 1);
    v6 = SupportedProcessingModes;
    if ( SupportedProcessingModes < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x338,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SupportedProcessingModes);
      goto LABEL_22;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)v19 )
      {
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
        ++v3;
        goto LABEL_2;
      }
      v22 = 0LL;
      v20 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v18, i);
      StreamEffect = EffectPack::GetStreamEffect(this, &v20, (_QWORD *)1, v17[v3], 0LL, 0LL, &v22);
      if ( StreamEffect >= 0 && v22 && (unsigned int)EffectPack::FindCriticalAPO(v8, v22) )
        break;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
    }
    *((_DWORD *)this + 373) = 1;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
  }
  v9 = 0;
LABEL_13:
  if ( v9 < 3 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v10 = (int *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 182, v9);
    v11 = SystemEffectDescriptor::GetSupportedProcessingModes(v10, (__int64)&v18, 1);
    v6 = v11;
    if ( v11 >= 0 )
    {
      for ( j = 0; ; ++j )
      {
        if ( j >= (int)v19 )
        {
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
          ++v9;
          goto LABEL_13;
        }
        v22 = 0LL;
        v20 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)&v18,
                                 j);
        StreamEffect = EffectPack::GetModeEffect((unsigned __int64)this, (__m128i *)&v20, 1LL, v17[v9], 0LL, 0LL, &v22);
        if ( StreamEffect >= 0 && v22 && (unsigned int)EffectPack::FindCriticalAPO(v13, v22) )
          break;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
      }
      *((_DWORD *)this + 374) = 1;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
      goto LABEL_25;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34D,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v11);
LABEL_22:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
    return v6;
  }
LABEL_25:
  for ( k = 0; k < 3; ++k )
  {
    v22 = 0LL;
    StreamEffect = EffectPack::GetEndpointEffect(
                     (struct _RTL_CRITICAL_SECTION *)this,
                     1LL,
                     (unsigned int)v17[k],
                     0LL,
                     0LL,
                     &v22);
    if ( StreamEffect >= 0 && v22 && (unsigned int)EffectPack::FindCriticalAPO(v16, v22) )
    {
      *((_DWORD *)this + 375) = 1;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
      break;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
  }
  *((_QWORD *)this + 188) = 1LL;
  return (unsigned int)StreamEffect;
}
