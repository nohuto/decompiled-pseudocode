/*
 * XREFs of ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180255AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180005ACC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180097CA8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802939F0 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802CFC70 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$InconsistentAppStateDetected@AEAW4PLM_APPLICATION_STATE@@AEAW41@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4PLM_APPLICATION_STATE@@0@Z @ 0x1804586D4 (--$InconsistentAppStateDetected@AEAW4PLM_APPLICATION_STATE@@AEAW41@@TouchKeyboardExperienceTelem.c)
 *     ??$InputAppActivationOmitted@_N_N_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N00@Z @ 0x180458760 (--$InputAppActivationOmitted@_N_N_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_N00@Z.c)
 *     ??$InputAppResumeRequested@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z @ 0x180458888 (--$InputAppResumeRequested@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z.c)
 *     ??$SuspendedInputAppRestart@AEAII_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAI$$QEA_N@Z @ 0x180459830 (--$SuspendedInputAppRestart@AEAII_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI$$QEAI$$QEA_N.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18045FFC4 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1804677A4 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  _DWORD *v8; // rdi
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  unsigned __int16 **v12; // rdx
  int v13; // eax
  int ModalExperienceAsync; // ebx
  const unsigned __int16 *v16; // rdx
  __int64 v17; // rdx
  char v18; // [rsp+40h] [rbp-19h] BYREF
  char v19; // [rsp+41h] [rbp-18h] BYREF
  _BYTE v20[6]; // [rsp+42h] [rbp-17h] BYREF
  const char *v21; // [rsp+48h] [rbp-11h] BYREF
  std::_Ref_count_base *v22[2]; // [rsp+50h] [rbp-9h] BYREF
  RTL_SRWLOCK *v23; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int16 *v24[3]; // [rsp+68h] [rbp+Fh] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = (TouchKeyboardExperienceManager *)((char *)this - 200);
  TouchKeyboardExperienceManager::GetCurrentInputAppId((char *)this - 200, v24);
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)v22, (RTL_SRWLOCK *)this + 47);
  if ( *((_BYTE *)this + 813) )
  {
    v4 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v4 > 5u )
    {
      v18 = *((_BYTE *)this + 368);
      v19 = *((_BYTE *)this + 812);
      v21 = "EnsureInputAppIsActivated omitted in connected standby";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        (__int64)v4,
        (__int64)&unk_1807D1C21,
        v5,
        v6,
        &v21);
    }
    goto LABEL_40;
  }
  v7 = (char *)this + 368;
  if ( *((_BYTE *)this + 812) || *v7 )
  {
    v19 = *((_BYTE *)this + 813);
    v18 = *v7;
    v20[0] = *((_BYTE *)this + 812);
    TouchKeyboardExperienceTelemetryLogger::InputAppActivationOmitted<bool,bool,bool>(v20, &v18, &v19);
LABEL_40:
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)v22);
    std::wstring::_Tidy_deallocate((void **)v24);
    return 0LL;
  }
  v8 = (_DWORD *)((char *)this + 364);
  v9 = *((_DWORD *)this + 91);
  if ( !v9 || (v10 = v9 - 1) == 0 || (unsigned int)(v10 - 3) <= 1 )
  {
    if ( !*((_QWORD *)this + 22) )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x6E2,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        v3);
    LODWORD(v21) = 0;
    v11 = *((_QWORD *)this + 22);
    if ( v11 )
    {
      v12 = v24;
      if ( v25 > 7 )
        v12 = (unsigned __int16 **)v24[0];
      if ( (*(int (__fastcall **)(__int64, unsigned __int16 **, const char **))(*(_QWORD *)v11 + 56LL))(v11, v12, &v21) >= 0
        && (_DWORD)v21 != *v8 )
      {
        TouchKeyboardExperienceTelemetryLogger::InconsistentAppStateDetected<enum PLM_APPLICATION_STATE &,enum PLM_APPLICATION_STATE &>(
          (char *)this + 364,
          &v21);
        *v8 = (_DWORD)v21;
      }
    }
  }
  if ( *v8 < 2u || (unsigned int)(*v8 - 4) < 2 )
    goto LABEL_40;
  *v7 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)v22);
  std::wstring::_Tidy_deallocate((void **)v24);
  *(_OWORD *)v22 = 0LL;
  v18 = 0;
  if ( (int)TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)v2, *((_DWORD *)this + 103), v22) < 0
    || *((_BYTE *)v22[0] + 32) )
  {
    wil::AcquireSRWLockExclusive(&v23, (RTL_SRWLOCK *)this + 47);
    *v7 = 0;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v23);
    TouchKeyboardExperienceManager::GetCurrentInputAppId(v2, v24);
    if ( *v8 == 3 && v24[2] )
    {
      v19 = *((_BYTE *)this + 813);
      LODWORD(v21) = *((_DWORD *)this + 201);
      TouchKeyboardExperienceTelemetryLogger::SuspendedInputAppRestart<unsigned int &,unsigned int,bool>(
        (char *)this + 412,
        &v21,
        &v19);
      v16 = (const unsigned __int16 *)v24;
      if ( v25 > 7 )
        v16 = v24[0];
      ModalExperienceAsync = TouchKeyboardExperienceManager::TerminateInputApp(v2, v16);
      if ( ModalExperienceAsync < 0 )
      {
        v17 = 1816LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)ModalExperienceAsync);
        std::wstring::_Tidy_deallocate((void **)v24);
        goto LABEL_23;
      }
      ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync(v2);
      if ( ModalExperienceAsync < 0 )
      {
        v17 = 1817LL;
        goto LABEL_33;
      }
    }
    std::wstring::_Tidy_deallocate((void **)v24);
LABEL_37:
    TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested<bool &>(&v18);
    if ( v22[1] )
      std::_Ref_count_base::_Decref(v22[1]);
    return 0LL;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v22[0] + 344LL))(*(_QWORD *)v22[0], 3LL);
  ModalExperienceAsync = v13;
  if ( v13 >= 0 )
  {
    v18 = 1;
    goto LABEL_37;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x705,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_23:
  if ( v22[1] )
    std::_Ref_count_base::_Decref(v22[1]);
  return (unsigned int)ModalExperienceAsync;
}
