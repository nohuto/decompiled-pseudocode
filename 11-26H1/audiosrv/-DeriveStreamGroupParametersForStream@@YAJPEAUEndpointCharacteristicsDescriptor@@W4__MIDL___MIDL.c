/*
 * XREFs of ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800537B0
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180088410 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800C5C40 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180002BA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTempl.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002A460 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ??R?$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z @ 0x18002B60C (--R-$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x18002B63C (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002EC70 (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180053BD8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlg.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180053E8C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??4?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180064A68 (--4-$vector@UAudioEffectState@CProcessingModeParameters@@V-$allocator@UAudioEffectState@CProcess.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     WPP_SF_Idd @ 0x1800CC938 (WPP_SF_Idd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveStreamGroupParametersForStream(
        __int64 *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        struct _GUID *a6,
        unsigned __int8 a7,
        char a8,
        struct tWAVEFORMATEX *Src,
        __int64 a10,
        _QWORD *a11,
        StreamGroupParams **a12)
{
  _DWORD *v14; // rbx
  int v15; // r8d
  int v16; // r9d
  StreamGroupParams *v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  unsigned int v20; // ebx
  char v21; // r12
  char *v22; // rax
  char *v23; // rdi
  __int64 v24; // rdx
  LPVOID v25; // rbx
  void *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int8 v29; // bl
  const char *v30; // r9
  char *v31; // rdx
  _QWORD *v32; // rbx
  _DWORD *v33; // r15
  __int64 v34; // r8
  __int64 v35; // r9
  StreamGroupParams *v36; // rdx
  char v38; // [rsp+40h] [rbp-59h] BYREF
  char v39[7]; // [rsp+41h] [rbp-58h] BYREF
  __int64 v40; // [rsp+48h] [rbp-51h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-49h] BYREF
  StreamGroupParams *v42; // [rsp+58h] [rbp-41h] BYREF
  void *v43[2]; // [rsp+60h] [rbp-39h] BYREF
  struct _GUID v44; // [rsp+70h] [rbp-29h] BYREF
  char v45; // [rsp+80h] [rbp-19h]
  unsigned __int64 v46; // [rsp+90h] [rbp-9h] BYREF
  __int64 v47; // [rsp+98h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+3Fh]

  v47 = a4;
  LODWORD(v40) = a3;
  v46 = (unsigned __int64)a1;
  v14 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v14 > 4u )
  {
    if ( a11 )
      v17 = (StreamGroupParams *)(*(__int64 (__fastcall **)(_QWORD *))(*a11 + 80LL))(a11);
    else
      v17 = 0LL;
    v42 = v17;
    v39[0] = a8;
    v38 = a7;
    *(_QWORD *)&v44.Data1 = a6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      (_DWORD)v14,
      (unsigned int)&unk_1801A4064,
      v15,
      v16,
      (__int64)&v44,
      (__int64)&v38,
      (__int64)v39,
      (__int64)&v42);
  }
  pv = 0LL;
  v18 = *a1;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  v19 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(v18 + 40) + 40LL))(*(_QWORD *)(v18 + 40), &pv);
  v20 = v19;
  if ( v19 >= 0 )
  {
    v43[0] = 0LL;
    *(_QWORD *)&v44.Data1 = v43;
    *(_QWORD *)v44.Data4 = 0LL;
    v21 = 1;
    v45 = 1;
    v20 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v44.Data4);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v44);
    if ( (v20 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BC,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v20);
LABEL_34:
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        v43,
        0LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      return v20;
    }
    v22 = (char *)operator new[](0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
    v23 = v22;
    *(_QWORD *)&v44.Data1 = v22;
    if ( v22 )
    {
      memset_0(v22, 0, 0x60uLL);
      *(_QWORD *)v23 = 0LL;
      *((_QWORD *)v23 + 2) = 0LL;
      *((_QWORD *)v23 + 7) = 0LL;
      *((_QWORD *)v23 + 8) = 0LL;
      *((_QWORD *)v23 + 9) = 0LL;
      *((_QWORD *)v23 + 10) = 0LL;
      v23[88] = 0;
    }
    else
    {
      v23 = 0LL;
    }
    v42 = (StreamGroupParams *)v23;
    if ( !v23 )
    {
      v24 = 959LL;
LABEL_16:
      v20 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(&v42);
      goto LABEL_34;
    }
    v25 = pv;
    pv = 0LL;
    CoTaskMemFree(*(LPVOID *)v23);
    *(_QWORD *)v23 = v25;
    v23[49] = a2 == 3;
    v26 = v43[0];
    v43[0] = 0LL;
    CoTaskMemFree(*((LPVOID *)v23 + 2));
    *((_QWORD *)v23 + 2) = v26;
    *((_QWORD *)v23 + 3) = v47;
    *((struct _GUID *)v23 + 2) = *a6;
    v23[48] = a7;
    v29 = a8;
    v23[50] = a8;
    *((_DWORD *)v23 + 2) = v40;
    if ( a11 )
    {
      v44 = *a6;
      if ( EffectPack::CanProcessingModeBeParameterized(*(EffectPack **)(v46 + 8), &v44, a2) )
      {
        v31 = (char *)a11[74];
        if ( v31 )
        {
          wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
            &v40,
            v31,
            0xFFFFFFFFFFFFFFFFuLL,
            v30);
          v32 = v23 + 80;
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
            v23 + 80,
            &v40);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v40);
          if ( !*((_QWORD *)v23 + 10) )
          {
            v24 = 977LL;
            goto LABEL_16;
          }
        }
        else
        {
          v32 = v23 + 80;
        }
        if ( !a10 || !*(_DWORD *)(*(_QWORD *)(a10 + 8) + 60LL) )
          v21 = 0;
        v23[88] = v21;
        std::vector<CProcessingModeParameters::AudioEffectState>::operator=(v23 + 56, a11 + 71);
        v33 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *v33 > 4u )
        {
          v46 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)v23 + 8) - *((_QWORD *)v23 + 7)) >> 2);
          v38 = v23[88];
          *(_QWORD *)&v44.Data1 = *v32;
          v40 = (*(__int64 (__fastcall **)(_QWORD *))(*a11 + 80LL))(a11);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            (int)v33,
            (int)&unk_1801A3FE6,
            v34,
            v35,
            (__int64)&v40,
            (const wchar_t **)&v44,
            (__int64)&v38,
            (__int64)&v46);
        }
        v29 = a8;
      }
    }
    v42 = 0LL;
    v36 = *a12;
    *a12 = (StreamGroupParams *)v23;
    if ( v36 )
      std::default_delete<StreamGroupParams>::operator()(v27, v36);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Idd(*((_QWORD *)WPP_GLOBAL_Control + 2), a7, v28, v47, a7, v29);
    }
    std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(&v42);
    v20 = 0;
    goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B9,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v19);
  if ( pv )
    CoTaskMemFree(pv);
  return v20;
}
