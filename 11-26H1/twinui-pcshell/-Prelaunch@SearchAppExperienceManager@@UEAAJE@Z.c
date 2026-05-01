/*
 * XREFs of ?Prelaunch@SearchAppExperienceManager@@UEAAJE@Z @ 0x1803A36B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Start@$$V@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x180370BA0 (--$Start@$$V@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@SA-AV01@XZ.c)
 *     ??1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180371A64 (--1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?CortanaExperienceManager_PreLaunch_LaunchRequired@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180372318 (-CortanaExperienceManager_PreLaunch_LaunchRequired@CortanaExperienceManager_PreLaunch@CortanaPro.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180375CBC (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::Prelaunch(SearchAppExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-198h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-190h] BYREF
  __int64 v7; // [rsp+40h] [rbp-178h]
  _QWORD v8[42]; // [rsp+50h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v8);
  LOBYTE(v5) = 0;
  if ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 64) + 72LL))(*((_QWORD *)this + 64), &v5) >= 0
    && (_BYTE)v5
    || (CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::CortanaExperienceManager_PreLaunch_LaunchRequired((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v8),
        v7 = 0LL,
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"StartMode=Idle&QuerySource=Hidden&Positioner=desktop",
          0x35u,
          0x34u),
        v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 63) + 72LL))(*((_QWORD *)this + 63), v7),
        v3 = v2,
        v2 >= 0) )
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(v8);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    v7 = 0LL;
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::~CortanaExperienceManager_PreLaunch((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v8);
  return v3;
}
