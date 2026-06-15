/*
 * XREFs of ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180047388
 * Callers:
 *     ??$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPolicyManager@@@Z @ 0x180045808 (--$MakeAndInitialize@VCWindowsPolicyManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCWindowsPol.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18003D680 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800413E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180044028 (-TS_ServiceStart@@YAXXZ.c)
 *     ??$Make@VCPlaybackManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaybackManager@@@12@XZ @ 0x180045570 (--$Make@VCPlaybackManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPlaybackManager@@@12@XZ.c)
 *     ??$Make@VCStreamClassPolicyManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCStreamClassPolicyManager@@@12@XZ @ 0x180045620 (--$Make@VCStreamClassPolicyManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCStreamClassPolicy.c)
 *     ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x1800456AC (--$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationM.c)
 *     ??$MakeAndInitialize@VCDuckingManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDuckingManager@@@Z @ 0x18004575C (--$MakeAndInitialize@VCDuckingManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDuckingManager@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180045F14 (--1-$unique_storage@U-$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1-PolicyManager_F.c)
 *     ?reset@?$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180047B90 (-reset@-$com_ptr_t@VCDuckingManager@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x18004AFC8 (-InitializeAudioThreadpool@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowsPolicyManager::RuntimeClassInitialize(CWindowsPolicyManager *this)
{
  int v2; // eax
  int v3; // edi
  const char *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rax
  volatile int *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  DWORD v17; // eax
  int Policy; // eax
  volatile signed __int32 *v19; // [rsp+30h] [rbp-49h] BYREF
  __int64 Recipient[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v21; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v22[4]; // [rsp+50h] [rbp-29h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+60h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = InitializeAudioThreadpool();
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v3;
  }
  g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
  if ( !g_WorkerEventPort )
  {
    v6 = 289LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v5);
  }
  g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)EventWorkerThread, 0LL, 0, 0LL);
  if ( !g_EventWorkerThreadHandle )
  {
    v6 = 292LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v5);
  }
  TS_ServiceStart();
  v19 = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CApplicationManager,CApplicationManager,>(&v19);
  if ( v3 < 0 )
  {
    v7 = 297LL;
    goto LABEL_11;
  }
  v8 = Microsoft::WRL::Details::Make<CStreamClassPolicyManager,>(Recipient);
  v9 = *v8;
  *v8 = 0LL;
  v10 = g_StreamClassPolicyManager;
  g_StreamClassPolicyManager = v9;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = Recipient[0];
  if ( Recipient[0] )
  {
    Recipient[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( !g_StreamClassPolicyManager )
  {
    v12 = 300LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)0x8007000ELL);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
    return 2147942414LL;
  }
  v13 = Microsoft::WRL::Details::Make<CPlaybackManager,>(Recipient);
  v14 = (volatile int *)*v13;
  *v13 = 0LL;
  v15 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v14;
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(
      v15,
      v14);
  v16 = Recipient[0];
  if ( Recipient[0] )
  {
    Recipient[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(
      v16,
      v14);
  }
  if ( !*((_QWORD *)this + 4) )
  {
    v12 = 303LL;
    goto LABEL_25;
  }
  wil::com_ptr_t<CDuckingManager,wil::err_returncode_policy>::reset((char *)this + 40);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CDuckingManager,CDuckingManager,>((CDuckingManager **)this + 5);
  if ( v3 < 0 )
  {
    v7 = 305LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)v3);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v19);
    return (unsigned int)v3;
  }
  g_DuckingManager = (struct CDuckingManager *)*((_QWORD *)this + 5);
  g_ApplicationManager = (CApplicationManager *)v19;
  g_PlaybackManager = (struct CPlaybackManager *)*((_QWORD *)this + 4);
  memset_0(&spc, 0, sizeof(spc));
  if ( GetPwrCapabilities(&spc) )
  {
    if ( spc.spare2[2] )
    {
      Recipient[0] = (__int64)LowPowerEpochNotificationCallback;
      Recipient[1] = 0LL;
      v17 = PowerSettingRegisterNotification(&GUID_LOW_POWER_EPOCH, 2u, Recipient, &g_hLowPowerEpochNotificationHandle);
      if ( v17 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          322LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
          (const char *)v17);
    }
  }
  v22[0] = 1;
  v22[1] = 2;
  v21 = 0LL;
  Policy = PolicyManager_GetPolicy(L"AboveLock", L"ConfigureAudioOnLockScreen", v22, &v21);
  if ( Policy >= 0 )
  {
    if ( *(_DWORD *)(v21 + 8) == 1 )
    {
      if ( *(_DWORD *)(v21 + 16) == 1 )
      {
        *((_DWORD *)this + 13) |= 1u;
      }
      else if ( *(_DWORD *)(v21 + 16) == 2 )
      {
        *((_DWORD *)this + 13) |= 3u;
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      328LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)Policy);
  }
  wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>(&v21);
  return 0LL;
}
