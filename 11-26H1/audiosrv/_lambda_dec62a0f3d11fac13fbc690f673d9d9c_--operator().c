/*
 * XREFs of _lambda_dec62a0f3d11fac13fbc690f673d9d9c_::operator() @ 0x1801373F0
 * Callers:
 *     ?DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003CAA8 (-DecideVssEffectUsage@EffectPack@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescript.c)
 * Callees:
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18000A0C0 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18014EC2C (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_dec62a0f3d11fac13fbc690f673d9d9c_::operator()(
        _DWORD *a1,
        SystemEffectDescriptor *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v8; // rsi
  int DefaultEffectChainClsids; // eax
  void *v10; // rbx
  int v11; // r11d
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  int v16; // [rsp+40h] [rbp-21h] BYREF
  int v17; // [rsp+48h] [rbp-19h] BYREF
  __int64 v18; // [rsp+50h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-9h] BYREF
  void *v20; // [rsp+60h] [rbp-1h] BYREF
  __int128 v21; // [rsp+70h] [rbp+Fh] BYREF
  void *v22[2]; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]
  unsigned int v24; // [rsp+D8h] [rbp+77h] BYREF

  pv = 0LL;
  v24 = 0;
  v22[0] = 0LL;
  v22[1] = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v8 = a5;
  if ( a5 )
    *a5 = 0LL;
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               a2,
                               (struct CAudioSignalProcessingModeArray *)v22,
                               &v24,
                               (struct _GUID **)&pv);
  v10 = pv;
  if ( DefaultEffectChainClsids < 0
    || !v24
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64)v22, a3) == -1 )
  {
    goto LABEL_14;
  }
  v18 = 0LL;
  v20 = v10;
  LODWORD(a5) = v11;
  *(_QWORD *)&v21 = *(_QWORD *)(*(_QWORD *)a1 + 2120LL);
  v24 = 0;
  v16 = 0;
  v17 = 1;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,_tlgProvider_t const * &,enum __MIDL___MIDL_itf_audioenginecore_0000_0000_0002 &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
          (unsigned int)&v18,
          (unsigned int)&v21,
          (unsigned int)&v17,
          (unsigned int)&v16,
          (__int64)&v24,
          (__int64)&a5,
          (__int64)&v20);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v21 = *(_OWORD *)a3;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD, _DWORD, _QWORD *, _QWORD *))(*(_QWORD *)v18 + 24LL))(
            v18,
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 1584LL) + 40LL),
            &v21,
            0LL,
            a1[2],
            a4,
            v8);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 2781LL;
      goto LABEL_12;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
LABEL_14:
    v13 = 0;
    goto LABEL_15;
  }
  v14 = 2780LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v12);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
LABEL_15:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v22);
  CoTaskMemFree(v10);
  return v13;
}
