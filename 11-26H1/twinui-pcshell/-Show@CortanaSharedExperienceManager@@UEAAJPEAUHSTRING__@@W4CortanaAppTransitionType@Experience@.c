/*
 * XREFs of ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180375330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FB658 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@VICortanaExperienceView@Cortana@TwinUI@@@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x18036F6D8 (--$As@VICortanaExperienceView@Cortana@TwinUI@@@-$ComPtr@UIShellExperiencePositioner@Experience@S.c)
 *     ??$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@CortanaProactiveTelemetry@@SAX$$QEAW4ExperienceViewState@CSingleViewShellExperience@@@Z @ 0x18036FC34 (--$CortanaExperienceManager_CortanaViewState@W4ExperienceViewState@CSingleViewShellExperience@@@.c)
 *     ??$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAAXAEAPEBG@Z @ 0x18036FC8C (--$CortanaExperienceManager_ShowDocked_LaunchArgs@AEAPEBG@CortanaExperienceManager_ShowDocked@Co.c)
 *     ??$Start@PEBGPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x180370C18 (--$Start@PEBGPEBG@CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@SA-AV01@$$QEAPE.c)
 *     ??1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180371A90 (--1CortanaExperienceManager_ShowDocked@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180376D80 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x180377070 (-_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x180377654 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::Show(__int64 a1, HSTRING a2, unsigned int a3)
{
  int v6; // eax
  int v7; // ecx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **); // rbx
  int v14; // eax
  CortanaSharedExperienceManager *v15; // rcx
  int v16; // eax
  HSTRING v17; // rbx
  const WCHAR *StringRawBuffer; // rdi
  CortanaSharedExperienceManager *v19; // rcx
  int CortanaEntryPointAndArgs; // eax
  DWORD v21; // edx
  int v22; // edi
  __int64 v23; // rdx
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  HSTRING v26; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v27; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v28; // [rsp+48h] [rbp-B8h] BYREF
  UINT32 length; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  PCWSTR v31; // [rsp+60h] [rbp-A0h] BYREF
  const WCHAR *v32; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v33[42]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  LODWORD(string) = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 496) + 64LL))(*(_QWORD *)(a1 + 496), &string);
  v7 = 0;
  if ( v6 >= 0 )
    v7 = (int)string;
  LODWORD(string) = v7;
  CortanaProactiveTelemetry::CortanaExperienceManager_CortanaViewState<enum CSingleViewShellExperience::ExperienceViewState>((int *)&string);
  CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer((CortanaSharedExperienceManager *)a1);
  v8 = *(__int64 **)(a1 + 424);
  v9 = *v8;
  if ( !*(_BYTE *)(a1 + 537) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HSTRING))(v9 + 24))(v8, *(_QWORD *)(a1 + 504), a2);
    if ( v10 < 0 )
    {
      v11 = 435LL;
      goto LABEL_6;
    }
LABEL_9:
    v28 = 0LL;
    v12 = *(_QWORD *)(a1 + 424);
    v13 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **))(*(_QWORD *)v12 + 8LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    v14 = v13(v12, &v28);
    v10 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_22:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
      return (unsigned int)v10;
    }
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(v15, a2, v28, &string);
    v10 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BA,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      WindowsDeleteString(string);
      goto LABEL_22;
    }
    length = 0;
    v17 = string;
    StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
    v32 = StringRawBuffer;
    v26 = 0LL;
    WindowsDeleteString(0LL);
    v27 = 0LL;
    WindowsDeleteString(v26);
    CortanaEntryPointAndArgs = CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
                                 v19,
                                 StringRawBuffer,
                                 length,
                                 &v26,
                                 &v27);
    if ( CortanaEntryPointAndArgs < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C1,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)CortanaEntryPointAndArgs);
    string = (HSTRING)WindowsGetStringRawBuffer(v27, 0LL);
    v31 = WindowsGetStringRawBuffer(v26, 0LL);
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::Start<unsigned short const *,unsigned short const *>(
      (CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *)v33,
      &v31,
      (const unsigned __int16 **)&string);
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::CortanaExperienceManager_ShowDocked_LaunchArgs<unsigned short const * &>(
      (__int64)v33,
      &v32);
    v30 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::As<TwinUI::Cortana::ICortanaExperienceView>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v28,
                &v30) < 0 )
    {
      v22 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, _QWORD, HSTRING, _QWORD))(*(_QWORD *)v28 + 80LL))(
              v28,
              *(_QWORD *)(a1 + 504),
              v17,
              0LL);
      if ( v22 < 0 )
      {
        v23 = 461LL;
        goto LABEL_18;
      }
    }
    else
    {
      v22 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v30 + 80LL))(v30, v17, a3);
      if ( v22 < 0 )
      {
        v23 = 457LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked(v33);
        WindowsDeleteString(v27);
        v27 = 0LL;
        WindowsDeleteString(v26);
        v26 = 0LL;
        WindowsDeleteString(v17);
        v10 = v22;
        goto LABEL_22;
      }
    }
    wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v33,
      v21);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::~CortanaExperienceManager_ShowDocked(v33);
    WindowsDeleteString(v27);
    v27 = 0LL;
    WindowsDeleteString(v26);
    v26 = 0LL;
    WindowsDeleteString(v17);
    v10 = 0;
    goto LABEL_22;
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v9 + 32))(v8, 1LL, *(_QWORD *)(a1 + 504));
  if ( v10 >= 0 )
    goto LABEL_9;
  v11 = 431LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
  return (unsigned int)v10;
}
