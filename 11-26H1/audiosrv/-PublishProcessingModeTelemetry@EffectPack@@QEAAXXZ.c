/*
 * XREFs of ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x18013B304
 * Callers:
 *     _lambda_262b589463239528202aaef0d25d8228_::operator() @ 0x180110E50 (_lambda_262b589463239528202aaef0d25d8228_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtrSize@@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperPtrSize@@66666@Z @ 0x1800059B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtr.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18000B910 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x18000CB1C (-GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _lambda_7e2fae5cc5bdf6b522954fc2836cce6e_::operator() @ 0x180136440 (_lambda_7e2fae5cc5bdf6b522954fc2836cce6e_--operator().c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall EffectPack::PublishProcessingModeTelemetry(EffectPack *this)
{
  int *v2; // rbx
  __int64 v3; // rsi
  signed int v4; // r14d
  __int64 v5; // rax
  signed int v6; // esi
  signed int i; // r14d
  const char *v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  const wchar_t *v11; // [rsp+70h] [rbp-8B8h] BYREF
  __int64 v12; // [rsp+78h] [rbp-8B0h] BYREF
  __int64 v13; // [rsp+80h] [rbp-8A8h]
  __int128 v14; // [rsp+90h] [rbp-898h] BYREF
  const wchar_t *v15[2]; // [rsp+A0h] [rbp-888h] BYREF
  __int128 *v16; // [rsp+B0h] [rbp-878h] BYREF
  const wchar_t *v17; // [rsp+B8h] [rbp-870h] BYREF
  char *v18; // [rsp+C0h] [rbp-868h] BYREF
  int v19; // [rsp+C8h] [rbp-860h]
  __int64 v20; // [rsp+D0h] [rbp-858h] BYREF
  int v21; // [rsp+D8h] [rbp-850h]
  char *v22; // [rsp+E0h] [rbp-848h] BYREF
  int v23; // [rsp+E8h] [rbp-840h]
  __int64 v24; // [rsp+F0h] [rbp-838h] BYREF
  int v25; // [rsp+F8h] [rbp-830h]
  _BYTE *v26; // [rsp+100h] [rbp-828h] BYREF
  int v27; // [rsp+108h] [rbp-820h]
  __int128 v28; // [rsp+110h] [rbp-818h] BYREF
  _DWORD v29[3]; // [rsp+120h] [rbp-808h] BYREF
  char v30; // [rsp+12Ch] [rbp-7FCh] BYREF
  _BYTE v31[400]; // [rsp+130h] [rbp-7F8h] BYREF
  char v32; // [rsp+2C0h] [rbp-668h] BYREF
  char v33; // [rsp+5E0h] [rbp-348h] BYREF
  __int64 v34; // [rsp+900h] [rbp-28h] BYREF
  __int16 v35; // [rsp+908h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+928h] [rbp+0h]

  v34 = 0LL;
  v35 = 0;
  v15[0] = (const wchar_t *)&v34;
  v15[1] = (const wchar_t *)v31;
  v29[0] = 0;
  v29[1] = 1;
  v29[2] = 3;
  v2 = v29;
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 198);
    if ( v2 == (int *)&v30 )
      break;
    v4 = 0;
    if ( *(int *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(v3 + 216), *v2) + 8) > 0 )
    {
      do
      {
        v5 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
               (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
               *v2);
        v14 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v5, v4);
        lambda_7e2fae5cc5bdf6b522954fc2836cce6e_::operator()((__int64 *)v15, *v2, &v14, 1);
        ++v4;
      }
      while ( v4 < *(_DWORD *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                 (unsigned __int64 *)(*((_QWORD *)this + 198) + 216LL),
                                 *v2)
                             + 8) );
    }
    try
    {
      v12 = 0LL;
      v13 = 0LL;
      EffectPack::GetAPOSupportedProcessingModes((__int64)this, (unsigned int)*v2, 1LL, (__int64)&v12);
      v6 = 0;
      for ( i = v13; v6 < i; ++v6 )
      {
        v14 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v12, v6);
        lambda_7e2fae5cc5bdf6b522954fc2836cce6e_::operator()((__int64 *)v15, *v2, &v14, 2);
      }
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((void **)&v12);
      ++v2;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x25C0,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v8);
      return;
    }
  }
  v11 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v11,
    0LL);
  mmdDevGetInstanceIdFromMMDeviceId(*(_QWORD *)(v3 + 48), &v11);
  if ( **((_DWORD **)this + 265) > 4u && tlgKeywordOn(*((_QWORD *)this + 265), 0x400000000000LL) )
  {
    v18 = &v33;
    v19 = (unsigned __int16)(20 * HIWORD(v34));
    v20 = (__int64)&v34 + 6;
    v21 = 2;
    v22 = &v32;
    v23 = (unsigned __int16)(20 * WORD1(v34));
    v24 = (__int64)&v34 + 2;
    v25 = 2;
    v26 = v31;
    v27 = (unsigned __int16)(20 * v34);
    *(_QWORD *)&v14 = &v34;
    DWORD2(v14) = 2;
    v28 = *(_OWORD *)*((_QWORD *)this + 196);
    v16 = &v28;
    v17 = *(const wchar_t **)(*((_QWORD *)this + 198) + 48LL);
    v15[0] = v11;
    v12 = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      v9,
      (int)&unk_1801AB0BF,
      v9,
      v10,
      (__int64)&v12,
      v15,
      &v17,
      (__int64 *)&v16,
      (__int64 *)&v14,
      (__int64 *)&v26,
      &v24,
      (__int64 *)&v22,
      &v20,
      (__int64 *)&v18);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v11);
}
