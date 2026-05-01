/*
 * XREFs of ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180133B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180047EE0 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x180071B34 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_180073210.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CWin32ApplicationView::GetRootSwitchableOwner(
        CWin32ApplicationView *this,
        struct IApplicationView **a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  signed __int32 v6; // eax
  __int64 v7; // rdi
  signed __int32 v8; // edx
  int v9; // eax
  int ViewForHwnd; // ebx
  __int64 v11; // rcx
  __int64 *ViewManager; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v20; // [rsp+78h] [rbp+48h]
  __int64 v21; // [rsp+80h] [rbp+50h] BYREF
  HWND v22; // [rsp+88h] [rbp+58h] BYREF

  *a2 = 0LL;
  v20 = 0LL;
  v4 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v5 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    do
      v6 = *(_DWORD *)(v5 + 36);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 36), v6 + 1, v6) );
    v4 = v5;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v4 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 608LL);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 608LL));
    v20 = v7;
    do
      v8 = *(_DWORD *)(v4 + 36);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 36), v8 - 1, v8) );
    if ( v8 == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( !v20 )
  {
    ViewForHwnd = -2144927145;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CB,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80270257LL);
    return (unsigned int)ViewForHwnd;
  }
  v21 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v20)(
         v20,
         &GUID_9004b409_618f_4892_959c_26fcf2cbafa3,
         &v21);
  ViewForHwnd = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CE,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v9);
    v16 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    return (unsigned int)ViewForHwnd;
  }
  v22 = 0LL;
  ViewForHwnd = (*(__int64 (__fastcall **)(__int64, _QWORD, HWND *))(*(_QWORD *)v21 + 24LL))(
                  v21,
                  *((_QWORD *)this + 27),
                  &v22);
  if ( ViewForHwnd < 0 )
  {
    v11 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    return (unsigned int)ViewForHwnd;
  }
  ViewManager = ApplicationViewManagement::CGlobals::GetViewManager(&v18);
  ViewForHwnd = CApplicationViewManager::GetViewForHwnd((RTL_SRWLOCK *)(*ViewManager + 136), v22, a2);
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(v14);
  }
  if ( ViewForHwnd < 0 )
  {
    v17 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    return (unsigned int)ViewForHwnd;
  }
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return 0LL;
}
