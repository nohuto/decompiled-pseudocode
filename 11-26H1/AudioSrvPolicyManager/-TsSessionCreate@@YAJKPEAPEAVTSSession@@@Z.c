/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180019318
 * Callers:
 *     ?TsSessionGetUserSid@@YAJKPEAPEAG@Z @ 0x180002280 (-TsSessionGetUserSid@@YAJKPEAPEAG@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x180008B0C (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x180008C20 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?TsSessionIdIsPrimaryConsoleAudioSession@@YA_NK@Z @ 0x180008D28 (-TsSessionIdIsPrimaryConsoleAudioSession@@YA_NK@Z.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000EA10 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x1800133E0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180017BD0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180017D2C (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdGetUserDuckingPreference@@YAKK@Z @ 0x180018A28 (-TsSessionIdGetUserDuckingPreference@@YAKK@Z.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180018B40 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x18001F8E0 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x180020850 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180020BB8 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x180021A00 (-GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180023630 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x1800239B0 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x180024980 (-IsScreenReaderProcess@CProcess@@UEAA_NXZ.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180044028 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180007BB0 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18000CE08 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x180015C20 (--0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z.c)
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x180017AAC (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180021364 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18002630C (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18002D790 (--$emplace@AEAKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@-$_Hash@V-$_.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18002EA3C (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x18003E23C (--0CDriverListener@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCDriverListener@@U?$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ @ 0x180043358 (--1-$unique_ptr@VCDriverListener@@U-$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z @ 0x180043970 (--R-$default_delete@VCDriverListener@@@std@@QEBAXPEAVCDriverListener@@@Z.c)
 *     ??R?$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z @ 0x18004399C (--R-$default_delete@VTSSession@@@std@@QEBAXPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=26
__int64 __fastcall TsSessionCreate(DWORD SessionId, struct TSSession **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  CDriverListener *v8; // rax
  CDriverListener *v9; // rax
  struct TSSession *v10; // rbx
  __int64 v11; // rdx
  int refreshed; // eax
  unsigned int v13; // edi
  struct _RTL_CRITICAL_SECTION *v14; // rax
  _QWORD *v15; // r14
  _QWORD *v16; // rsi
  struct _RTL_CRITICAL_SECTION *v17; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  float v21; // xmm8_4
  _QWORD *v22; // rsi
  _QWORD *v23; // rbx
  struct _RTL_CRITICAL_SECTION *v24; // rax
  _QWORD *v25; // r14
  _QWORD *v26; // rsi
  struct _RTL_CRITICAL_SECTION *v27; // rax
  _QWORD *v28; // r14
  _QWORD *v29; // rbx
  struct _RTL_CRITICAL_SECTION *v30; // rax
  _QWORD *v31; // r14
  _QWORD *v32; // rsi
  struct _RTL_CRITICAL_SECTION *v33; // rax
  _QWORD *v34; // r14
  _QWORD *v35; // rbx
  struct _RTL_CRITICAL_SECTION *v36; // rax
  _QWORD *v37; // rdi
  _QWORD *v38; // rax
  __int64 v39; // rcx
  struct TSSession *v40; // rcx
  const struct _tlgProvider_t *v41; // rax
  __int64 v42; // rcx
  const struct _tlgProvider_t *v43; // r8
  _QWORD v44[32]; // [rsp+30h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]
  DWORD v46; // [rsp+170h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+178h] [rbp+10h] BYREF
  struct TSSession *v48; // [rsp+180h] [rbp+18h] BYREF
  _QWORD *v49; // [rsp+188h] [rbp+20h]

  v46 = SessionId;
  *a2 = 0LL;
  v48 = 0LL;
  try
  {
    v4 = TSSession::Create(SessionId, &v48);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BE,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v4);
      std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v48);
      return v5;
    }
    if ( SessionId == (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v8 = (CDriverListener *)operator new[](0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
      v47 = (struct _RTL_CRITICAL_SECTION *)v8;
      if ( v8 )
        v9 = CDriverListener::CDriverListener(v8);
      else
        v9 = 0LL;
      v10 = v48;
      v47 = 0LL;
      v11 = *((_QWORD *)v48 + 135);
      *((_QWORD *)v48 + 135) = v9;
      if ( v11 )
        std::default_delete<CDriverListener>::operator()();
      std::unique_ptr<CDriverListener>::~unique_ptr<CDriverListener>(&v47);
      if ( !*((_QWORD *)v10 + 135) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C4,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x8007000ELL);
        std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v48);
        return 2147942414LL;
      }
    }
    else
    {
      v10 = v48;
    }
    *((_DWORD *)v10 + 1) = GetTsAudioProtocol(SessionId);
    *((_DWORD *)v10 + 2) = ++dword_180068904;
    refreshed = TsSessionRefreshSessionInformation(v10);
    v13 = refreshed;
    if ( refreshed >= 0 )
    {
      v14 = (struct _RTL_CRITICAL_SECTION *)operator new(0x30uLL);
      v47 = v14;
      if ( v14 )
        v15 = DuckingDescriptorAndId::DuckingDescriptorAndId(v14, L"Comm", -28.0, 400000LL, 1, 0);
      else
        v15 = 0LL;
      v16 = operator new(0x10uLL);
      v16[1] = v15;
      *v16 = *((_QWORD *)v10 + 133);
      *((_QWORD *)v10 + 133) = v16;
      v17 = (struct _RTL_CRITICAL_SECTION *)operator new(0x30uLL);
      v47 = v17;
      if ( v17 )
        v18 = DuckingDescriptorAndId::DuckingDescriptorAndId(v17, L"SR", -18.0, 400000LL, 0, 0);
      else
        v18 = 0LL;
      v19 = operator new(0x10uLL);
      v19[1] = v18;
      *v19 = *v16;
      *v16 = v19;
      LODWORD(v47) = -8388608;
      v20 = operator new(0x30uLL);
      v49 = v20;
      if ( v20 )
      {
        v21 = -INFINITY;
        v22 = DuckingDescriptorAndId::DuckingDescriptorAndId(v20, L"4", -INFINITY, 400000LL, 0, 0);
      }
      else
      {
        v22 = 0LL;
        v21 = *(float *)&v47;
      }
      v23 = operator new(0x10uLL);
      v23[1] = v22;
      *v23 = *v19;
      *v19 = v23;
      v24 = (struct _RTL_CRITICAL_SECTION *)operator new(0x30uLL);
      v47 = v24;
      if ( v24 )
        v25 = DuckingDescriptorAndId::DuckingDescriptorAndId(v24, L"3", -28.0, 400000LL, 0, 0);
      else
        v25 = 0LL;
      v26 = operator new(0x10uLL);
      v26[1] = v25;
      *v26 = *v23;
      *v23 = v26;
      v27 = (struct _RTL_CRITICAL_SECTION *)operator new(0x30uLL);
      v47 = v27;
      if ( v27 )
        v28 = DuckingDescriptorAndId::DuckingDescriptorAndId(v27, L"1", -6.0, 400000LL, 0, 0);
      else
        v28 = 0LL;
      v29 = operator new(0x10uLL);
      v29[1] = v28;
      *v29 = *v26;
      *v26 = v29;
      v30 = (struct _RTL_CRITICAL_SECTION *)operator new(0x30uLL);
      v47 = v30;
      if ( v30 )
        v31 = DuckingDescriptorAndId::DuckingDescriptorAndId(v30, L"2", -18.0, 400000LL, 0, 0);
      else
        v31 = 0LL;
      v32 = operator new(0x10uLL);
      v32[1] = v31;
      *v32 = *v29;
      *v29 = v32;
      v33 = (struct _RTL_CRITICAL_SECTION *)operator new(0x30uLL);
      v47 = v33;
      if ( v33 )
        v34 = DuckingDescriptorAndId::DuckingDescriptorAndId(v33, L"5", -28.0, 400000LL, 1, 0);
      else
        v34 = 0LL;
      v35 = operator new(0x10uLL);
      v35[1] = v34;
      *v35 = *v32;
      *v32 = v35;
      v36 = (struct _RTL_CRITICAL_SECTION *)operator new(0x30uLL);
      v47 = v36;
      if ( v36 )
        v37 = DuckingDescriptorAndId::DuckingDescriptorAndId(v36, L"6", v21, 400000LL, 0, 1);
      else
        v37 = 0LL;
      v38 = operator new(0x10uLL);
      v38[1] = v37;
      *v38 = *v35;
      *v35 = v38;
      EnterCriticalSection(&stru_180068A08);
      v47 = &stru_180068A08;
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::emplace<unsigned long &,std::unique_ptr<TSSession>>(
        v39,
        v44,
        &v46,
        &v48);
      v40 = *(struct TSSession **)(v44[0] + 24LL);
      *a2 = v40;
      TsSessionConsiderForPrimaryConsoleAudioSession(v40);
      LeaveCriticalSection(&stru_180068A08);
      v41 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      v43 = v41;
      if ( *(_DWORD *)v41 > 4u && (unsigned __int8)tlgKeywordOn(v41, 0x20000LL) )
      {
        LODWORD(v47) = v46;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (_DWORD)v43,
          (unsigned int)&unk_18005B361,
          (_DWORD)v43,
          (_DWORD)v6,
          (__int64)&v47);
      }
      if ( v48 )
        std::default_delete<TSSession>::operator()(v42, v48, v43);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CB,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)refreshed);
      std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v48);
      result = v13;
    }
  }
  catch ( ... )
  {
    LODWORD(v47) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x3FD,
                     (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                     v6);
    return (unsigned int)v47;
  }
  return result;
}
