/*
 * XREFs of ?RegisterForEvents@JointResize@@AEAAJXZ @ 0x180539B78
 * Callers:
 *     ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x180213B50 (-SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x180539890 (-OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UHitTestPartNotifyEventArgs@2345@@Foundation@Windows@@V_lambda_8b444ed02ecdf10f52fdbd3aeca37007_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UHitTestPartNotifyEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_8b444ed02ecdf10f52fdbd3aeca37007_@@@Z @ 0x1802BF2F0 (--$Callback@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Inte.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@2345@@Foundation@Windows@@V_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@@Z @ 0x1802BFAF4 (--$Callback@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEven_ea_1802BFAF4.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVArrangedWindowResizeStartedEventArgs@2345@@Foundation@Windows@@V_lambda_6f9895a355050ce8904e7944b3c4ff3c_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVArrangedWindowResizeStartedEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_6f9895a355050ce8904e7944b3c4ff3c_@@@Z @ 0x1805363F0 (--$Callback@U-$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEven_ea_1805363F0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall JointResize::RegisterForEvents(JointResize *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // rcx
  char *v14; // r8
  JointResize *v15; // rsi
  int v16; // eax
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v18[32]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  JointResize *v20; // [rsp+80h] [rbp+30h] BYREF
  JointResize *v21; // [rsp+88h] [rbp+38h] BYREF
  JointResize *v22; // [rsp+90h] [rbp+40h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 19) + 72LL))(
         *((_QWORD *)this + 19),
         ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x385,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  *(_QWORD *)&v17 = JointResize::OnArrangedWindowResizeStarted;
  DWORD2(v17) = 0;
  v20 = this;
  v5 = _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v18, &v20, &v17);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowResizeStartedEventArgs *>,_lambda_6f9895a355050ce8904e7944b3c4ff3c_>(
    (__int64 *)&v20,
    v5);
  v6 = (__int64)v20;
  v7 = (*(__int64 (__fastcall **)(_QWORD, JointResize *, char *))(**((_QWORD **)this + 20) + 64LL))(
         *((_QWORD *)this + 20),
         v20,
         (char *)this + 472);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x389,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v7);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return v8;
  }
  *(_QWORD *)&v17 = JointResize::OnArrangedWindowJointResizeCompleted;
  DWORD2(v17) = 0;
  v21 = this;
  v9 = _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v18, &v21, &v17);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::ArrangedWindowJointResizeCompletedEventArgs>,_lambda_2a327ee47ed75e02b1e43d19de60d1c4_>(
    (__int64 *)&v21,
    v9);
  v10 = (__int64)v21;
  v11 = (*(__int64 (__fastcall **)(_QWORD, JointResize *, char *))(**((_QWORD **)this + 20) + 80LL))(
          *((_QWORD *)this + 20),
          v21,
          (char *)this + 480);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38D,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return v12;
  }
  *(_QWORD *)&v17 = JointResize::OnHitTestPartNotifyEvent;
  DWORD2(v17) = 0;
  v22 = this;
  _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v18, &v22, &v17);
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::HitTestPartNotifyEventArgs>,_lambda_8b444ed02ecdf10f52fdbd3aeca37007_>(&v22);
  v13 = *((_QWORD *)this + 20);
  v14 = (char *)this + 488;
  v15 = v22;
  v16 = (*(__int64 (__fastcall **)(__int64, JointResize *, char *))(*(_QWORD *)v13 + 96LL))(v13, v22, v14);
  v12 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x391,
      (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v16);
    if ( v15 )
      (*(void (__fastcall **)(JointResize *))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return v12;
  }
  if ( v15 )
    (*(void (__fastcall **)(JointResize *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
