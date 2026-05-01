/*
 * XREFs of ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180376DAC
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803750FC (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@VIShellExperienceViewLifetime@Cortana@TwinUI@@@?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIShellExperienceViewLifetime@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x18036F728 (--$As@VIShellExperienceViewLifetime@Cortana@TwinUI@@@-$ComPtr@UIShellExperienceView@Experience@S.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@V_lambda_a18d1ece12643ec5773850bd80e2dbca_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@01@$$QEAV_lambda_a18d1ece12643ec5773850bd80e2dbca_@@@Z @ 0x18036FBA4 (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PE.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@V_lambda_9b1304efb7a7b751b6c8be48389d9538_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@01@$$QEAV_lambda_9b1304efb7a7b751b6c8be48389d9538_@@@Z @ 0x18036FBEC (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Interna_ea_18036FBEC.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x180370928 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Exp_ea_180370928.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CortanaSharedExperienceManager::_CreateShellExperienceView(CortanaSharedExperienceManager *this)
{
  _QWORD *v2; // r14
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  char *v9; // r8
  __int64 v10; // rdi
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-79h] BYREF
  __int128 v13; // [rsp+40h] [rbp-69h] BYREF
  int v14; // [rsp+50h] [rbp-59h] BYREF
  int v15[2]; // [rsp+58h] [rbp-51h] BYREF
  _OWORD v16[2]; // [rsp+60h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-29h] BYREF
  __int64 v18; // [rsp+98h] [rbp-11h]
  HSTRING_HEADER v19; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+Fh]
  HSTRING_HEADER v21; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v14 = 13;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.Cortana",
    0x29u,
    0x28u);
  *(_QWORD *)v15 = v18;
  v20 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v19,
    L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI",
    0x2Au,
    0x29u);
  *(_QWORD *)&v16[0] = v20;
  v22 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v21,
    L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
    0x32u,
    0x31u);
  *(_QWORD *)&v12 = v22;
  *(_QWORD *)&v13 = *((_QWORD *)this + 51);
  v2 = (_QWORD *)((char *)this + 504);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
         (__int64 *)this + 63,
         &v13,
         &v12,
         v16,
         v15,
         &v14);
  if ( v3 < 0 )
  {
    v4 = 804LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceView>::As<TwinUI::Cortana::IShellExperienceViewLifetime>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 63,
         (__int64 *)this + 62);
  if ( v3 < 0 )
  {
    v4 = 806LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v13 = CortanaSharedExperienceManager::_OnViewChangedHandler;
  DWORD2(v13) = 0;
  v12 = v13;
  *(_QWORD *)&v13 = this;
  _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v16, &v13, &v12);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>,_lambda_a18d1ece12643ec5773850bd80e2dbca_>((volatile int **)&v13);
  v6 = v13;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v2 + 152LL))(*v2, v13, (char *)this + 512);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x329,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return v8;
  }
  *(_QWORD *)&v12 = CortanaSharedExperienceManager::_OnViewEventHandler;
  DWORD2(v12) = 0;
  v16[0] = v12;
  *(_QWORD *)&v12 = this;
  _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_(
    (__int64)&hstringHeader,
    &v12,
    v16);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,_lambda_9b1304efb7a7b751b6c8be48389d9538_>((volatile int **)&v12);
  v9 = (char *)this + 520;
  v10 = v12;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v2 + 168LL))(*v2, v12, v9);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return v8;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
