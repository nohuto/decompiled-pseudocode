/*
 * XREFs of ?Prelaunch@CortanaSharedExperienceManager@@UEAAJE@Z @ 0x18036CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Start@$$V@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x180369A58 (--$Start@$$V@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@SA-AV01@XZ.c)
 *     ??1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18036A8BC (--1CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?CortanaExperienceManager_PreLaunch_LaunchRequired@CortanaExperienceManager_PreLaunch@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18036B188 (-CortanaExperienceManager_PreLaunch_LaunchRequired@CortanaExperienceManager_PreLaunch@CortanaPro.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18036E454 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Prelaunch(CortanaSharedExperienceManager *this)
{
  bool v2; // al
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-198h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-190h] BYREF
  __int64 v8; // [rsp+40h] [rbp-178h]
  _BYTE v9[336]; // [rsp+50h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v9);
  LOBYTE(v6) = 0;
  v2 = (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 63) + 72LL))(*((_QWORD *)this + 63), &v6) >= 0
    && (_BYTE)v6;
  if ( v2
    || (CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::CortanaExperienceManager_PreLaunch_LaunchRequired((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v9),
        v8 = 0LL,
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"StartMode=Idle&QuerySource=Hidden&Positioner=desktop",
          0x35u,
          0x34u),
        v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 62) + 72LL))(*((_QWORD *)this + 62), v8),
        v4 = v3,
        v3 >= 0) )
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    v8 = 0LL;
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch::~CortanaExperienceManager_PreLaunch((CortanaProactiveTelemetry::CortanaExperienceManager_PreLaunch *)v9);
  return v4;
}
