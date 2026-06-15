/*
 * XREFs of ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Do_call @ 0x1800133C0 (std--_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000D010 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18000DE30 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800125C0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180014080 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180014910 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180014990 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18001689C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x1800224E0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180022700 (McTemplateU0zqq_EventWriteTransfer.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180028EB8 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18002DB40 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     atexit @ 0x18002FCC4 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180037AB8 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18003A300 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18003D238 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180040094 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::OnStreamStopped(
        CApplicationManager *this,
        CApplication **a2,
        struct IAudioSessionInfo *a3,
        struct IAudioStreamInfo *a4)
{
  CApplicationManager *v6; // r14
  __int64 v7; // rdi
  _BYTE *v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // eax
  CProcess *v12; // rdi
  unsigned int v13; // ecx
  unsigned __int16 *v14; // rdi
  unsigned __int8 v15; // al
  BOOL v16; // r13d
  __int64 v17; // r15
  DWORD v18; // ebx
  struct _RTL_CRITICAL_SECTION *v19; // rdi
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ebx
  _QWORD *v23; // r8
  int v24; // r12d
  unsigned int v25; // r14d
  unsigned int v26; // eax
  unsigned int v27; // ecx
  _QWORD *k; // rbx
  _QWORD *v29; // rcx
  unsigned int v30; // esi
  unsigned int v31; // eax
  __int64 i; // rdx
  _QWORD *j; // rbx
  _QWORD *v34; // rcx
  struct _RTL_CRITICAL_SECTION *v35; // rcx
  int v36; // ecx
  _QWORD *v38; // rbx
  int v39; // edx
  int updated; // ebx
  __int64 v41; // rdx
  __int64 v42; // rdx
  _QWORD *v43; // rbx
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // edx
  int v49; // ecx
  CProcess *v50; // rax
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v53; // [rsp+50h] [rbp-B0h] BYREF
  CProcess *v54; // [rsp+58h] [rbp-A8h] BYREF
  CApplication *v55; // [rsp+60h] [rbp-A0h] BYREF
  LPCRITICAL_SECTION v56; // [rsp+68h] [rbp-98h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-80h] BYREF
  CApplicationManager *v60; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v61; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v63[4]; // [rsp+A8h] [rbp-58h] BYREF
  char v64; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v66; // [rsp+E0h] [rbp-20h]
  int v67; // [rsp+E8h] [rbp-18h]
  int v68; // [rsp+ECh] [rbp-14h]
  _BYTE *v69; // [rsp+F0h] [rbp-10h]
  int v70; // [rsp+F8h] [rbp-8h]
  int v71; // [rsp+FCh] [rbp-4h]
  LPCRITICAL_SECTION *v72; // [rsp+100h] [rbp+0h]
  __int64 v73; // [rsp+108h] [rbp+8h]
  __int64 *v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+120h] [rbp+20h]
  __int64 v77; // [rsp+128h] [rbp+28h]
  WINBOOL *v78; // [rsp+130h] [rbp+30h]
  __int64 v79; // [rsp+138h] [rbp+38h]
  __int64 *v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+148h] [rbp+48h]
  unsigned __int16 **v82; // [rsp+150h] [rbp+50h]
  __int64 v83; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v54 = (CProcess *)a2;
  v6 = g_ApplicationManager;
  v60 = g_ApplicationManager;
  v55 = a2[28];
  Context = 0LL;
  fPending[0] = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    *(_QWORD *)&EventDescriptor.Id = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1800688A0;
    qword_1800688A8 = 0LL;
    byte_1800688B0 = 0;
    dword_1800688B4 = 0;
    qword_1800688A0 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
    qword_1800688B8 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
    LODWORD(EventDescriptor.Keyword) = 0;
    wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&EventDescriptor);
  }
  v7 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 4u
    && (*(_DWORD *)(v7 + 16) & 0x8000LL) != 0
    && (*(_QWORD *)(v7 + 24) & 0x8000LL) == *(_QWORD *)(v7 + 24) )
  {
    v61 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 80LL))(a4);
    LODWORD(v57) = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
    fPending[0] = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4);
    LODWORD(lpCriticalSection) = *((_DWORD *)v54 + 40);
    LODWORD(v58) = *((_DWORD *)v55 + 53);
    v56 = (LPCRITICAL_SECTION)*((_QWORD *)v55 + 87);
    v8 = (_BYTE *)*((_QWORD *)v55 + 3);
    v82 = &v61;
    v83 = 8LL;
    v80 = &v57;
    v81 = 4LL;
    v78 = fPending;
    v79 = 4LL;
    p_lpCriticalSection = &lpCriticalSection;
    v77 = 4LL;
    v74 = &v58;
    v75 = 4LL;
    v72 = &v56;
    v73 = 8LL;
    if ( v8 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)&v8[2 * v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v8 = byte_180056CEC;
      v10 = 2;
    }
    v69 = v8;
    v70 = v10;
    v71 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 0x8000LL;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v66 = &unk_18005B7DC;
    v67 = 94;
    v68 = 1;
    LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
  v12 = v54;
  if ( v11 >= 0x18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v53 = v11;
  if ( !(*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v54 + 96LL))(v54) )
    goto LABEL_14;
  v13 = v53;
  if ( dword_180056680[v53] )
  {
    if ( (*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v12 + 136LL))(v12)
      || (*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v12 + 376LL))(v12) )
    {
LABEL_14:
      v13 = v53;
      goto LABEL_15;
    }
    v13 = 0;
    v53 = 0;
  }
LABEL_15:
  if ( v13 == 3 && !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4) )
    CDuckingManager::OnRenderCommunicationsStreamStateChanged(v46, a3, v47, 0LL, a4);
  v63[1] = (struct _RTL_CRITICAL_SECTION *)&v54;
  v63[2] = (struct _RTL_CRITICAL_SECTION *)&v55;
  v63[3] = (struct _RTL_CRITICAL_SECTION *)&v53;
  v64 = 1;
  v14 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a3 + 72LL))(a3);
  v61 = v14;
  fPending[0] = 0;
  LODWORD(v57) = 0;
  v15 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
  CProcess::UpdateStreamCountAndProcessCategory(v54, v14, v53, 0, v15, fPending, (enum _APPLICATION_CATEGORY *)&v57);
  if ( fPending[0] && (_DWORD)v57 == 1 )
  {
    v48 = *((_DWORD *)v54 + 120);
    v49 = v48 ? *((_DWORD *)v54 + 121) : *((_DWORD *)v54 + 78);
    if ( v49 != 1 && !v48 && !*((_DWORD *)v54 + 104) && !CApplication::GetTotalActiveCaptureStreamCount(v55) )
    {
      v50 = v54;
      if ( *((_DWORD *)v54 + 119) != 3 )
      {
        *((_DWORD *)v54 + 119) = 3;
        *((_DWORD *)v50 + 120) = 1;
        *((_DWORD *)v50 + 121) = 1;
      }
      if ( !*((_DWORD *)v55 + 52) && *((_DWORD *)v55 + 54) )
        CApplication::RestrictAudioPlaybackToPrimaryCategories(v55);
      CProcess::StartInactivityTimer(v54);
    }
  }
  if ( (CApplication::IsUnrestrictedBackgroundAudioCapable(v55)
     || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v55))
    && !*((_DWORD *)v55 + 52)
    && !*((_DWORD *)v54 + 104) )
  {
    CProcess::StartInactivityTimer(v54);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
    && (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v55) )
  {
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v6, *((_DWORD *)v55 + 53), 0);
  }
  if ( (v53 - 1 <= 1 || v53 - 10 <= 1)
    && !CProcess::GetActiveRenderStreamCount(v54, 0xBu)
    && !CProcess::GetActiveRenderStreamCount(v54, 0xAu)
    && !CProcess::GetActiveRenderStreamCount(v54, 2u)
    && !CProcess::GetActiveRenderStreamCount(v54, 1u) )
  {
    CApplication::SendTrackStateNotification(v55);
  }
  v16 = 0;
  v57 = 0LL;
  (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a4)(
    a4,
    &GUID_390561ae_7375_4558_aff9_667acfe35ac5,
    &v57);
  v58 = v57;
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
  v17 = v53;
  v18 = *((_DWORD *)v54 + 41);
  v19 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  *(_QWORD *)&EventDescriptor.Id = v19;
  LODWORD(Context) = v18;
  *(_QWORD *)fPending = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v63[0] = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v20,
    &v56,
    &Context);
  if ( v56 == (LPCRITICAL_SECTION)qword_180068A38 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v63);
    v21 = TsSessionCreate(v18, (struct TSSession **)fPending);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43C,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v21);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A7,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v22);
      if ( v19 )
        LeaveCriticalSection(v19);
      goto LABEL_57;
    }
    v23 = *(_QWORD **)fPending;
    Context = *(LPVOID *)fPending;
  }
  else
  {
    Context = v56->LockSemaphore;
    LeaveCriticalSection(&stru_180068A08);
    v23 = Context;
  }
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  while ( 1 )
  {
    if ( v26 >= 0x18 )
    {
      v16 = v24;
      v30 = 0;
      v31 = 0;
      for ( i = 0LL; ; i = v30 )
      {
        while ( 1 )
        {
          if ( v31 >= 0x18 )
          {
            v16 = v16 || v24;
            if ( lpCriticalSection )
            {
              v35 = lpCriticalSection;
              goto LABEL_55;
            }
            goto LABEL_56;
          }
          fPending[0] = 0;
          if ( qword_180051880[24 * v17 + (unsigned int)i] )
            break;
LABEL_43:
          v31 = ++v30;
          i = v30;
        }
        for ( j = (_QWORD *)v23[133]; ; j = (_QWORD *)*j )
        {
          if ( !j )
          {
            v23 = Context;
            goto LABEL_43;
          }
          v34 = (_QWORD *)j[1];
          if ( v34[3] > 7uLL )
            v34 = (_QWORD *)*v34;
          if ( !(unsigned int)_o__wcsicmp(v34, qword_180051880[24 * v17 + v30]) )
            break;
        }
        v23 = Context;
        v43 = (_QWORD *)(j[1] + 32LL);
        v44 = *(_DWORD *)(*v43 + 24LL);
        if ( !v44 )
          break;
        if ( v44 == 1 )
        {
          updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                      (LPCRITICAL_SECTION)((char *)Context + 136),
                      v30,
                      0,
                      v43,
                      1,
                      v58,
                      (__int64)fPending);
          if ( updated < 0 )
          {
            v45 = 142LL;
            goto LABEL_83;
          }
          goto LABEL_129;
        }
        if ( v44 == 2 )
        {
          updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                      (LPCRITICAL_SECTION)Context + 14,
                      v30,
                      0,
                      v43,
                      1,
                      v58,
                      (__int64)fPending);
          if ( updated < 0 )
          {
            v45 = 152LL;
            goto LABEL_83;
          }
LABEL_129:
          v23 = Context;
        }
        if ( v24 || fPending[0] )
        {
          v24 = 1;
          goto LABEL_43;
        }
        v24 = 0;
        v31 = ++v30;
      }
      v56 = 0LL;
      CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
        (CStreamClassPolicyGainsWrapper *)((char *)Context + 72),
        v61,
        (struct CStreamClassPolicyGains **)&v56);
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(v56, v30, 0, v43, 1, v58, (__int64)fPending);
      if ( updated < 0 )
      {
        v45 = 132LL;
LABEL_83:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v45,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
          (const char *)(unsigned int)updated);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x692,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)updated);
        v42 = 1715LL;
        goto LABEL_74;
      }
      goto LABEL_129;
    }
    fPending[0] = 0;
    if ( !qword_180050680[24 * v17 + v27] )
      goto LABEL_33;
    for ( k = (_QWORD *)v23[133]; ; k = (_QWORD *)*k )
    {
      if ( !k )
      {
        v23 = Context;
        goto LABEL_33;
      }
      v29 = (_QWORD *)k[1];
      if ( v29[3] > 7uLL )
        v29 = (_QWORD *)*v29;
      if ( !(unsigned int)_o__wcsicmp(v29, qword_180050680[24 * v17 + v25]) )
        break;
    }
    v23 = Context;
    v38 = (_QWORD *)(k[1] + 32LL);
    v39 = *(_DWORD *)(*v38 + 24LL);
    if ( !v39 )
    {
      v56 = 0LL;
      CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
        (CStreamClassPolicyGainsWrapper *)((char *)Context + 72),
        v61,
        (struct CStreamClassPolicyGains **)&v56);
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(v56, v25, 1, v38, 1, v58, (__int64)fPending);
      if ( updated < 0 )
      {
        v41 = 132LL;
        goto LABEL_73;
      }
      goto LABEL_122;
    }
    if ( v39 == 1 )
    {
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                  (LPCRITICAL_SECTION)((char *)Context + 136),
                  v25,
                  1,
                  v38,
                  1,
                  v58,
                  (__int64)fPending);
      if ( updated < 0 )
      {
        v41 = 142LL;
        goto LABEL_73;
      }
      goto LABEL_122;
    }
    if ( v39 != 2 )
      goto LABEL_76;
    updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                (LPCRITICAL_SECTION)Context + 14,
                v25,
                1,
                v38,
                1,
                v58,
                (__int64)fPending);
    if ( updated < 0 )
      break;
LABEL_122:
    v23 = Context;
LABEL_76:
    if ( v24 || fPending[0] )
    {
      v24 = 1;
LABEL_33:
      v26 = ++v25;
      v27 = v25;
    }
    else
    {
      v24 = 0;
      v26 = ++v25;
      v27 = v25;
    }
  }
  v41 = 152LL;
LABEL_73:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v41,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
    (const char *)(unsigned int)updated);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x692,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)updated);
  v42 = 1708LL;
LABEL_74:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v42,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)updated);
  v35 = lpCriticalSection;
  if ( lpCriticalSection )
LABEL_55:
    LeaveCriticalSection(v35);
LABEL_56:
  v6 = v60;
LABEL_57:
  if ( v57 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v57 + 16LL))(v57, i);
  if ( v16 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v6, *((_DWORD *)v55 + 53), 3);
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v6, *((_DWORD *)v55 + 53), 0);
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(v55) )
    CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v6);
  if ( *((_DWORD *)v54 + 106) )
  {
    if ( Microsoft_Windows_AudioEnableBits < 0 )
      McTemplateU0zqq_EventWriteTransfer(
        v36,
        (unsigned int)&EVT_PBM_STREAM_STOPPED,
        *((_QWORD *)v55 + 3),
        *((_DWORD *)v54 + 40),
        v53);
  }
  return 0LL;
}
