/*
 * XREFs of ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024A340
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180005B60 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1801451A4 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     _anonymous_namespace_::StringifyApplicationState @ 0x180200F08 (_anonymous_namespace_--StringifyApplicationState.c)
 *     ?GetInputAppState@TouchKeyboardExperienceManager@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x1802879F4 (-GetInputAppState@TouchKeyboardExperienceManager@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180289270 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802C6EA4 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$InconsistentAppStateDetected@AEAW4PLM_APPLICATION_STATE@@AEAW41@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4PLM_APPLICATION_STATE@@0@Z @ 0x180464A14 (--$InconsistentAppStateDetected@AEAW4PLM_APPLICATION_STATE@@AEAW41@@TouchKeyboardExperienceTelem.c)
 *     ??$InputAppActivationOmitted@_N_N_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N00@Z @ 0x180464AA0 (--$InputAppActivationOmitted@_N_N_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N00@Z.c)
 *     ??$InputAppResumeRequested@AEA_NPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEAPEBG@Z @ 0x180464BC8 (--$InputAppResumeRequested@AEA_NPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEAPEBG@Z.c)
 *     ??$SuspendedInputAppRestart@AEAII_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAI$$QEA_N@Z @ 0x180465A48 (--$SuspendedInputAppRestart@AEAII_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAI$$QEA_N.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18046C558 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18047373C (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::EnsureInputAppIsActivated(TouchKeyboardExperienceManager *this)
{
  TouchKeyboardExperienceManager *v2; // r14
  const char *v3; // r9
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rsi
  int *v8; // rdi
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  unsigned __int16 **v12; // rdx
  int v13; // eax
  int ModalExperienceAsync; // ebx
  int InputAppState; // edi
  const unsigned __int16 *v17; // rdx
  __int64 v18; // rdx
  char v19; // [rsp+40h] [rbp-19h] BYREF
  char v20; // [rsp+41h] [rbp-18h] BYREF
  _BYTE v21[6]; // [rsp+42h] [rbp-17h] BYREF
  const char *v22; // [rsp+48h] [rbp-11h] BYREF
  RTL_SRWLOCK *v23; // [rsp+50h] [rbp-9h] BYREF
  std::_Ref_count_base *v24[2]; // [rsp+58h] [rbp-1h] BYREF
  unsigned __int16 *v25[3]; // [rsp+68h] [rbp+Fh] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = (TouchKeyboardExperienceManager *)((char *)this - 200);
  TouchKeyboardExperienceManager::GetCurrentInputAppId((char *)this - 200, v25);
  wil::AcquireSRWLockExclusive(&v23, (RTL_SRWLOCK *)this + 47);
  if ( *((_BYTE *)this + 813) )
  {
    v4 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      v19 = *((_BYTE *)this + 368);
      v20 = *((_BYTE *)this + 812);
      v22 = "EnsureInputAppIsActivated omitted in connected standby";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (__int64)v4,
        (__int64)&unk_1808083BD,
        v5,
        v6,
        &v22);
    }
    goto LABEL_41;
  }
  v7 = (char *)this + 368;
  if ( *((_BYTE *)this + 812) || *v7 )
  {
    v20 = *((_BYTE *)this + 813);
    v19 = *v7;
    v21[0] = *((_BYTE *)this + 812);
    TouchKeyboardExperienceTelemetryLogger::InputAppActivationOmitted<bool,bool,bool>(v21, &v19, &v20);
LABEL_41:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
    std::wstring::_Tidy_deallocate(v25);
    return 0LL;
  }
  v8 = (int *)((char *)this + 364);
  v9 = *((_DWORD *)this + 91);
  if ( !v9 || (v10 = v9 - 1) == 0 || (unsigned int)(v10 - 3) <= 1 )
  {
    if ( !*((_QWORD *)this + 22) )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x6F5,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        v3);
    LODWORD(v22) = 0;
    v11 = *((_QWORD *)this + 22);
    if ( v11 )
    {
      v12 = v25;
      if ( v26 > 7 )
        v12 = (unsigned __int16 **)v25[0];
      if ( (*(int (__fastcall **)(__int64, unsigned __int16 **, const char **))(*(_QWORD *)v11 + 56LL))(v11, v12, &v22) >= 0
        && (_DWORD)v22 != *v8 )
      {
        TouchKeyboardExperienceTelemetryLogger::InconsistentAppStateDetected<enum PLM_APPLICATION_STATE &,enum PLM_APPLICATION_STATE &>(
          (char *)this + 364,
          &v22);
        *v8 = (int)v22;
      }
    }
  }
  if ( (unsigned int)*v8 < 2 || (unsigned int)(*v8 - 4) < 2 )
    goto LABEL_41;
  *v7 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
  std::wstring::_Tidy_deallocate(v25);
  *(_OWORD *)v24 = 0LL;
  v19 = 0;
  if ( (int)TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)v2, *((_DWORD *)this + 103), v24) < 0
    || *((_BYTE *)v24[0] + 32) )
  {
    wil::AcquireSRWLockExclusive(&v23, (RTL_SRWLOCK *)this + 47);
    *v7 = 0;
    InputAppState = *v8;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
    TouchKeyboardExperienceManager::GetCurrentInputAppId(v2, v25);
    if ( (InputAppState == 3 || InputAppState == 2) && v25[2] )
    {
      v20 = *((_BYTE *)this + 813);
      LODWORD(v22) = *((_DWORD *)this + 201);
      TouchKeyboardExperienceTelemetryLogger::SuspendedInputAppRestart<unsigned int &,unsigned int,bool>(
        (char *)this + 412,
        &v22,
        &v20);
      v17 = (const unsigned __int16 *)v25;
      if ( v26 > 7 )
        v17 = v25[0];
      ModalExperienceAsync = TouchKeyboardExperienceManager::TerminateInputApp(v2, v17);
      if ( ModalExperienceAsync < 0 )
      {
        v18 = 1838LL;
LABEL_34:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)ModalExperienceAsync);
        std::wstring::_Tidy_deallocate(v25);
        goto LABEL_23;
      }
      ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync(v2);
      if ( ModalExperienceAsync < 0 )
      {
        v18 = 1839LL;
        goto LABEL_34;
      }
    }
    std::wstring::_Tidy_deallocate(v25);
LABEL_38:
    v23 = (RTL_SRWLOCK *)anonymous_namespace_::StringifyApplicationState(InputAppState);
    TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested<bool &,unsigned short const *>(&v19, &v23);
    if ( v24[1] )
      std::_Ref_count_base::_Decref(v24[1]);
    return 0LL;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v24[0] + 344LL))(*(_QWORD *)v24[0], 3LL);
  ModalExperienceAsync = v13;
  if ( v13 >= 0 )
  {
    v19 = 1;
    InputAppState = TouchKeyboardExperienceManager::GetInputAppState(v2);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x719,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_23:
  if ( v24[1] )
    std::_Ref_count_base::_Decref(v24[1]);
  return (unsigned int)ModalExperienceAsync;
}
