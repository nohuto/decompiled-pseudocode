/*
 * XREFs of ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18039B480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C4B84 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x1803688E0 (--$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x180368938 (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     ??$Start@PEBGPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x180369AD0 (--$Start@PEBGPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@SA-AV01@$$QEAPE.c)
 *     ??1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18036A8E8 (--1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18039BA9C (-_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18039BD8C (-_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18039C194 (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // ebx
  SearchAppExperienceManager *v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  HSTRING v14; // rbx
  const WCHAR *StringRawBuffer; // rdi
  SearchAppExperienceManager *v16; // rcx
  int CortanaEntryPointAndArgs; // eax
  int v18; // eax
  DWORD v19; // edx
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v21; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v22; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 length; // [rsp+48h] [rbp-B8h] BYREF
  PCWSTR v24; // [rsp+50h] [rbp-B0h] BYREF
  const WCHAR *v25; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v26[42]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  LODWORD(string) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 504) + 64LL))(*(_QWORD *)(a1 + 504), &string);
  v7 = 0;
  if ( v6 >= 0 )
    v7 = (int)string;
  LODWORD(string) = v7;
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaViewState<enum CSingleViewShellExperience::ExperienceViewState>((int *)&string);
  SearchAppExperienceManager::_CancelDeferredSuspensionTimer((SearchAppExperienceManager *)a1);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 424) + 72LL))(
         *(_QWORD *)(a1 + 424),
         *(_QWORD *)(a1 + 512),
         1LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v12 = SearchAppExperienceManager::_NormalizeAndAddPositionerArgs(v11, a2, &string);
    v13 = v12;
    v14 = string;
    if ( v12 >= 0 )
    {
      length = 0;
      StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
      v25 = StringRawBuffer;
      v21 = 0LL;
      WindowsDeleteString(0LL);
      v22 = 0LL;
      WindowsDeleteString(v21);
      CortanaEntryPointAndArgs = SearchAppExperienceManager::_GetCortanaEntryPointAndArgs(
                                   v16,
                                   StringRawBuffer,
                                   length,
                                   &v21,
                                   &v22);
      if ( CortanaEntryPointAndArgs < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1AF,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)CortanaEntryPointAndArgs);
      string = (HSTRING)WindowsGetStringRawBuffer(v22, 0LL);
      v24 = WindowsGetStringRawBuffer(v21, 0LL);
      CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::Start<unsigned short const *,unsigned short const *>(
        (CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v26,
        &v24,
        (const unsigned __int16 **)&string);
      CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
        (__int64)v26,
        &v25);
      v18 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**(_QWORD **)(a1 + 432) + 80LL))(
              *(_QWORD *)(a1 + 432),
              v14,
              a3);
      v13 = v18;
      if ( v18 >= 0 )
      {
        wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v26,
          v19);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked(v26);
        WindowsDeleteString(v22);
        v22 = 0LL;
        WindowsDeleteString(v21);
        v21 = 0LL;
        v13 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B4,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v18);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked(v26);
        WindowsDeleteString(v22);
        v22 = 0LL;
        WindowsDeleteString(v21);
        v21 = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
    }
    WindowsDeleteString(v14);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
