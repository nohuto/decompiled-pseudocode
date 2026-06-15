/*
 * XREFs of ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150
 * Callers:
 *     PbmSetSmtcSubscriptionState @ 0x180006AA0 (PbmSetSmtcSubscriptionState.c)
 *     ?RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180008610 (-RpcRegisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_.c)
 *     ?RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z @ 0x1800087D0 (-RpcUnregisterAudioStateMonitor@CWindowsPolicyManager@@UEAAJPEAXPEA_K@Z.c)
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x180008A20 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180008E40 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180009040 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     PbmGetSoundLevel @ 0x180024C00 (PbmGetSoundLevel.c)
 *     PbmUnregisterAppManagerNotification @ 0x18002B000 (PbmUnregisterAppManagerNotification.c)
 *     PbmRegisterAppManagerNotification @ 0x18002B070 (PbmRegisterAppManagerNotification.c)
 *     PbmCastingAppStateChanged @ 0x180041AE0 (PbmCastingAppStateChanged.c)
 *     PbmIsPlaying @ 0x180041C70 (PbmIsPlaying.c)
 *     PbmPlayToStreamStateChanged @ 0x180041D60 (PbmPlayToStreamStateChanged.c)
 *     PbmRegisterAppClosureNotification @ 0x180041E70 (PbmRegisterAppClosureNotification.c)
 *     PbmRegisterPlaybackManagerNotifications @ 0x180041EE0 (PbmRegisterPlaybackManagerNotifications.c)
 *     PbmSetScreenReaderState @ 0x180041FD0 (PbmSetScreenReaderState.c)
 *     PbmUnregisterAppClosureNotification @ 0x180042130 (PbmUnregisterAppClosureNotification.c)
 *     PbmUnregisterPlaybackManagerNotifications @ 0x1800421E0 (PbmUnregisterPlaybackManagerNotifications.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180001FB0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??0CProcess@@QEAA@XZ @ 0x180006CBC (--0CProcess@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18000734C (-RuntimeClassInitialize@CProcess@@QEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800079B4 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset @ 0x180008950 (wil--details--lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___--reset.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180008978 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800089A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18000B090 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18000B220 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000B24C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18000B504 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     GetAssignedAccessTypeForUser @ 0x18000B648 (GetAssignedAccessTypeForUser.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z @ 0x18000CA50 (-GetTokenInformation@@YAKPEAXPEAPEAGPEAK12@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800158F0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019884 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAXXZ @ 0x18001A7B8 (-GetFreeNode@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAXXZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020B2C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18002D678 (-ReadBackgroundMediaRecordingCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002FD90 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?RtlFreeSid@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18003B418 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-RtlFreeSid@@YAPEAX0@ZU-$integral_cons.c)
 *     ?ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18003C88C (-ReadBackgroundAudioPlaybackCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x18003C914 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18003CA40 (-ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18003CAB0 (-ReadVoipCallCapability@CApplicationManager@@QEAAJPEAXPEAH@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18003D080 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003D660 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CApplicationManager::RpcGetProcess(CApplicationManager *this, void *a2, struct CProcess **a3)
{
  struct CProcess **v3; // rsi
  CApplicationManager *v5; // r13
  int v6; // r12d
  RPC_STATUS v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  signed __int32 *v11; // rdx
  signed __int32 i; // eax
  struct _RTL_CRITICAL_SECTION *v14; // r14
  unsigned int v15; // ebx
  _QWORD *v16; // rcx
  signed __int32 *v17; // rdx
  signed __int32 j; // eax
  unsigned int v19; // eax
  HANDLE CurrentThread; // rax
  const char *v21; // r9
  unsigned int v22; // eax
  char *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  _WORD *v26; // rsi
  void *v27; // r14
  void *v28; // rbx
  int InformationProcess; // eax
  _QWORD *v30; // rax
  _QWORD *v31; // rdi
  int v32; // edx
  int v33; // ecx
  int v34; // edi
  unsigned __int16 **v35; // r8
  _WORD *v36; // rdi
  _WORD *v37; // rax
  void *v38; // rcx
  signed int v39; // eax
  bool v40; // bl
  LONG v41; // eax
  bool v42; // sf
  HLOCAL v43; // rdi
  CApplicationManager *v44; // rcx
  const char *v45; // r9
  PSID *v46; // rbx
  const char *v47; // r9
  unsigned int v48; // r12d
  unsigned int LastError; // ebx
  signed int v50; // eax
  bool v51; // sf
  signed int v52; // eax
  bool v53; // sf
  struct CProcess *v54; // rcx
  CProcess *v55; // rax
  struct CProcess *v56; // rbx
  int v57; // eax
  volatile int *v58; // rdx
  int v59; // eax
  RTL_SRWLOCK *v60; // rbx
  PUCHAR *v61; // rcx
  PUCHAR v62; // rax
  volatile int *v63; // rdx
  __int64 v64; // rax
  HANDLE v65; // rdi
  const char *v66; // r9
  unsigned int v67; // ebx
  HANDLE v68; // rax
  const char *v69; // r9
  DWORD v70; // ebx
  int v71; // eax
  int v72; // eax
  unsigned int PackageClaims; // eax
  CApplicationManager *v74; // rcx
  unsigned int v75; // eax
  CApplicationManager *v76; // rcx
  int v77; // edi
  __int64 v78; // rdx
  CApplicationManager *v79; // rcx
  CApplicationManager *v80; // rcx
  HLOCAL v81; // rdi
  DWORD v82; // ebx
  const char *v83; // r9
  int v84; // eax
  const char *v85; // r9
  ATL::CAtlException *v86; // rbx
  __int64 v87; // [rsp+0h] [rbp-338h] BYREF
  PDWORD ReturnLength; // [rsp+20h] [rbp-318h]
  unsigned __int16 *v89; // [rsp+28h] [rbp-310h]
  HANDLE TargetHandle; // [rsp+30h] [rbp-308h]
  unsigned __int16 *v91; // [rsp+38h] [rbp-300h]
  DWORD v92; // [rsp+90h] [rbp-2A8h]
  char v93; // [rsp+B0h] [rbp-288h] BYREF
  char v94; // [rsp+B1h] [rbp-287h]
  struct CProcess *v95; // [rsp+B8h] [rbp-280h] BYREF
  bool v96; // [rsp+C0h] [rbp-278h]
  void *TokenHandle; // [rsp+C8h] [rbp-270h] BYREF
  HLOCAL v98; // [rsp+D0h] [rbp-268h] BYREF
  LPVOID pv; // [rsp+D8h] [rbp-260h] BYREF
  int v100; // [rsp+E0h] [rbp-258h] BYREF
  HANDLE hObject; // [rsp+E8h] [rbp-250h] BYREF
  LPVOID v102; // [rsp+F0h] [rbp-248h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+F8h] [rbp-240h] BYREF
  HLOCAL v104; // [rsp+100h] [rbp-238h] BYREF
  char *v105; // [rsp+108h] [rbp-230h] BYREF
  char *v106; // [rsp+110h] [rbp-228h] BYREF
  ULONG ProcessInformationLength[2]; // [rsp+118h] [rbp-220h] BYREF
  _WORD *v108; // [rsp+120h] [rbp-218h] BYREF
  unsigned int Pid; // [rsp+128h] [rbp-210h] BYREF
  int v110; // [rsp+12Ch] [rbp-20Ch] BYREF
  HLOCAL hMem; // [rsp+130h] [rbp-208h] BYREF
  unsigned int v112; // [rsp+138h] [rbp-200h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+140h] [rbp-1F8h]
  UINT32 packageRelativeApplicationIdLength; // [rsp+148h] [rbp-1F0h] BYREF
  PCWSTR applicationUserModelId; // [rsp+150h] [rbp-1E8h] BYREF
  PUCHAR SidSubAuthorityCount; // [rsp+158h] [rbp-1E0h]
  int TokenInformation; // [rsp+160h] [rbp-1D8h] BYREF
  int v118; // [rsp+164h] [rbp-1D4h] BYREF
  int v119; // [rsp+168h] [rbp-1D0h] BYREF
  unsigned int v120; // [rsp+16Ch] [rbp-1CCh] BYREF
  int v121; // [rsp+170h] [rbp-1C8h] BYREF
  unsigned int v122; // [rsp+174h] [rbp-1C4h]
  PSRWLOCK v123; // [rsp+178h] [rbp-1C0h]
  DWORD v124; // [rsp+180h] [rbp-1B8h] BYREF
  PSRWLOCK SRWLock; // [rsp+188h] [rbp-1B0h]
  HANDLE v126; // [rsp+190h] [rbp-1A8h] BYREF
  struct CProcess **v127; // [rsp+198h] [rbp-1A0h]
  void *v128; // [rsp+1A0h] [rbp-198h]
  CApplicationManager *v129; // [rsp+1A8h] [rbp-190h]
  struct CProcess **v130; // [rsp+1B0h] [rbp-188h]
  CProcess *v131; // [rsp+1B8h] [rbp-180h]
  ATL::CAtlException *v132[3]; // [rsp+1C0h] [rbp-178h] BYREF
  char v133; // [rsp+1D8h] [rbp-160h]
  WCHAR packageFamilyName[2]; // [rsp+1E0h] [rbp-158h] BYREF
  char v135[140]; // [rsp+1E4h] [rbp-154h] BYREF
  WCHAR packageRelativeApplicationId[2]; // [rsp+270h] [rbp-C8h] BYREF
  char v137[140]; // [rsp+274h] [rbp-C4h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+0h]

  v3 = a3;
  v127 = a3;
  v130 = a3;
  v5 = g_ApplicationManager;
  v129 = g_ApplicationManager;
  v6 = 0;
  *a3 = 0LL;
  Pid = 0;
  v7 = I_RpcBindingInqLocalClientPID(a2, &Pid);
  v8 = v7;
  if ( v7 > 0 )
    v8 = (unsigned __int16)v7 | 0x80070000;
  if ( (v8 & 0x80000000) != 0 )
  {
    if ( v8 == -2147023171 )
      return 2147944125LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30D,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)v8,
      (int)ReturnLength);
    return v8;
  }
  v9 = Pid;
  v95 = 0LL;
  SRWLock = (PSRWLOCK)((char *)v5 + 120);
  AcquireSRWLockShared((PSRWLOCK)v5 + 15);
  v10 = (_QWORD *)*((_QWORD *)v5 + 16);
  while ( v10 )
  {
    v11 = (signed __int32 *)v10[2];
    v10 = (_QWORD *)*v10;
    if ( !v11[104] && v11[40] == v9 )
    {
      for ( i = v11[5]; i != 0x7FFFFFFF; i = v11[5] )
      {
        if ( i == _InterlockedCompareExchange(v11 + 5, i + 1, i) )
          break;
      }
      v95 = (struct CProcess *)v11;
      break;
    }
  }
  if ( v5 != (CApplicationManager *)-120LL )
    ReleaseSRWLockShared((PSRWLOCK)v5 + 15);
  if ( v95 )
    goto LABEL_14;
  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v5 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 32));
  v105 = (char *)v5 + 32;
  v15 = Pid;
  v95 = 0LL;
  AcquireSRWLockShared((PSRWLOCK)v5 + 15);
  v16 = (_QWORD *)*((_QWORD *)v5 + 16);
  while ( v16 )
  {
    v17 = (signed __int32 *)v16[2];
    v16 = (_QWORD *)*v16;
    if ( !v17[104] && v17[40] == v15 )
    {
      for ( j = v17[5]; j != 0x7FFFFFFF; j = v17[5] )
      {
        if ( j == _InterlockedCompareExchange(v17 + 5, j + 1, j) )
          break;
      }
      v95 = (struct CProcess *)v17;
      break;
    }
  }
  if ( v5 != (CApplicationManager *)-120LL )
    ReleaseSRWLockShared((PSRWLOCK)v5 + 15);
  if ( v95 )
    goto LABEL_55;
  v19 = RpcImpersonateClient(a2);
  if ( v19 )
  {
    v67 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x31E,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            (const char *)v19);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v105);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v95);
    return v67;
  }
  v94 = 1;
  TokenHandle = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x322,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v21);
    goto LABEL_108;
  }
  v112 = 0;
  v120 = 0;
  v98 = 0LL;
  v104 = 0LL;
  v22 = GetTokenInformation(TokenHandle, (unsigned __int16 **)&v104, &v112, (unsigned __int16 **)&v98, &v120);
  if ( v22 )
  {
    LastError = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0x328,
                  (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  (const char *)v22);
    goto LABEL_107;
  }
  v23 = (char *)OpenProcess(0x101000u, 0, Pid);
  v106 = v23;
  if ( !v23 && GetLastError() == 5 )
  {
    v68 = OpenProcess(0x100400u, 0, Pid);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v106,
      v68);
    v23 = v106;
    if ( (unsigned __int64)(v106 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x338,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        v69);
  }
  LODWORD(v123) = 0;
  TokenInformation = 0;
  v124 = 0;
  if ( GetTokenInformation(TokenHandle, TokenUIAccess, &TokenInformation, 4u, &v124) )
    LODWORD(v123) = TokenInformation != 0;
  v126 = (HANDLE)-1LL;
  v26 = 0LL;
  v108 = 0LL;
  v27 = 0LL;
  v102 = 0LL;
  ProcessInformationLength[0] = 0;
  hMem = 0LL;
  v28 = 0LL;
  pv = 0LL;
  applicationUserModelId = 0LL;
  if ( v23 )
  {
    InformationProcess = NtQueryInformationProcess(v23, ProcessImageFileName, 0LL, 0, ProcessInformationLength);
    if ( (int)(InformationProcess + 0x80000000) >= 0 && InformationProcess != -1073741820 )
    {
LABEL_62:
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(InformationProcess);
      v39 = GetLastError();
      v34 = v39;
      if ( v39 > 0 )
        v34 = (unsigned __int16)v39 | 0x80070000;
LABEL_64:
      CoTaskMemFree(v28);
      CoTaskMemFree(0LL);
      LocalFree(hMem);
      if ( v34 >= 0 )
        goto LABEL_65;
LABEL_44:
      AudPolicyLogError("GetProcessModuleNameAndAppId", 349, v34);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34E,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v34,
        (int)ReturnLength);
      if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v23);
      if ( v98 )
        LocalFree(v98);
      if ( v104 )
        LocalFree(v104);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v95);
      return (unsigned int)v34;
    }
    v30 = LocalAlloc(0x40u, ProcessInformationLength[0]);
    v31 = v30;
    hMem = v30;
    if ( !v30 )
    {
      v34 = -2147024882;
      CoTaskMemFree(0LL);
      v38 = 0LL;
      goto LABEL_43;
    }
    InformationProcess = NtQueryInformationProcess(
                           v23,
                           ProcessImageFileName,
                           v30,
                           ProcessInformationLength[0],
                           ProcessInformationLength);
    if ( InformationProcess < 0 )
      goto LABEL_62;
    v34 = _AllocStringWorker<CTCoAllocPolicy>(
            v33,
            v32,
            v31[1],
            (unsigned __int64)*((unsigned __int16 *)v31 + 1) >> 1,
            (_DWORD)ReturnLength,
            (__int64)&pv);
    if ( v34 < 0 )
    {
LABEL_250:
      v28 = pv;
      goto LABEL_64;
    }
    if ( pv )
      goto LABEL_39;
  }
  v34 = _AllocString<CTCoAllocPolicy>(v25, v24, byte_180056CEC, &pv);
  if ( v34 < 0 )
    goto LABEL_250;
LABEL_39:
  CallerIdentity::GetProcessAppId((CallerIdentity *)v23, &applicationUserModelId, v35);
  v36 = applicationUserModelId;
  if ( !applicationUserModelId )
  {
    SidSubAuthorityCount = 0LL;
    if ( !is_mul_ok(1uLL, 2uLL) )
    {
      v34 = -2147024362;
      CoTaskMemFree(pv);
      v38 = 0LL;
      goto LABEL_43;
    }
    v37 = CoTaskMemAlloc(2uLL);
    v102 = v37;
    if ( !v37 )
    {
      v34 = -2147024882;
      CoTaskMemFree(pv);
      v38 = v102;
LABEL_43:
      CoTaskMemFree(v38);
      LocalFree(hMem);
      goto LABEL_44;
    }
    *v37 = 0;
    v36 = v102;
  }
  v27 = pv;
  v102 = pv;
  v26 = v36;
  v108 = v36;
  CoTaskMemFree(0LL);
  CoTaskMemFree(0LL);
  LocalFree(hMem);
LABEL_65:
  v100 = 0;
  hObject = 0LL;
  pv = 0LL;
  hMem = 0LL;
  if ( (int)AppModelPolicy_GetPolicy_Internal(-6LL, 1LL, &v100, &hMem, &pv) < 0
    || (LODWORD(hMem) = 1, (unsigned int)(v100 - 65537) > 1) )
  {
    LODWORD(hMem) = 0;
  }
  v100 = 0;
  pv = 0LL;
  applicationUserModelId = 0LL;
  v40 = (int)AppModelPolicy_GetPolicy_Internal(-6LL, 14LL, &v100, &applicationUserModelId, &pv) >= 0 && v100 == 917505;
  v96 = v40;
  LODWORD(applicationUserModelId) = 0;
  v110 = 0;
  v100 = 0;
  v119 = 0;
  v121 = 0;
  LOBYTE(v122) = 0;
  if ( *v26 )
  {
    v65 = hObject;
    if ( hObject && hObject != (HANDLE)-1LL )
    {
      v70 = GetLastError();
      CloseHandle(v65);
      SetLastError(v70);
      v40 = v96;
    }
    hObject = 0LL;
    if ( !OpenProcessToken(v23, 8u, &hObject) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x36A,
                    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                    v66);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      CoTaskMemFree(v26);
      if ( v27 )
        CoTaskMemFree(v27);
      if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v23);
      if ( v98 )
        LocalFree(v98);
      if ( v104 )
        LocalFree(v104);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      RpcRevertToSelf();
      goto LABEL_195;
    }
    v71 = RtlQueryTokenHostIdAsUlong64(hObject, &v126);
    if ( v71 < 0 )
    {
      v72 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x36B,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              (const char *)(unsigned int)v71,
              (int)ReturnLength);
LABEL_258:
      LastError = v72;
      goto LABEL_106;
    }
  }
  if ( v40 && v112 )
  {
    pv = 0LL;
    v91 = 0LL;
    TargetHandle = &pv;
    v89 = 0LL;
    ReturnLength = 0LL;
    PackageClaims = RtlQueryPackageClaims(-6LL, 0LL, 0LL, 0LL);
    if ( PackageClaims )
    {
      LastError = wil::details::in1diag3::Return_Win32(
                    retaddr,
                    (void *)0x372,
                    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                    (const char *)PackageClaims);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v108);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v102);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v106);
      goto LABEL_107;
    }
    v75 = (unsigned int)pv >> 4;
    LOBYTE(v75) = ((unsigned __int8)pv & 0x10) != 0;
    v122 = v75;
    v77 = CApplicationManager::ReadVoipCallCapability(v74, (void *)0xFFFFFFFFFFFFFFFALL, (int *)&applicationUserModelId);
    if ( v77 < 0 )
    {
      v78 = 887LL;
LABEL_264:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v78,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v77,
        (int)ReturnLength);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v108);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v102);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v106);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v98);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v104);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
      wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset((__int64)&v93);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v105);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v95);
      return (unsigned int)v77;
    }
    v77 = CApplicationManager::ReadBackgroundAudioPlaybackCapability(v76, (void *)0xFFFFFFFFFFFFFFFALL, &v110, &v100);
    if ( v77 < 0 )
    {
      v78 = 892LL;
      goto LABEL_264;
    }
    v77 = CApplicationManager::ReadBackgroundMediaRecordingCapability(v79, (void *)0xFFFFFFFFFFFFFFFALL, &v119);
    if ( v77 < 0 )
    {
      v78 = 896LL;
      goto LABEL_264;
    }
    v77 = CApplicationManager::ReadUserSigninSupportCapability(v80, (void *)0xFFFFFFFFFFFFFFFALL, &v121);
    if ( v77 < 0 )
    {
      v78 = 900LL;
      goto LABEL_264;
    }
  }
  if ( !v98 )
  {
    *(_DWORD *)packageFamilyName = 0;
    memset_0(v135, 0, 0x7EuLL);
    *(_DWORD *)packageRelativeApplicationId = 0;
    memset_0(v137, 0, 0x80uLL);
    packageFamilyNameLength = 65;
    packageRelativeApplicationIdLength = 66;
    v41 = ParseApplicationUserModelId(
            v26,
            &packageFamilyNameLength,
            packageFamilyName,
            &packageRelativeApplicationIdLength,
            packageRelativeApplicationId);
    v42 = v41 < 0;
    if ( v41 > 0 )
      v42 = 1;
    if ( !v42 )
    {
      pv = 0LL;
      if ( (int)AppContainerDeriveSidFromMoniker(packageFamilyName, &pv) >= 0 )
      {
        v81 = v98;
        if ( v98 )
        {
          v82 = GetLastError();
          LocalFree(v81);
          SetLastError(v82);
          v40 = v96;
        }
        v98 = 0LL;
        if ( !ConvertSidToStringSidW(pv, (LPWSTR *)&v98) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x393,
                        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                        v83);
          wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&pv);
          goto LABEL_106;
        }
      }
      wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * RtlFreeSid(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&pv);
    }
  }
  v94 = 0;
  RpcRevertToSelf();
  ProcessInformationLength[0] = 0;
  v43 = v104;
  packageRelativeApplicationIdLength = (int)GetAssignedAccessTypeForUser((unsigned __int16 *)v104) >= 0
                                    && ProcessInformationLength[0] == 1;
  if ( !v40 || v110 )
  {
    v110 = 1;
  }
  else
  {
    v84 = CApplicationManager::ReadBackgroundAudioTaskCapability(v44, hObject, &v110, &v100);
    LastError = v84;
    if ( v84 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A9,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v84,
        (int)ReturnLength);
      goto LABEL_106;
    }
  }
  v118 = 0;
  if ( v112 && !(unsigned int)CheckTokenCapability(TokenHandle, *((_QWORD *)v5 + 2), &v118) )
  {
    v72 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x3B5,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            v85);
    goto LABEL_258;
  }
  ProcessInformationLength[0] = 0;
  GetTokenInformation(TokenHandle, TokenIntegrityLevel, 0LL, 0, ProcessInformationLength);
  if ( GetLastError() != 122 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3BD,
                  (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
                  v45);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    CoTaskMemFree(v26);
    if ( v27 )
      CoTaskMemFree(v27);
    if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v23);
    if ( v98 )
      LocalFree(v98);
    if ( v43 )
      LocalFree(v43);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
LABEL_195:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_109;
  }
  v46 = (PSID *)LocalAlloc(0x40u, ProcessInformationLength[0]);
  pv = v46;
  if ( !v46 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C0,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)0x8007000ELL,
      (int)ReturnLength);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pv);
LABEL_106:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v108);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v102);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v106);
LABEL_107:
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v98);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v104);
LABEL_108:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset((__int64)&v93);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v105);
LABEL_109:
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v95);
    return LastError;
  }
  if ( !GetTokenInformation(
          TokenHandle,
          TokenIntegrityLevel,
          v46,
          ProcessInformationLength[0],
          ProcessInformationLength) )
  {
    v48 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x3C2,
            (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
            v47);
    LocalFree(v46);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    CoTaskMemFree(v26);
    if ( v27 )
      CoTaskMemFree(v27);
    if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v23);
    if ( v98 )
      LocalFree(v98);
    if ( v43 )
      LocalFree(v43);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( v95 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v95);
    return v48;
  }
  SidSubAuthorityCount = GetSidSubAuthorityCount(*v46);
  v50 = GetLastError();
  packageFamilyNameLength = v50;
  v51 = v50 < 0;
  if ( v50 > 0 )
  {
    v50 = (unsigned __int16)v50 | 0x80070000;
    packageFamilyNameLength = v50;
    v51 = v50 < 0;
  }
  if ( v51 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C7,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)v50,
      (int)ReturnLength);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pv);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hObject);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v108);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v102);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v106);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v98);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v104);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&TokenHandle);
    wil::details::lambda_call__lambda_b81de5b61ed7f5026c21787e1275f92e___::reset((__int64)&v93);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v105);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v95);
    return packageFamilyNameLength;
  }
  if ( SidSubAuthorityCount && *SidSubAuthorityCount )
  {
    LODWORD(pv) = *GetSidSubAuthority(*v46, (unsigned __int8)(*SidSubAuthorityCount - 1));
    v52 = GetLastError();
    packageFamilyNameLength = v52;
    v53 = v52 < 0;
    if ( v52 > 0 )
    {
      v52 = (unsigned __int16)v52 | 0x80070000;
      packageFamilyNameLength = v52;
      v53 = v52 < 0;
    }
    if ( v53 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CD,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v52,
        (int)ReturnLength);
      LocalFree(v46);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      CoTaskMemFree(v26);
      if ( v27 )
        CoTaskMemFree(v27);
      if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v23);
      if ( v98 )
        LocalFree(v98);
      if ( v43 )
        LocalFree(v43);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v95);
      return packageFamilyNameLength;
    }
    else
    {
      LODWORD(pv) = (unsigned int)pv < 0x2000;
      LocalFree(v46);
      *(_QWORD *)ProcessInformationLength = v98;
      packageFamilyNameLength = v112 != 0;
      v54 = v95;
      v95 = 0LL;
      if ( v54 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v54);
      v95 = 0LL;
      v55 = (CProcess *)operator new[](0x318uLL, (const struct std::nothrow_t *)&std::nothrow);
      SidSubAuthorityCount = (PUCHAR)v55;
      v131 = v55;
      if ( v55 )
      {
        v128 = v55;
        v56 = CProcess::CProcess(v55);
        v128 = v56;
        SidSubAuthorityCount = 0LL;
        LOBYTE(v92) = v122;
        v57 = CProcess::RuntimeClassInitialize(
                v56,
                v23,
                Pid,
                v120,
                (const unsigned __int16 *)v27,
                v26,
                (char *)v126,
                (const unsigned __int16 *)v43,
                packageFamilyNameLength,
                *(const unsigned __int16 **)ProcessInformationLength,
                (int)hMem,
                v96,
                (int)applicationUserModelId,
                v110,
                v100,
                v119,
                v121,
                packageRelativeApplicationIdLength,
                v92,
                v118,
                (int)pv);
        v100 = v57;
        if ( v57 >= 0 )
        {
          if ( v56 )
            Microsoft::WRL::Details::SafeUnknownIncrementReference((struct CProcess *)((char *)v56 + 20), v58);
          v95 = v56;
          if ( v56 )
          {
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v56);
            v56 = v95;
          }
          *((_DWORD *)v56 + 115) = (_DWORD)v123;
          v59 = CApplicationManager::Register(v5, v95);
          LastError = v59;
          if ( v59 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3EA,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              (const char *)(unsigned int)v59,
              (int)ReturnLength);
            goto LABEL_106;
          }
          v132[1] = v5;
          v132[2] = (ATL::CAtlException *)&v95;
          v133 = 1;
          v60 = SRWLock;
          v123 = SRWLock;
          AcquireSRWLockExclusive(SRWLock);
          try
          {
            v128 = v60;
            SRWLock = (PSRWLOCK)v95;
            SidSubAuthorityCount = (PUCHAR)*((_QWORD *)v5 + 16);
            ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetFreeNode();
          }
          catch ( ATL::CAtlException *v132 )
          {
            v63 = (volatile int *)&v87;
            v86 = v132[0];
            if ( *(_DWORD *)v132[0] == -1073741571 )
              _o__resetstkoflw();
            LODWORD(pv) = *(_DWORD *)v86;
            v43 = v104;
            v23 = v106;
            v27 = v102;
            v26 = v108;
            v6 = (int)pv;
            v60 = v123;
            v5 = v129;
            v127 = v130;
            goto LABEL_149;
          }
          v61 = (PUCHAR *)*((_QWORD *)v5 + 20);
          v62 = *v61;
          v63 = (volatile int *)SRWLock;
          v61[2] = (PUCHAR)SRWLock;
          *((_QWORD *)v5 + 20) = v62;
          v61[1] = 0LL;
          *v61 = SidSubAuthorityCount;
          ++*((_QWORD *)v5 + 18);
          v64 = *((_QWORD *)v5 + 16);
          if ( v64 )
            *(_QWORD *)(v64 + 8) = v61;
          else
            *((_QWORD *)v5 + 17) = v61;
          *((_QWORD *)v5 + 16) = v61;
LABEL_149:
          if ( v60 )
            ReleaseSRWLockExclusive(v60);
          if ( v6 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3F3,
              (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
              (const char *)(unsigned int)v6,
              (int)ReturnLength);
            CApplicationManager::Unregister(v5, v95);
            if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
              CloseHandle(hObject);
            CoTaskMemFree(v26);
            if ( v27 )
              CoTaskMemFree(v27);
            if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              CloseHandle(v23);
            if ( v98 )
              LocalFree(v98);
            if ( v43 )
              LocalFree(v43);
            if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
              CloseHandle(TokenHandle);
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v95);
            return (unsigned int)v6;
          }
          Microsoft::WRL::Details::SafeUnknownIncrementReference((struct CProcess *)((char *)v95 + 20), v63);
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          CoTaskMemFree(v26);
          if ( v27 )
            CoTaskMemFree(v27);
          if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v23);
          if ( v98 )
            LocalFree(v98);
          if ( v43 )
            LocalFree(v43);
          if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(TokenHandle);
          v3 = v127;
          v14 = lpCriticalSection;
LABEL_55:
          if ( v14 )
            LeaveCriticalSection(v14);
LABEL_14:
          *v3 = v95;
          return 0LL;
        }
        if ( v56 )
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v56);
          v57 = v100;
        }
      }
      else
      {
        v57 = -2147024882;
        v100 = -2147024882;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E6,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
        (const char *)(unsigned int)v57,
        (int)ReturnLength);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      CoTaskMemFree(v26);
      if ( v27 )
        CoTaskMemFree(v27);
      if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v23);
      if ( v98 )
        LocalFree(v98);
      if ( v43 )
        LocalFree(v43);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(TokenHandle);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v95);
      return (unsigned int)v100;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C8,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)0x8000FFFFLL,
      (int)ReturnLength);
    LocalFree(v46);
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
    CoTaskMemFree(v26);
    if ( v27 )
      CoTaskMemFree(v27);
    if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v23);
    if ( v98 )
      LocalFree(v98);
    if ( v43 )
      LocalFree(v43);
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v95);
    return 2147549183LL;
  }
}
