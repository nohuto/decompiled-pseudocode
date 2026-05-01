/*
 * XREFs of ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18007AB20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180039390 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x180053564 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007C0D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_18007C0D0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CWin32ApplicationView::GetRootSwitchableOwner(
        CWin32ApplicationView *this,
        struct IApplicationView **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  signed __int32 v7; // eax
  __int64 v8; // rbx
  signed __int32 v9; // edx
  int v10; // eax
  int ViewForHwnd; // edi
  __int64 v12; // rcx
  __int64 *ViewManager; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v21; // [rsp+68h] [rbp+38h] BYREF
  __int64 v22; // [rsp+70h] [rbp+40h]
  HWND v23; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v22 = 0LL;
  v5 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v6 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    do
      v7 = *(_DWORD *)(v6 + 36);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 36), v7 + 1, v7) );
    v5 = v6;
    v4 = v22;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v5 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 608LL);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 608LL));
    v22 = v8;
    do
      v9 = *(_DWORD *)(v5 + 36);
    while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 36), v9 - 1, v9) );
    if ( v9 == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 72LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v4 = v22;
  }
  if ( v4 )
  {
    v21 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v4)(
            v4,
            &GUID_9004b409_618f_4892_959c_26fcf2cbafa3,
            &v21);
    ViewForHwnd = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CE,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v10);
      v17 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      goto LABEL_19;
    }
    v23 = 0LL;
    ViewForHwnd = (*(__int64 (__fastcall **)(__int64, _QWORD, HWND *))(*(_QWORD *)v21 + 24LL))(
                    v21,
                    *((_QWORD *)this + 27),
                    &v23);
    if ( ViewForHwnd < 0 )
    {
      v12 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
LABEL_19:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      return (unsigned int)ViewForHwnd;
    }
    ViewManager = ApplicationViewManagement::CGlobals::GetViewManager(&v19);
    ViewForHwnd = CApplicationViewManager::GetViewForHwnd((RTL_SRWLOCK *)(*ViewManager + 136), v23, a2);
    v15 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(v15);
    }
    if ( ViewForHwnd < 0 )
    {
      v18 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      return (unsigned int)ViewForHwnd;
    }
    v16 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CB,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80270257LL);
    return 2150040151LL;
  }
}
