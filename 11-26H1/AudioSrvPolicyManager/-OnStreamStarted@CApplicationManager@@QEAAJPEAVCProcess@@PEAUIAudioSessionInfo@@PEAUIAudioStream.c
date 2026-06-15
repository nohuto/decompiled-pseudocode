/*
 * XREFs of ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Do_call @ 0x18002A1B0 (std--_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000D010 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18000DE30 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800125C0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180014080 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180014910 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180014990 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015CB0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800161F4 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180022700 (McTemplateU0zqq_EventWriteTransfer.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180028EB8 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x1800292E4 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18002A4C8 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x1800382D4 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18003A890 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18003D238 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180040094 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::OnStreamStarted(
        CApplicationManager *this,
        CApplication **a2,
        struct IAudioSessionInfo *a3,
        struct IAudioStreamInfo *a4)
{
  CApplicationManager *v6; // r13
  const struct _tlgProvider_t *v7; // rax
  const struct _tlgProvider_t *v8; // rdi
  _BYTE *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // eax
  CProcess *v13; // rdi
  unsigned int v14; // ecx
  _DWORD *v15; // rcx
  __int64 v16; // r8
  unsigned __int16 *v17; // r15
  int v18; // r14d
  int v19; // r9d
  __int64 v20; // rdx
  int v21; // esi
  int v22; // r9d
  int v23; // edi
  int v24; // r9d
  int v25; // r11d
  __int64 v26; // r9
  int v27; // r12d
  unsigned __int8 v28; // al
  unsigned int v29; // ecx
  BOOL v30; // r13d
  __int64 v31; // r15
  DWORD v32; // ebx
  struct _RTL_CRITICAL_SECTION *v33; // rdi
  __int64 v34; // rcx
  struct TSSession *v35; // r8
  int v36; // r12d
  unsigned int v37; // r14d
  unsigned int v38; // eax
  unsigned int v39; // ecx
  _QWORD *k; // rbx
  _QWORD *v41; // rcx
  unsigned int v42; // esi
  unsigned int v43; // eax
  __int64 i; // rdx
  _QWORD *j; // rbx
  _QWORD *v46; // rcx
  struct _RTL_CRITICAL_SECTION *v47; // rcx
  CApplicationManager *v48; // rbx
  int v49; // ecx
  CProcess *v51; // rax
  _QWORD *v52; // rbx
  int v53; // edx
  int updated; // ebx
  __int64 v55; // rdx
  __int64 v56; // rdx
  _QWORD *v57; // rbx
  int v58; // edx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // eax
  unsigned int v63; // ebx
  unsigned int v64; // [rsp+40h] [rbp-C0h] BYREF
  char *LockSemaphore; // [rsp+48h] [rbp-B8h] BYREF
  int v66; // [rsp+50h] [rbp-B0h] BYREF
  CApplication *v67; // [rsp+58h] [rbp-A8h] BYREF
  struct TSSession *v68; // [rsp+60h] [rbp-A0h] BYREF
  CProcess *v69; // [rsp+68h] [rbp-98h] BYREF
  LPCRITICAL_SECTION v70; // [rsp+70h] [rbp-90h] BYREF
  __int64 v71; // [rsp+78h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v73; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h] BYREF
  CApplicationManager *v75; // [rsp+98h] [rbp-68h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  struct _RTL_CRITICAL_SECTION *v77[4]; // [rsp+B0h] [rbp-50h] BYREF
  char v78; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+E0h] [rbp-20h] BYREF
  void *v80; // [rsp+F0h] [rbp-10h]
  int v81; // [rsp+F8h] [rbp-8h]
  int v82; // [rsp+FCh] [rbp-4h]
  _BYTE *v83; // [rsp+100h] [rbp+0h]
  int v84; // [rsp+108h] [rbp+8h]
  int v85; // [rsp+10Ch] [rbp+Ch]
  LPCRITICAL_SECTION *v86; // [rsp+110h] [rbp+10h]
  __int64 v87; // [rsp+118h] [rbp+18h]
  __int64 *v88; // [rsp+120h] [rbp+20h]
  __int64 v89; // [rsp+128h] [rbp+28h]
  LPCRITICAL_SECTION *p_lpCriticalSection; // [rsp+130h] [rbp+30h]
  __int64 v91; // [rsp+138h] [rbp+38h]
  int *v92; // [rsp+140h] [rbp+40h]
  __int64 v93; // [rsp+148h] [rbp+48h]
  struct TSSession **v94; // [rsp+150h] [rbp+50h]
  __int64 v95; // [rsp+158h] [rbp+58h]
  unsigned __int16 **v96; // [rsp+160h] [rbp+60h]
  __int64 v97; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v69 = (CProcess *)a2;
  v6 = g_ApplicationManager;
  v75 = g_ApplicationManager;
  v67 = a2[28];
  v7 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  v8 = v7;
  if ( *(_DWORD *)v7 > 4u
    && (*((_DWORD *)v7 + 4) & 0x8000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x8000LL) == *((_QWORD *)v7 + 3) )
  {
    v73 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 80LL))(a4);
    LODWORD(v68) = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
    v66 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4);
    LODWORD(lpCriticalSection) = *((_DWORD *)v69 + 40);
    LODWORD(v71) = *((_DWORD *)v67 + 53);
    v70 = (LPCRITICAL_SECTION)*((_QWORD *)v67 + 87);
    v9 = (_BYTE *)*((_QWORD *)v67 + 3);
    v96 = &v73;
    v97 = 8LL;
    v94 = &v68;
    v95 = 4LL;
    v92 = &v66;
    v93 = 4LL;
    p_lpCriticalSection = &lpCriticalSection;
    v91 = 4LL;
    v88 = &v71;
    v89 = 4LL;
    v86 = &v70;
    v87 = 8LL;
    if ( v9 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)&v9[2 * v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v9 = byte_180056CEC;
      v11 = 2;
    }
    v83 = v9;
    v84 = v11;
    v85 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 0x8000LL;
    UserData.Ptr = *((_QWORD *)v8 + 1);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v80 = &unk_18005B846;
    v81 = 94;
    v82 = 1;
    LODWORD(LockSemaphore) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v8 + 4), &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  v12 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
  v13 = v69;
  if ( v12 >= 0x18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v64 = v12;
  if ( !(*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v69 + 96LL))(v69) )
    goto LABEL_11;
  v14 = v64;
  if ( dword_180056680[v64] )
  {
    if ( (*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v13 + 136LL))(v13)
      || (*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v13 + 376LL))(v13) )
    {
LABEL_11:
      v14 = v64;
      goto LABEL_12;
    }
    v14 = 0;
    v64 = 0;
  }
LABEL_12:
  if ( v14 == 3 && !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4) )
    CDuckingManager::OnRenderCommunicationsStreamStateChanged(v60, a3, v61, 1LL, a4);
  v77[1] = (struct _RTL_CRITICAL_SECTION *)&v69;
  v77[2] = (struct _RTL_CRITICAL_SECTION *)&v67;
  v77[3] = (struct _RTL_CRITICAL_SECTION *)&v64;
  v78 = 1;
  v17 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a3 + 72LL))(a3);
  v73 = v17;
  v18 = 0;
  v19 = 0;
  v20 = *((unsigned int *)v69 + 68);
  if ( (int)v20 > 0 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 < 0 || v19 >= (int)v20 )
      {
        ATL::_AtlRaiseException((unsigned int)v15, v20);
        __debugbreak();
      }
      v15 = *(_DWORD **)(*((_QWORD *)v69 + 33) + v16);
      v18 += v15[11];
      ++v19;
      v16 += 8LL;
    }
    while ( v19 < (int)v20 );
  }
  v21 = 0;
  v22 = 0;
  if ( (int)v20 > 0 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 < 0 || v22 >= (int)v20 )
      {
        ATL::_AtlRaiseException((unsigned int)v15, v20);
        __debugbreak();
      }
      v15 = *(_DWORD **)(*((_QWORD *)v69 + 33) + v16);
      v21 += v15[10];
      ++v22;
      v16 += 8LL;
    }
    while ( v22 < (int)v20 );
  }
  v23 = 0;
  v24 = 0;
  if ( (int)v20 > 0 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 < 0 || v24 >= (int)v20 )
      {
        ATL::_AtlRaiseException((unsigned int)v15, v20);
        __debugbreak();
      }
      v15 = *(_DWORD **)(*((_QWORD *)v69 + 33) + v16);
      v23 += v15[2];
      ++v24;
      v16 += 8LL;
    }
    while ( v24 < (int)v20 );
  }
  v25 = 0;
  v26 = 0LL;
  if ( (int)v20 > 0 )
  {
    v16 = 0LL;
    do
    {
      if ( v16 < 0 || (int)v26 >= (int)v20 )
      {
        ATL::_AtlRaiseException((unsigned int)v15, v20);
        __debugbreak();
      }
      v15 = *(_DWORD **)(*((_QWORD *)v69 + 33) + v16);
      v25 += v15[1];
      v26 = (unsigned int)(v26 + 1);
      v16 += 8LL;
    }
    while ( (int)v26 < (int)v20 );
  }
  v27 = v18 + v21 + v25 + v23;
  v66 = v27;
  v28 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64, __int64, __int64))(*(_QWORD *)a4 + 64LL))(
          a4,
          v20,
          v16,
          v26);
  CProcess::UpdateStreamCountAndProcessCategory(v69, v17, v64, 1, v28, 0LL, 0LL);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
    || v64 == 2
    || (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(v67) )
  {
    v51 = v69;
    if ( *((_DWORD *)v69 + 119) == 3 )
    {
      *(_QWORD *)((char *)v69 + 476) = 0LL;
      *((_DWORD *)v51 + 121) = 4;
    }
    CApplication::RemoveAudioPlaybackRestriction(v67);
    CProcess::DeleteInactivityTimer(v69);
    CApplication::CleanupBCMStartupLatencyGracePeriod(v67);
  }
  v29 = v64;
  if ( v64 == 2 )
  {
    CApplication::ApplySmtcRelatedPolicy(v67);
    v29 = v64;
  }
  if ( *((_DWORD *)v69 + 106)
    && (v29 == 2 || (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(v67))
    && *((_DWORD *)v67 + 108) )
  {
    CApplication::CommitGoodFaithPLMExemption(v67);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
    && (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v67) )
  {
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v6, *((_DWORD *)v67 + 53), 0);
  }
  v30 = 0;
  v74 = 0LL;
  (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a4)(
    a4,
    &GUID_390561ae_7375_4558_aff9_667acfe35ac5,
    &v74);
  v71 = v74;
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
  v31 = v64;
  v32 = *((_DWORD *)v69 + 41);
  v33 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  *(_QWORD *)&EventDescriptor.Id = v33;
  LODWORD(LockSemaphore) = v32;
  v68 = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v77[0] = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v34,
    &v70,
    &LockSemaphore);
  if ( v70 == (LPCRITICAL_SECTION)qword_180068A38 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v77);
    v62 = TsSessionCreate(v32, &v68);
    v63 = v62;
    if ( v62 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43C,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v62);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A7,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v63);
      if ( v33 )
        LeaveCriticalSection(v33);
      goto LABEL_69;
    }
    v35 = v68;
    LockSemaphore = (char *)v68;
  }
  else
  {
    LockSemaphore = (char *)v70->LockSemaphore;
    LeaveCriticalSection(&stru_180068A08);
    v35 = (struct TSSession *)LockSemaphore;
  }
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  while ( 1 )
  {
    if ( v38 >= 0x18 )
    {
      v30 = v36;
      v42 = 0;
      v43 = 0;
      for ( i = 0LL; ; i = v42 )
      {
        while ( 1 )
        {
          if ( v43 >= 0x18 )
          {
            v30 = v30 || v36;
            if ( lpCriticalSection )
            {
              v47 = lpCriticalSection;
              goto LABEL_67;
            }
            goto LABEL_68;
          }
          LODWORD(v68) = 0;
          if ( qword_180051880[24 * v31 + (unsigned int)i] )
            break;
LABEL_55:
          v43 = ++v42;
          i = v42;
        }
        for ( j = (_QWORD *)*((_QWORD *)v35 + 133); ; j = (_QWORD *)*j )
        {
          if ( !j )
          {
            v35 = (struct TSSession *)LockSemaphore;
            goto LABEL_55;
          }
          v46 = (_QWORD *)j[1];
          if ( v46[3] > 7uLL )
            v46 = (_QWORD *)*v46;
          if ( !(unsigned int)_o__wcsicmp(v46, qword_180051880[24 * v31 + v42]) )
            break;
        }
        v35 = (struct TSSession *)LockSemaphore;
        v57 = (_QWORD *)(j[1] + 32LL);
        v58 = *(_DWORD *)(*v57 + 24LL);
        if ( !v58 )
          break;
        if ( v58 == 1 )
        {
          updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                      (LPCRITICAL_SECTION)(LockSemaphore + 136),
                      v42,
                      0,
                      v57,
                      0,
                      v71,
                      (__int64)&v68);
          if ( updated < 0 )
          {
            v59 = 142LL;
            goto LABEL_111;
          }
          goto LABEL_141;
        }
        if ( v58 == 2 )
        {
          updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                      (LPCRITICAL_SECTION)LockSemaphore + 14,
                      v42,
                      0,
                      v57,
                      0,
                      v71,
                      (__int64)&v68);
          if ( updated < 0 )
          {
            v59 = 152LL;
            goto LABEL_111;
          }
LABEL_141:
          v35 = (struct TSSession *)LockSemaphore;
        }
        if ( v36 || (_DWORD)v68 )
        {
          v36 = 1;
          goto LABEL_55;
        }
        v36 = 0;
        v43 = ++v42;
      }
      v70 = 0LL;
      CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
        (CStreamClassPolicyGainsWrapper *)(LockSemaphore + 72),
        v73,
        (struct CStreamClassPolicyGains **)&v70);
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(v70, v42, 0, v57, 0, v71, (__int64)&v68);
      if ( updated < 0 )
      {
        v59 = 132LL;
LABEL_111:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v59,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
          (const char *)(unsigned int)updated);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x692,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)updated);
        v56 = 1715LL;
        goto LABEL_102;
      }
      goto LABEL_141;
    }
    LODWORD(v68) = 0;
    if ( !qword_180050680[24 * v31 + v39] )
      goto LABEL_45;
    for ( k = (_QWORD *)*((_QWORD *)v35 + 133); ; k = (_QWORD *)*k )
    {
      if ( !k )
      {
        v35 = (struct TSSession *)LockSemaphore;
        goto LABEL_45;
      }
      v41 = (_QWORD *)k[1];
      if ( v41[3] > 7uLL )
        v41 = (_QWORD *)*v41;
      if ( !(unsigned int)_o__wcsicmp(v41, qword_180050680[24 * v31 + v37]) )
        break;
    }
    v35 = (struct TSSession *)LockSemaphore;
    v52 = (_QWORD *)(k[1] + 32LL);
    v53 = *(_DWORD *)(*v52 + 24LL);
    if ( !v53 )
    {
      v70 = 0LL;
      CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
        (CStreamClassPolicyGainsWrapper *)(LockSemaphore + 72),
        v73,
        (struct CStreamClassPolicyGains **)&v70);
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(v70, v37, 1, v52, 0, v71, (__int64)&v68);
      if ( updated < 0 )
      {
        v55 = 132LL;
        goto LABEL_101;
      }
      goto LABEL_134;
    }
    if ( v53 == 1 )
    {
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                  (LPCRITICAL_SECTION)(LockSemaphore + 136),
                  v37,
                  1,
                  v52,
                  0,
                  v71,
                  (__int64)&v68);
      if ( updated < 0 )
      {
        v55 = 142LL;
        goto LABEL_101;
      }
      goto LABEL_134;
    }
    if ( v53 != 2 )
      goto LABEL_104;
    updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                (LPCRITICAL_SECTION)LockSemaphore + 14,
                v37,
                1,
                v52,
                0,
                v71,
                (__int64)&v68);
    if ( updated < 0 )
      break;
LABEL_134:
    v35 = (struct TSSession *)LockSemaphore;
LABEL_104:
    if ( v36 || (_DWORD)v68 )
    {
      v36 = 1;
LABEL_45:
      v38 = ++v37;
      v39 = v37;
    }
    else
    {
      v36 = 0;
      v38 = ++v37;
      v39 = v37;
    }
  }
  v55 = 152LL;
LABEL_101:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v55,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
    (const char *)(unsigned int)updated);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x692,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)updated);
  v56 = 1708LL;
LABEL_102:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v56,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)updated);
  v47 = lpCriticalSection;
  if ( lpCriticalSection )
LABEL_67:
    LeaveCriticalSection(v47);
LABEL_68:
  v27 = v66;
LABEL_69:
  if ( v74 )
    (*(void (__fastcall **)(__int64, __int64, struct TSSession *))(*(_QWORD *)v74 + 16LL))(v74, i, v35);
  v48 = v75;
  if ( v30 )
    CApplicationManager::UpdateVolumeForAllAppsInSession(v75, *((unsigned int *)v67 + 53), 3LL);
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v48, *((_DWORD *)v67 + 53), 0);
  if ( (v64 - 10 <= 1 || v64 - 1 <= 1) && !v27 )
    CApplication::SendTrackStateNotification(v67);
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(v67) )
    CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v48);
  if ( *((_DWORD *)v69 + 106) )
  {
    if ( Microsoft_Windows_AudioEnableBits < 0 )
      McTemplateU0zqq_EventWriteTransfer(
        v49,
        (unsigned int)&EVT_PBM_STREAM_STARTED,
        *((_QWORD *)v67 + 3),
        *((_DWORD *)v69 + 40),
        v64);
  }
  return 0LL;
}
