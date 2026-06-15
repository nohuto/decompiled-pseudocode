/*
 * XREFs of ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x1800465F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800017A8 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000B7F0 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x180045924 (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 *     ??$MakeAndInitialize@VVirtualAudioStreamInfo@@UIAudioStreamInfo@@PEAVVirtualAudioSessionInfo@@AEAKW4SYSTEM_AUDIO_STREAM_TYPE@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioStreamInfo@@$$QEAPEAVVirtualAudioSessionInfo@@AEAK$$QEAW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180045A58 (--$MakeAndInitialize@VVirtualAudioStreamInfo@@UIAudioStreamInfo@@PEAVVirtualAudioSessionInfo@@AE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::NotifyVirtualStreamStateChange(
        __int64 a1,
        struct IAudioProcess *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7)
{
  __int64 v7; // rbx
  const struct _tlgProvider_t *v10; // rcx
  int v11; // esi
  unsigned int v12; // r14d
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edi
  int v16; // eax
  unsigned int v17; // ebx
  wchar_t *v18; // rbx
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v23[2]; // [rsp+40h] [rbp-28h] BYREF
  wchar_t *v24; // [rsp+48h] [rbp-20h] BYREF
  void *v25[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  wchar_t *v27; // [rsp+A0h] [rbp+38h] BYREF
  struct IAudioProcess *v28; // [rsp+A8h] [rbp+40h] BYREF
  unsigned __int16 *v29; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+50h] BYREF

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v7 = a4;
  v10 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  v11 = a7;
  v12 = a6;
  if ( *(_DWORD *)v10 > 4u && tlgKeywordOn((__int64)v10, 0x8000LL) )
  {
    a7 = v11;
    LODWORD(v27) = v12;
    v24 = off_180054670[v7];
    v25[0] = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      (__int64)&unk_18005B57B,
      v13,
      v14,
      v25,
      (void **)&v24,
      (__int64)&v27,
      (__int64)&a7);
  }
  CWindowsPolicyManager::Lock((__int64)v10, v25);
  LODWORD(v27) = v11 == 1;
  LOBYTE(a7) = (_DWORD)v7 == 3;
  v15 = a5;
  LOBYTE(a5) = a5 == 1;
  v24 = 0LL;
  v16 = Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioSessionInfo,VirtualAudioSessionInfo,IAudioProcess * &,unsigned short const * &,bool,bool,enum _AudioSessionState>(
          (VirtualAudioSessionInfo **)&v24,
          &v28,
          &v29,
          (unsigned __int8 *)&a5,
          (unsigned __int8 *)&a7,
          (enum _AudioSessionState *)&v27);
  v17 = v16;
  if ( v16 >= 0 )
  {
    a7 = v15 != 0;
    v18 = v24;
    v27 = v24;
    *(_QWORD *)v23 = 0LL;
    v19 = Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioStreamInfo,IAudioStreamInfo,VirtualAudioSessionInfo *,unsigned long &,enum SYSTEM_AUDIO_STREAM_TYPE>(
            v23,
            (__int64 *)&v27,
            (int *)&v30,
            &a7);
    v20 = v19;
    if ( v19 >= 0 )
    {
      v21 = CWindowsPolicyManager::OnStreamStateChanged(
              (CPlaybackManager *)(a1 - 8),
              (__int64)v18,
              v12,
              v11,
              *(struct IAudioStreamInfo **)v23);
      v17 = v21;
      if ( v21 >= 0 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
        v17 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x324,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
          (const char *)(unsigned int)v21);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x322,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
        (const char *)(unsigned int)v19);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
      v17 = v20;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v16);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v25);
  return v17;
}
