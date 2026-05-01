/*
 * XREFs of ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x180377070
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180375330 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Start@$$V@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x180370B30 (--$Start@$$V@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@SA-.c)
 *     ??1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1803719E0 (--1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180375BE8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_GetLaunchArgsSubstring@SearchAppExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z @ 0x180377314 (-_GetLaunchArgsSubstring@SearchAppExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
        CortanaSharedExperienceManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HSTRING *a4,
        HSTRING *string)
{
  const WCHAR *v8; // rcx
  UINT32 v9; // ebx
  HRESULT v10; // eax
  HRESULT v11; // eax
  unsigned int v12; // ebx
  PCNZWCH sourceString; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 length[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[42]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v16);
  v8 = L"Unknown";
  v9 = 7;
  sourceString = L"Unknown";
  *(_QWORD *)length = 7LL;
  if ( a2 )
  {
    SearchAppExperienceManager::_GetLaunchArgsSubstring(
      a2,
      L"Positioner=",
      a3,
      &sourceString,
      (unsigned __int64 *)length);
    v10 = WindowsCreateString(sourceString, length[0], string);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x39A,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    SearchAppExperienceManager::_GetLaunchArgsSubstring(
      a2,
      L"StartMode=",
      a3,
      &sourceString,
      (unsigned __int64 *)length);
    if ( sourceString && wcsstr(sourceString, L"AppTransition") )
    {
      v8 = L"StartButton";
      v9 = 11;
    }
    else
    {
      SearchAppExperienceManager::_GetLaunchArgsSubstring(
        a2,
        L"QuerySource=",
        a3,
        &sourceString,
        (unsigned __int64 *)length);
      v8 = sourceString;
      if ( sourceString )
        v9 = length[0];
      else
        v8 = L"Unknown";
    }
  }
  v11 = WindowsCreateString(v8, v9, a4);
  v12 = v11;
  if ( v11 >= 0 )
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B0,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::~CortanaExperienceManager_GetCortanaEntryPointAndArgs((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v16);
  return v12;
}
