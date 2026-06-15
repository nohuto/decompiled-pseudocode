/*
 * XREFs of ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28
 * Callers:
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x1800199E4 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEBG_KKH@Z @ 0x180019B84 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEBG_KKH@Z.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x18003C1E4 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18003C384 (-OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 *     ?OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18003C718 (-OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800125C0 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180012930 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180014910 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180014990 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasPlayToStreams@CApplication@@QEAAHXZ @ 0x180014F08 (-HasPlayToStreams@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180015490 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180015510 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180016050 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800161F4 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18001689C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18002328C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ??$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@00@Z @ 0x180027C78 (--$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePoli.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18002DAB8 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18002DB40 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18002EAA4 (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     __std_find_trivial_8 @ 0x18002F400 (__std_find_trivial_8.c)
 *     ?GrantExemptionForBCMStartupLatency@@YAHXZ @ 0x18003BBAC (-GrantExemptionForBCMStartupLatency@@YAHXZ.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180044144 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::OnApplicationInteractivityChanged(
        CApplicationManager *this,
        struct CApplication *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const struct _tlgProvider_t *v5; // rax
  int v6; // r9d
  int v7; // r14d
  unsigned int v8; // r12d
  int v9; // r15d
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  int v12; // r15d
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  int HasPlayToStreams; // eax
  struct _RTL_CRITICAL_SECTION *v16; // rbx
  __int64 v17; // rcx
  struct TSSession *v18; // r14
  __int64 trivial_8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  BOOL v21; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+B0h] [rbp+58h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+B8h] [rbp+60h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v5 > 4u
    && (*((_DWORD *)v5 + 4) & 0x8000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x8000LL) == *((_QWORD *)v5 + 3) )
  {
    v21 = *((_DWORD *)a2 + 52) != 0;
    LODWORD(v22) = *((_DWORD *)a2 + 53);
    v23 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)a2 + 87);
    v24 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)a2 + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v5,
      (unsigned int)&unk_18005A9AD,
      (_DWORD)v5,
      v6,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21);
  }
  if ( *((_DWORD *)a2 + 52) )
  {
    *((_QWORD *)a2 + 86) = 0LL;
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
      CApplication::CleanupBCMStartupLatencyGracePeriod(a2);
    *(_QWORD *)((char *)a2 + 620) = 0LL;
    *(_QWORD *)((char *)a2 + 628) = 0LL;
    *(_QWORD *)((char *)a2 + 636) = 0LL;
    v7 = 1;
    *((_DWORD *)a2 + 161) = 1;
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, *((_DWORD *)a2 + 53), 1);
    goto LABEL_10;
  }
  v7 = 1;
  *((_DWORD *)a2 + 172) = 1;
  *((_DWORD *)a2 + 173) = 1;
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2) )
    goto LABEL_8;
  if ( CApplication::IsUnrestrictedBackgroundAudioCapable(a2)
    || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
  {
    if ( CApplication::IsUnrestrictedBackgroundAudioCapable(a2) )
    {
      if ( !CApplication::GetTotalActiveRenderStreamCount(a2) )
        CApplication::BeginBCMStartupLatencyGracePeriod(a2);
      *((_DWORD *)a2 + 173) = 0;
    }
    if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(a2) )
    {
      if ( !CApplication::GetTotalActiveCaptureStreamCount(a2) )
        CApplication::BeginBCMStartupLatencyGracePeriod(a2);
      *((_DWORD *)a2 + 172) = 0;
    }
    goto LABEL_9;
  }
  if ( dword_180056608[(int)CApplication::Category((__int64)a2)] )
  {
    if ( !dword_180056608[(int)CApplication::RawCategory(a2)] && *((_DWORD *)a2 + 54) )
      CApplication::RestrictAudioPlaybackToPrimaryCategories(a2);
    goto LABEL_8;
  }
  if ( !(unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
  {
    if ( *((_DWORD *)a2 + 155) != 1 )
    {
      *((_DWORD *)a2 + 155) = 1;
      *((_QWORD *)a2 + 78) = 1LL;
      *((_QWORD *)a2 + 79) = 1LL;
      *((_DWORD *)a2 + 160) = 1;
      *((_DWORD *)a2 + 161) = 1;
    }
    goto LABEL_9;
  }
  if ( !(unsigned int)CApplication::HasBackgroundAudioTask(a2)
    && !CApplication::GetTotalActiveCaptureStreamCount(a2)
    && (unsigned int)GrantExemptionForBCMStartupLatency() )
  {
    CApplication::BeginBCMStartupLatencyGracePeriod(a2);
LABEL_8:
    *((_DWORD *)a2 + 173) = 0;
  }
LABEL_9:
  CApplicationManager::ApplyPBMPolicy(this, a2, 0xD1u, 1);
LABEL_10:
  EnterCriticalSection(v4);
  v24 = v4;
  v8 = *((_DWORD *)a2 + 53);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  v9 = 0;
  v10 = (_QWORD *)*((_QWORD *)a2 + 9);
  while ( v10 )
  {
    v11 = v10[2];
    v10 = (_QWORD *)*v10;
    if ( !*(_DWORD *)(v11 + 416) && *(_DWORD *)(v11 + 496) )
    {
      v9 = 1;
      break;
    }
  }
  if ( a2 != (struct CApplication *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
  if ( !v9 || !*((_DWORD *)a2 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
    v12 = 0;
    v13 = (_QWORD *)*((_QWORD *)a2 + 9);
    while ( v13 )
    {
      v14 = v13[2];
      v13 = (_QWORD *)*v13;
      if ( !*(_DWORD *)(v14 + 416) && *(_DWORD *)(v14 + 500) )
      {
        v12 = 1;
        break;
      }
    }
    if ( a2 != (struct CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
    if ( !v12 || !(unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
      v7 = 0;
  }
  HasPlayToStreams = CApplication::HasPlayToStreams(a2);
  if ( !v7 || HasPlayToStreams )
  {
    v16 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v21 = v8;
    EnterCriticalSection(&stru_180068A08);
    v23 = &stru_180068A08;
    std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
      v17,
      &v22,
      &v21);
    if ( v22 == qword_180068A38 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x530,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x80070490LL);
    }
    else
    {
      v18 = *(struct TSSession **)(v22 + 24);
      LeaveCriticalSection(&stru_180068A08);
      trivial_8 = _std_find_trivial_8(*((_QWORD *)v18 + 6), *((_QWORD *)v18 + 7), a2);
      if ( trivial_8 != *((_QWORD *)v18 + 7) )
      {
        std::_Copy_memmove<IAudioAppVolumePolicyChange * *,IAudioAppVolumePolicyChange * *>((void *)(trivial_8 + 8));
        *((_QWORD *)v18 + 7) -= 8LL;
        TsSessionSendAppManagerNotification(v18);
      }
    }
    if ( v16 )
      LeaveCriticalSection(v16);
  }
  else
  {
    TsSessionIdAddActiveMediaApp(v8, a2);
  }
  if ( v4 )
  {
    LeaveCriticalSection(v4);
    LeaveCriticalSection(v4);
  }
}
