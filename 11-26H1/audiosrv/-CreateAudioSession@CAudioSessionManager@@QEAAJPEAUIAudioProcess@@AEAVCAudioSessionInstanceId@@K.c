/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180012890 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016410 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180018650 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180026D90 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?RVCAudioSessionInstanceId@@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_KAEBVCAudioSessionInstanceId@@@Z @ 0x180017D00 (--$-RVCAudioSessionInstanceId@@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSessio.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x18001A94C (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180028850 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ??$emplace@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180040E50 (--$emplace@AEAVCAudioSessionInstanceId@@AEAV-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@w.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIAudioSessionPolicyControl@@UIAudioSessionInfo@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioSessionInfoInternal@@UIAudioSessionDuckingControl@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180041650 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180042210 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x180049260 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18005D314 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?_Erase_bucket@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@_K@Z @ 0x180068E20 (-_Erase_bucket@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Ue.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@QEAU32@@Z @ 0x180068E60 (-_Unchecked_erase@-$list@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr.c)
 *     ??$Make@VCPerStreamVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPerStreamVolumeAudioSession@@@12@XZ @ 0x18007C340 (--$Make@VCPerStreamVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPerStreamVolum.c)
 *     ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x1800853BC (-UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@.c)
 *     ??$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPerEndpointVolumeAudioSession@@@12@XZ @ 0x180086360 (--$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPerEndpointV.c)
 *     _lambda_f00ad828a2d515e855b0de47f172bf9e_::operator() @ 0x1800AAA1C (_lambda_f00ad828a2d515e855b0de47f172bf9e_--operator().c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CC6A0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     WPP_SF_SS @ 0x1800D12B0 (WPP_SF_SS.c)
 *     ?find@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBVCAudioSessionInstanceId@@@Z @ 0x1800D2D10 (-find@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_return.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        struct _RTL_CRITICAL_SECTION *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  struct IAudioProcess *v7; // r13
  struct _RTL_CRITICAL_SECTION *v8; // r12
  struct _RTL_CRITICAL_SECTION *p_LockCount; // r14
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  struct CAudioSession *v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  int v14; // r12d
  _QWORD *v15; // r14
  _QWORD *v16; // r15
  const char *v17; // r9
  __int64 result; // rax
  HANDLE *v19; // r13
  HANDLE *v20; // rax
  int v21; // eax
  int v22; // ebx
  struct CAudioSession **v23; // rax
  struct CAudioSession *v24; // rdx
  struct CAudioSession *v25; // rcx
  GUID v26; // xmm6
  int v27; // eax
  unsigned int v28; // ebx
  struct CAudioSessionInstanceId *v29; // rbx
  DWORD v30; // r12d
  DWORD LastError; // ebx
  struct CAudioSession **v32; // rax
  struct CAudioSession *v33; // rdx
  struct CAudioSession *v34; // rcx
  void *v35; // rdx
  unsigned int v36; // r8d
  const char *v37; // r9
  _QWORD *i; // rbx
  int v39; // eax
  unsigned int v40; // r15d
  struct CAudioSession *v41; // rbx
  __int64 v42; // rbx
  struct _RTL_CRITICAL_SECTION *v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // r9d
  int v48; // eax
  unsigned int v49; // esi
  int v50; // eax
  unsigned int v51; // ebx
  char v52; // [rsp+50h] [rbp-108h]
  struct CAudioSession *v53; // [rsp+58h] [rbp-100h] BYREF
  WINBOOL fPending[2]; // [rsp+60h] [rbp-F8h] BYREF
  struct CAudioSessionInstanceId *v55; // [rsp+68h] [rbp-F0h] BYREF
  struct CAudioSession *v56; // [rsp+70h] [rbp-E8h] BYREF
  struct IAudioProcess *v57; // [rsp+78h] [rbp-E0h]
  int v58; // [rsp+80h] [rbp-D8h]
  struct _RTL_CRITICAL_SECTION *v59; // [rsp+88h] [rbp-D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v60; // [rsp+90h] [rbp-C8h] BYREF
  HANDLE *p_OwningThread; // [rsp+98h] [rbp-C0h]
  int v62; // [rsp+A0h] [rbp-B8h]
  struct _RTL_CRITICAL_SECTION *v63[2]; // [rsp+A8h] [rbp-B0h] BYREF
  struct CAudioSession **v64; // [rsp+B8h] [rbp-A0h]
  struct _RTL_CRITICAL_SECTION *v65; // [rsp+C0h] [rbp-98h]
  struct CAudioSession **v66; // [rsp+C8h] [rbp-90h]
  char v67; // [rsp+D0h] [rbp-88h]
  struct _RTL_CRITICAL_SECTION *v68; // [rsp+D8h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION **v69; // [rsp+E0h] [rbp-78h]
  char v70; // [rsp+E8h] [rbp-70h]
  GUID v71; // [rsp+F0h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v58 = a4;
  v55 = a3;
  v7 = a2;
  v57 = a2;
  v8 = this;
  v59 = this;
  v64 = a7;
  v52 = 1;
  *a7 = 0LL;
  p_LockCount = (struct _RTL_CRITICAL_SECTION *)&this->LockCount;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->LockCount);
  v10 = p_LockCount;
  v60 = p_LockCount;
  v11 = 0LL;
  v56 = 0LL;
  v12 = 0LL;
  v53 = 0LL;
  EnterCriticalSection(p_LockCount);
  std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::find(
    &v8[1].LockCount,
    fPending,
    v55);
  try
  {
    if ( *(HANDLE *)fPending == v8[1].OwningThread )
    {
      if ( p_LockCount )
        LeaveCriticalSection(p_LockCount);
      v13 = -2147024894;
    }
    else
    {
      v12 = *(_QWORD *)(*(_QWORD *)fPending + 96LL);
      if ( v12 )
      {
        v53 = *(struct CAudioSession **)(*(_QWORD *)fPending + 96LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      }
      else
      {
        v12 = 0LL;
        v53 = 0LL;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_26c2f811cba6303e2e635ec6759b9dab_Traceguids,
          0,
          *((_QWORD *)v55 + 9));
      }
      if ( p_LockCount )
        LeaveCriticalSection(p_LockCount);
      v13 = 0;
    }
    if ( v13 < 0 )
    {
LABEL_7:
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v11 )
      {
        if ( (v58 & 0x20) != 0 )
          *((_DWORD *)v11 + 102) = 1;
LABEL_12:
        v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 40LL))(v7);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 664));
        v59 = (struct _RTL_CRITICAL_SECTION *)((char *)v11 + 664);
        v15 = (_QWORD *)*((_QWORD *)v11 + 88);
        v16 = (_QWORD *)*((_QWORD *)v11 + 89);
        while ( v15 != v16 )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 40LL))(*v15) == v14 )
          {
            if ( v11 != (struct CAudioSession *)-664LL )
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v11 + 664));
            goto LABEL_18;
          }
          ++v15;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v59);
        v50 = CAudioSession::RegisterOwnerProcess(v11, v57);
        v51 = v50;
        if ( v50 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x15B,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v50);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v56);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v60);
          return v51;
        }
LABEL_18:
        if ( v52 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 184LL))(v11);
        *v64 = v11;
        if ( v10 )
          LeaveCriticalSection(v10);
        return 0LL;
      }
      if ( v10 )
      {
        LastError = GetLastError();
        LeaveCriticalSection(v10);
        SetLastError(LastError);
      }
      v10 = 0LL;
      v60 = 0LL;
      v53 = 0LL;
      v22 = v58;
      if ( (v58 & 8) != 0 )
      {
        v23 = (struct CAudioSession **)Microsoft::WRL::Details::Make<CPerStreamVolumeAudioSession,>(fPending);
        v24 = *v23;
        *v23 = 0LL;
        v25 = v53;
        v53 = v24;
        if ( v25 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v25 + 16LL))(v25);
        if ( !*(_QWORD *)fPending )
          goto LABEL_45;
      }
      else
      {
        v32 = (struct CAudioSession **)Microsoft::WRL::Details::Make<CPerEndpointVolumeAudioSession,>(fPending);
        v33 = *v32;
        *v32 = 0LL;
        v34 = v53;
        v53 = v33;
        if ( v34 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v34 + 16LL))(v34);
        if ( !*(_QWORD *)fPending )
          goto LABEL_45;
      }
      *(_QWORD *)fPending = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::Release();
LABEL_45:
      if ( !v53 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x101,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)0x8007000ELL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v56);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v60);
        return 2147942414LL;
      }
      v26 = GUID_00000000_0000_0000_0000_000000000000;
      if ( (v22 & 4) == 0 && !(*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 448LL))(v7) )
        v26 = *(GUID *)(*(__int64 (__fastcall **)(struct IAudioProcess *, GUID *, char *))(*(_QWORD *)v7 + 464LL))(
                         v7,
                         &v71,
                         (char *)v55 + 24);
      v71 = v26;
      v27 = (*(__int64 (__fastcall **)(struct CAudioSession *, struct _RTL_CRITICAL_SECTION *, struct IAudioProcess *, struct CAudioSessionInstanceId *, int, unsigned int, unsigned int, GUID *))(*(_QWORD *)v53 + 168LL))(
              v53,
              v8,
              v7,
              v55,
              v22,
              a5,
              a6,
              &v71);
      v28 = v27;
      if ( v27 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x119,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v27);
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v53 + 16LL))(v53);
        return v28;
      }
      EnterCriticalSection(p_LockCount);
      *(_QWORD *)&v71.Data1 = p_LockCount;
      v56 = 0LL;
      v29 = v55;
      if ( (int)CAudioSessionManager::FindAudioSession((CAudioSessionManager *)v8, v55, &v56) < 0 )
      {
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::emplace<CAudioSessionInstanceId &,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy> &>(
          &v8[1].LockCount,
          v63,
          v29,
          &v53);
        v68 = v8;
        v69 = v63;
        v70 = 1;
        v65 = v8;
        v66 = &v53;
        v67 = 1;
        v59 = v8;
        fPending[0] = 0;
        if ( !InitOnceBeginInitialize((LPINIT_ONCE)&v8[7].OwningThread, 0, fPending, 0LL) )
          wil::details::in1diag3::_Throw_GetLastError(retaddr, v35, v36, v37);
        if ( fPending[0] )
        {
          p_OwningThread = &v8[7].OwningThread;
          v62 = 4;
          lambda_f00ad828a2d515e855b0de47f172bf9e_::operator()(&v59);
          InitOnceComplete((LPINIT_ONCE)&v8[7].OwningThread, 0, 0LL);
        }
        for ( i = *(_QWORD **)&v8[7].LockCount; i; i = (_QWORD *)*i )
        {
          v39 = (*(__int64 (__fastcall **)(struct CAudioSession *, _QWORD))(*(_QWORD *)v53 + 152LL))(v53, i[1]);
          v40 = v39;
          if ( v39 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x12B,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v39);
            CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients((CAudioSessionManager *)v8, v53);
            v43 = v63[0];
            v45 = std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId>(
                    v44,
                    (__int64)&v63[0]->OwningThread);
            std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Erase_bucket(
              &v8[1].LockCount,
              v43,
              v45 & (__int64)v8[2].OwningThread);
            std::list<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>::_Unchecked_erase(&v8[1].OwningThread);
            if ( p_LockCount )
              LeaveCriticalSection(p_LockCount);
            if ( v53 )
              (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v53 + 16LL))(v53);
            if ( v56 )
              (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v56 + 16LL))(v56);
            return v40;
          }
        }
        CAudioSessionManager::NotifyActiveSession((CAudioSessionManager *)v8, v53, v36);
        v41 = v56;
        v11 = v53;
        v56 = v53;
        if ( v53 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v53 + 8LL))(v53);
        if ( v41 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v41 + 16LL))(v41);
        v52 = 0;
        v67 = 0;
        v70 = 0;
        v42 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *(_DWORD *)v42 > 4u
          && (*(_DWORD *)(v42 + 16) & 0x200LL) != 0
          && (*(_QWORD *)(v42 + 24) & 0x200LL) == *(_QWORD *)(v42 + 24) )
        {
          v7 = v57;
          fPending[0] = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v57 + 40LL))(v57);
          LODWORD(v55) = v58;
          v59 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v11 + 82);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v42,
            (unsigned int)&unk_1801A461F,
            v46,
            v47,
            (__int64)&v59,
            (__int64)&v55,
            (__int64)fPending);
        }
        else
        {
          v7 = v57;
        }
      }
      else
      {
        v11 = v56;
      }
      if ( p_LockCount )
        LeaveCriticalSection(p_LockCount);
      if ( v53 )
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v53 + 16LL))(v53);
      goto LABEL_12;
    }
    if ( p_LockCount )
    {
      v30 = GetLastError();
      LeaveCriticalSection(p_LockCount);
      SetLastError(v30);
    }
    v60 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 544));
    *(_QWORD *)&v71.Data1 = v12 + 544;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 32LL))(v12 + 8) == 2 )
    {
LABEL_36:
      if ( v12 != -544 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v12 + 544));
      v10 = p_LockCount;
      EnterCriticalSection(p_LockCount);
      v60 = p_LockCount;
      v8 = v59;
      goto LABEL_7;
    }
    fPending[0] = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 40LL))(v7);
    EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 664));
    v63[0] = (struct _RTL_CRITICAL_SECTION *)(v12 + 664);
    v19 = *(HANDLE **)(v12 + 704);
    v20 = *(HANDLE **)(v12 + 712);
    p_OwningThread = v20;
    while ( v19 != v20 )
    {
      v21 = (*(__int64 (__fastcall **)(HANDLE))(*(_QWORD *)*v19 + 40LL))(*v19);
      if ( v21 == fPending[0] )
      {
        if ( v12 != -664 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v12 + 664));
        v7 = v57;
        goto LABEL_35;
      }
      ++v19;
      v20 = p_OwningThread;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v63);
    v7 = v57;
    v48 = CAudioSession::RegisterOwnerProcess((CAudioSession *)v12, v57);
    v49 = v48;
    if ( v48 >= 0 )
    {
LABEL_35:
      *(_QWORD *)(v12 + 320) = GetTickCount64();
      CAudioSession::StartInactiveTimer((CAudioSession *)v12);
      v11 = (struct CAudioSession *)v12;
      v56 = (struct CAudioSession *)v12;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      goto LABEL_36;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v48);
    if ( v12 != -544 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v12 + 544));
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    result = v49;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x172,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v17);
  }
  return result;
}
