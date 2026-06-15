/*
 * XREFs of ?UpdateAPOEnableStatus@EffectPack@@QEAAJXZ @ 0x18013E1A8
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x1800121EC (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x180005B30 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@@-$_tlgWriteTem.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180005C28 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U-$_tlgWrapperB.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180010D90 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1801378D0 (-AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?IsCriticalAPO@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@@Z @ 0x18013A55C (-IsCriticalAPO@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall EffectPack::UpdateAPOEnableStatus(EffectPack *this)
{
  int i; // esi
  bool v3; // bl
  _DWORD *v4; // rcx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v9)(_QWORD, GUID *, __int64 *); // rax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  void **v16; // rcx
  _DWORD *v17; // rcx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-49h] BYREF
  void *v24; // [rsp+58h] [rbp-41h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-39h] BYREF
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v27; // [rsp+78h] [rbp-21h]
  void *v28; // [rsp+80h] [rbp-19h] BYREF
  int v29[2]; // [rsp+88h] [rbp-11h] BYREF
  const wchar_t *v30; // [rsp+90h] [rbp-9h] BYREF
  const wchar_t *v31; // [rsp+98h] [rbp-1h] BYREF
  int v32[2]; // [rsp+A0h] [rbp+7h] BYREF
  PROPVARIANT *v33; // [rsp+A8h] [rbp+Fh]
  char v34; // [rsp+B0h] [rbp+17h]
  __int128 v35; // [rsp+B8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *(_OWORD *)pvar = 0LL;
  v27 = 0LL;
  v33 = pvar;
  v34 = 1;
  for ( i = 1; i < 4; ++i )
  {
    v3 = 0;
    if ( !(unsigned int)EffectPack::IsCriticalAPO(this, i)
      && !(unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(*((CEndpointCharacteristics **)this + 198)) )
    {
      if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL) + 40LL))(
             *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
             &byte_1801D5790[20 * i],
             pvar) >= 0
        && LOWORD(pvar[0]) == 19
        && LODWORD(pvar[1]) >= 0x64 )
      {
        v3 = 1;
      }
      else
      {
        PropVariantClear(pvar);
        if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL) + 40LL))(
               *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
               &byte_1801D57E0[20 * i],
               pvar) >= 0
          && LOWORD(pvar[0]) == 19 )
        {
          v3 = LODWORD(pvar[1]) >= 0x64;
        }
      }
      PropVariantClear(pvar);
      if ( v3 )
      {
        v28 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v28,
          0LL);
        mmdDevGetInstanceIdFromMMDeviceId(*(_QWORD *)(*((_QWORD *)this + 198) + 48LL), &v28);
        v4 = (_DWORD *)*((_QWORD *)this + 265);
        if ( *v4 > 4u && tlgKeywordOn((__int64)v4, 0x400000000100LL) )
        {
          LODWORD(v24) = i;
          *(_QWORD *)v29 = v28;
          v35 = *(_OWORD *)*((_QWORD *)this + 196);
          v30 = (const wchar_t *)&v35;
          v31 = *(const wchar_t **)(*((_QWORD *)this + 198) + 48LL);
          *(_QWORD *)v32 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            v5,
            (int)&unk_1801AC009,
            v6,
            v7,
            (__int64)v32,
            &v31,
            (__int64 *)&v30,
            (const wchar_t **)v29,
            (__int64)&v24);
        }
        v25 = 0LL;
        v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 198) + 40LL);
        v9 = *v8;
        v25 = 0LL;
        v10 = (*v9)(v8, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21, (__int64 *)&v25);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D0,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v10);
LABEL_33:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
          v16 = &v28;
LABEL_41:
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v16);
          goto LABEL_44;
        }
        v23 = 0LL;
        v12 = *v25;
        v23 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v12 + 40))(v25, 2LL, &v23);
        v11 = v13;
        if ( v13 < 0 )
        {
          v14 = 722LL;
LABEL_30:
          v15 = (unsigned int)v13;
LABEL_31:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v15);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
          goto LABEL_33;
        }
        if ( !v23 )
        {
          v11 = -2147024894;
          v15 = 2147942402LL;
          v14 = 723LL;
          goto LABEL_31;
        }
        LOWORD(pvar[0]) = 19;
        LODWORD(pvar[1]) = 1;
        v13 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v23 + 48LL))(
                v23,
                &PKEY_AudioEndpoint_Disable_SysFx,
                pvar);
        v11 = v13;
        if ( v13 < 0 )
        {
          v14 = 727LL;
          goto LABEL_30;
        }
        v13 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL)
                                                                       + 48LL))(
                *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
                &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
                pvar);
        v11 = v13;
        if ( v13 < 0 )
        {
          v14 = 731LL;
          goto LABEL_30;
        }
        if ( !*(_QWORD *)(*((_QWORD *)this + 198) + 80LL) )
        {
          v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v25 + 40))(v25, 0LL);
          v11 = v13;
          if ( v13 < 0 )
          {
            v14 = 736LL;
            goto LABEL_30;
          }
        }
        PropVariantClear(pvar);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v28);
      }
    }
  }
  if ( CEndpointCharacteristics::AreEnhancementsEnabled(*((CEndpointCharacteristics **)this + 198))
    && (unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(*((CEndpointCharacteristics **)this + 198)) )
  {
    v24 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v24,
      0LL);
    mmdDevGetInstanceIdFromMMDeviceId(*(_QWORD *)(*((_QWORD *)this + 198) + 48LL), &v24);
    v17 = (_DWORD *)*((_QWORD *)this + 265);
    if ( *v17 > 4u && tlgKeywordOn((__int64)v17, 0x400000000100LL) )
    {
      *(_QWORD *)v32 = v24;
      v35 = *(_OWORD *)*((_QWORD *)this + 196);
      v31 = (const wchar_t *)&v35;
      v30 = *(const wchar_t **)(*((_QWORD *)this + 198) + 48LL);
      *(_QWORD *)v29 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
        v18,
        (int)&unk_1801AC07E,
        v19,
        v20,
        (__int64)v29,
        &v30,
        (__int64 *)&v31,
        (const wchar_t **)v32);
    }
    LOWORD(pvar[0]) = 19;
    LODWORD(pvar[1]) = 0;
    v21 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL) + 48LL))(
            *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
            &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
            pvar);
    v11 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FA,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v21);
      v16 = &v24;
      goto LABEL_41;
    }
    PropVariantClear(pvar);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v24);
  }
  v11 = 0;
LABEL_44:
  PropVariantClear(pvar);
  return v11;
}
