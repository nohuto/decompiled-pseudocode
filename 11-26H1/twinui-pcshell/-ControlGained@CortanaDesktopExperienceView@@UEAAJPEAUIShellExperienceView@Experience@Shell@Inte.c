/*
 * XREFs of ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1803D1E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@V_lambda_a18d1ece12643ec5773850bd80e2dbca_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@01@$$QEAV_lambda_a18d1ece12643ec5773850bd80e2dbca_@@@Z @ 0x18036FBA4 (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PE.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@V_lambda_9b1304efb7a7b751b6c8be48389d9538_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@01@$$QEAV_lambda_9b1304efb7a7b751b6c8be48389d9538_@@@Z @ 0x18036FBEC (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Interna_ea_18036FBEC.c)
 *     ?EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D25E4 (-EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D55CC (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1803D6EC8 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ControlGained(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r14
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

  CortanaDesktopExperienceView::SetExplicitDimissEnabled((CortanaDesktopExperienceView *)a1, 0);
  v4 = (_QWORD *)(a1 + 168);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 168), a2);
  *(_QWORD *)&v14 = CortanaDesktopExperienceView::OnViewChanged;
  DWORD2(v14) = 0;
  v17 = (volatile int *)a1;
  _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v15, &v17, &v14);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>,_lambda_a18d1ece12643ec5773850bd80e2dbca_>(&v17);
  v5 = v17;
  v6 = (*(__int64 (__fastcall **)(_QWORD, volatile int *, __int64))(*(_QWORD *)*v4 + 152LL))(*v4, v17, a1 + 176);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v6);
    if ( v5 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v5 + 16LL))(v5);
    return v7;
  }
  *(_QWORD *)&v14 = CortanaDesktopExperienceView::OnViewEvent;
  DWORD2(v14) = 0;
  v17 = (volatile int *)a1;
  _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v15, &v17, &v14);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,_lambda_9b1304efb7a7b751b6c8be48389d9538_>(&v17);
  v9 = v17;
  v10 = (*(__int64 (__fastcall **)(_QWORD, volatile int *, __int64))(*(_QWORD *)*v4 + 168LL))(*v4, v17, a1 + 184);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v10);
    if ( v9 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v5 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v5 + 16LL))(v5);
    return v11;
  }
  CortanaDesktopExperienceView::OnViewPropertiesChanging((CortanaDesktopExperienceView *)a1);
  v12 = CortanaDesktopExperienceView::EnsureInputHostManager((CortanaDesktopExperienceView *)a1);
  v11 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BC,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v12);
    if ( v9 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v5 )
      (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v5 + 16LL))(v5);
    return v11;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 128) + 24LL))(
          *(_QWORD *)(a1 + 128),
          (a1 + 56) & -(__int64)(a1 != 0),
          a1 + 264);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BD,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v13);
  if ( v9 )
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v5 )
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
