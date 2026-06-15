/*
 * XREFs of ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005E524
 * Callers:
 *     ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x18013B870 (-RefreshConnectorFormats@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180005104 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTempla.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000E988 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@UCConnectorFormatCharacteristics@@U?$default_delete@UCConnectorFormatCharacteristics@@@std@@@std@@@0@@Z @ 0x18005E6C8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UCConnectorFormatCharacteristics@@U-$default_delete.c)
 *     ?TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@@Z @ 0x18005E8E4 (-TranslateDeviceConnectorModeToStreamingConnectorMode@EffectPack@@QEAA-AU_GUID@@W4__MIDL___MIDL_.c)
 *     ?RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005E9F0 (-RediscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audi.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x1800ACAA0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-Co.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::RefreshDefaultConnectorFormats(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  _DWORD *v3; // rcx
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 i; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  int v16; // eax
  int v18; // [rsp+20h] [rbp-39h]
  _BYTE v19[16]; // [rsp+40h] [rbp-19h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-9h] BYREF
  struct _GUID *v21; // [rsp+60h] [rbp+7h] BYREF
  const wchar_t *v22[3]; // [rsp+68h] [rbp+Fh] BYREF
  struct _GUID v23; // [rsp+80h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v22[1] = 0LL;
  v20 = 0LL;
  v3 = (_DWORD *)*((_QWORD *)this + 265);
  if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 16LL) )
  {
    v19[0] = 0;
    v23 = *(struct _GUID *)*((_QWORD *)this + 196);
    v21 = &v23;
    v22[0] = *(const wchar_t **)(*((_QWORD *)this + 198) + 48LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>>(
      v4,
      (int)&unk_1801AB999,
      v5,
      v6,
      v22,
      (__int64 *)&v21,
      (__int64)v19);
  }
  EffectPack::GetDefaultConnectorProcessingModeConfiguration(this, eHostProcessConnector, &v20, 0LL, 0LL);
  v7 = *((_QWORD *)this + 198);
  v23 = v20;
  EffectPack::TranslateDeviceConnectorModeToStreamingConnectorMode(this, &v20, eHostProcessConnector, &v23);
  v9 = *(_QWORD *)(v7 + 280);
  for ( i = *(_QWORD *)(v7 + 272); i != v9; i += 8LL )
  {
    v11 = *(_QWORD **)i;
    v12 = **(_QWORD **)i - *(_QWORD *)&v20.Data1;
    if ( !v12 )
      v12 = v11[1] - *(_QWORD *)v20.Data4;
    if ( !v12 )
    {
      v13 = v11[3];
      v14 = v11[2];
      if ( v14 != v13 )
      {
        std::_Destroy_range<std::allocator<std::unique_ptr<CConnectorFormatCharacteristics>>>(v14, v13);
        v11[3] = v11[2];
      }
      v15 = *(_QWORD **)i;
      v8 = *(_QWORD *)(*(_QWORD *)i + 48LL);
      if ( *(_QWORD *)(*(_QWORD *)i + 40LL) != v8 )
      {
        std::_Destroy_range<std::allocator<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>>();
        v15[6] = v15[5];
      }
    }
  }
  v16 = CEndpointCharacteristics::RediscoverProcessingModeCharacteristics(
          *((CEndpointCharacteristics **)this + 198),
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x193A,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v16,
      v18);
  return 0LL;
}
