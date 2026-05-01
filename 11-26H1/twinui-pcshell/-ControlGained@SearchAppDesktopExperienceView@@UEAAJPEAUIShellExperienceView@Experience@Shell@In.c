/*
 * XREFs of ?ControlGained@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1803C82F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@V_lambda_a18d1ece12643ec5773850bd80e2dbca_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@01@$$QEAV_lambda_a18d1ece12643ec5773850bd80e2dbca_@@@Z @ 0x18036FBA4 (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PE.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@V_lambda_9b1304efb7a7b751b6c8be48389d9538_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@01@$$QEAV_lambda_9b1304efb7a7b751b6c8be48389d9538_@@@Z @ 0x18036FBEC (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Interna_ea_18036FBEC.c)
 *     ?EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803C89F4 (-EnsureInputHostManager@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CB0BC (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x1803CC5FC (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::ControlGained(__int64 a1, __int64 a2)
{
  __int64 *v4; // r14
  volatile int *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  volatile int *v9; // rdi
  int v10; // eax
  unsigned int v11; // r14d
  int v12; // eax
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v15[32]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  volatile int *v17; // [rsp+70h] [rbp+20h] BYREF

  v4 = (__int64 *)(a1 + 144);
  if ( *(_QWORD *)(a1 + 144) )
    return 0LL;
  SearchAppDesktopExperienceView::SetExplicitDismissEnabled((SearchAppDesktopExperienceView *)a1, 0);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v4, a2);
  *(_QWORD *)&v14 = SearchAppDesktopExperienceView::OnViewChanged;
  DWORD2(v14) = 0;
  v17 = (volatile int *)a1;
  _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v15, &v17, &v14);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>,_lambda_a18d1ece12643ec5773850bd80e2dbca_>(&v17);
  v5 = v17;
  v6 = (*(__int64 (__fastcall **)(__int64, volatile int *, __int64))(*(_QWORD *)*v4 + 152LL))(*v4, v17, a1 + 152);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_QWORD *)&v14 = SearchAppDesktopExperienceView::OnViewEvent;
    DWORD2(v14) = 0;
    v17 = (volatile int *)a1;
    _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v15, &v17, &v14);
    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,_lambda_9b1304efb7a7b751b6c8be48389d9538_>(&v17);
    v9 = v17;
    v10 = (*(__int64 (__fastcall **)(__int64, volatile int *, __int64))(*(_QWORD *)*v4 + 168LL))(*v4, v17, a1 + 160);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x189,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v10);
      if ( v9 )
        (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v5 )
        (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v5 + 16LL))(v5);
      return v11;
    }
    SearchAppDesktopExperienceView::OnViewPropertiesChanging((SearchAppDesktopExperienceView *)a1);
    v12 = SearchAppDesktopExperienceView::EnsureInputHostManager((SearchAppDesktopExperienceView *)a1);
    v11 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18F,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v12);
      if ( v9 )
        (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v5 )
        (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v5 + 16LL))(v5);
      return v11;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 104) + 24LL))(
            *(_QWORD *)(a1 + 104),
            (a1 + 48) & -(__int64)(a1 != 0),
            a1 + 220);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x190,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v13);
    if ( v9 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v5 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v5 + 16LL))(v5);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x187,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v6);
  if ( v5 )
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
