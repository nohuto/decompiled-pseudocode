/*
 * XREFs of ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1800D3E80
 * Callers:
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1800D3CD0 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 *     ?TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x1804719B0 (-TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003D530 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1800948EC (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??1Completer@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ @ 0x180097DD0 (--1Completer@-$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x180098EC4 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D48C8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014E0EC (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8C48 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 *     ??$DeferredRequestExecuted@IAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N0@Z @ 0x18046A274 (--$DeferredRequestExecuted@IAEA_NI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAIAEA_N0@Z.c)
 *     ??$PreviousDeferredRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY08$$CBD@Z @ 0x18046A470 (--$PreviousDeferredRequestCanceled@IIAEAY08$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QE.c)
 *     ??$Start@$$V@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x18046A900 (--$Start@$$V@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@XZ.c)
 *     ??$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEAU?$atomic@_N@std@@AEA_N_N@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@$$QEAI$$QEAPEBGAEAU?$atomic@_N@std@@AEA_N$$QEA_N@Z @ 0x18046A990 (--$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBGAEAU-$atomic@_N@std@@AEA_.c)
 *     ??1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046B34C (--1OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ??1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18046B378 (--1OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x18046EDC8 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 *     ?ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReason@1@@Z @ 0x18046FC90 (-ShellRequestedStateChangeReasonToString@KeyboardHosting@@YAPEBGW4ShellRequestedStateChangeReaso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD **v6; // rcx
  _QWORD *v7; // rax
  void *v9; // rbx
  HANDLE ProcessHeap; // rax
  _DWORD *v11; // r12
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, char *, char *); // rbx
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int InputAppState; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int *v21; // [rsp+20h] [rbp-E0h]
  char v22; // [rsp+40h] [rbp-C0h] BYREF
  char v23; // [rsp+41h] [rbp-BFh] BYREF
  char v24[6]; // [rsp+42h] [rbp-BEh] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  union _RTL_RUN_ONCE *v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+80h] [rbp-80h] BYREF
  const char *v33; // [rsp+88h] [rbp-78h]
  LPVOID lpMem; // [rsp+90h] [rbp-70h]
  char v35; // [rsp+98h] [rbp-68h]
  _QWORD v36[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int *v39; // [rsp+C0h] [rbp-40h]
  _BYTE v40[336]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[336]; // [rsp+220h] [rbp+120h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3B8h] [rbp+2B8h]

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    v30 = &`TouchKeyboardExperienceTelemetryLogger::Instance'::`2'::wrapper;
    Context = &qword_18089C658;
    qword_18089C660 = 0LL;
    byte_18089C668 = 0;
    dword_18089C66C = 0;
    qword_18089C658 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_c916e9e9cdf81665e4682fd57ca742e1_::_lambda_invoker_cdecl_);
    v31 = 0;
    wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::Completer::~Completer((__int64)&v30);
  }
  v35 = 0;
  v32 = 0;
  v33 = "TabTipAdapter::ExecuteDeferredRequest";
  lpMem = 0LL;
  v36[0] = 0LL;
  v36[1] = Context;
  v37 = 0LL;
  v38 = 0;
  v39 = &v32;
  wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v36);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 96LL))(*(_QWORD *)(a1 + 104));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
LABEL_20:
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)&v32);
    return v5;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 424));
  Context = (LPVOID)(a1 + 424);
  if ( *(_BYTE *)(a1 + 404) )
  {
    LODWORD(v25) = a2;
    v11 = (_DWORD *)(a1 + 412);
    v27 = *(_DWORD *)(a1 + 412);
    TouchKeyboardExperienceTelemetryLogger::DeferredRequestExecuted<unsigned int,bool &,unsigned int>(
      &v27,
      a1 + 405,
      &v25);
    fPending = 0;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, WINBOOL *))(**(_QWORD **)(a1 + 128) + 48LL))(
            *(_QWORD *)(a1 + 128),
            *(unsigned int *)(a1 + 412),
            &fPending);
    v5 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x69A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v12);
LABEL_38:
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&Context);
      goto LABEL_20;
    }
    if ( fPending != 1 )
    {
      v27 = *(_DWORD *)(a1 + 408);
      LODWORD(v25) = *v11;
      TouchKeyboardExperienceTelemetryLogger::PreviousDeferredRequestCanceled<unsigned int,unsigned int,char const (&)[9]>(
        &v25,
        &v27);
      IhmNotification::SendKeyboardSetVisible(0LL, 0);
      goto LABEL_6;
    }
    v23 = 0;
    v22 = 0;
    v27 = 0;
    v28 = 0LL;
    v13 = *(_QWORD *)(a1 + 120);
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, char *, char *))(*(_QWORD *)v13 + 304LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    v21 = &v27;
    v15 = v14(v13, (unsigned int)*v11, &v23, &v22);
    v5 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A2,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v15);
LABEL_37:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      goto LABEL_38;
    }
    if ( *(_BYTE *)(a1 + 405) )
    {
      v16 = 10;
      if ( a2 )
      {
        if ( a2 == 1 )
          v16 = 8;
      }
      else
      {
        v16 = 7;
      }
      InputAppState = KeyboardHosting::TabTipAdapter::GetInputAppState(a1);
      v24[0] = 1;
      v30 = (union _RTL_RUN_ONCE *)KeyboardHosting::ShellRequestedStateChangeReasonToString(v16, InputAppState);
      LODWORD(v25) = v18;
      TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::Start<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,unsigned int,unsigned short const *,std::atomic<bool> &,bool &,bool>(
        (unsigned int)v40,
        a1 + 412,
        (unsigned int)&v25,
        (unsigned int)&v30,
        a1 + 390,
        a1 + 392,
        (__int64)v24);
      v25 = v28;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
      v19 = KeyboardHosting::TabTipAdapter::ProcessShowRequestWithStoredData((KeyboardHosting::TabTipAdapter *)a1);
      v5 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6BF,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v19);
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v40);
        goto LABEL_37;
      }
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v40);
      TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::~OnShellRequestedStateChangeActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity *)v40);
    }
    else
    {
      TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::Start<>((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v41);
      v25 = v28;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v25);
      v20 = KeyboardHosting::TabTipAdapter::ProcessShowRequestWithStoredData((KeyboardHosting::TabTipAdapter *)a1);
      v5 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6C5,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v20);
        TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v41);
        goto LABEL_37;
      }
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v41);
      TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity::~OnShellRequestedShowActivity((TouchKeyboardExperienceTelemetryLogger::OnShellRequestedShowActivity *)v41);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  }
LABEL_6:
  *(_WORD *)(a1 + 404) = 0;
  *(_DWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 412) = 11;
  if ( a1 != -424 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 424));
  if ( v38 )
  {
    if ( v38 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3BE,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        (int)v21);
    v38 = 0;
    v6 = (_QWORD **)v36[0];
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      if ( v7 == v36 )
      {
        *v6 = v37;
        break;
      }
      v6 = (_QWORD **)(v7 + 2);
      v36[0] = v7 + 2;
    }
    v36[0] = 0LL;
  }
  if ( v35 )
  {
    v9 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
  }
  return 0LL;
}
