/*
 * XREFs of ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x1801B26C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800444D0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x180071B34 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_180073210.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::SizeConstraintsQueried(
        CWin32ApplicationView *this,
        unsigned int a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // edi
  LONG v5; // ebx
  char *v7; // r14
  RTL_SRWLOCK *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *ViewManager; // rax
  __int64 v13; // rcx
  int v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+2Ch] [rbp-24h]
  int v16; // [rsp+34h] [rbp-1Ch]
  _QWORD v17[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int64 v19; // [rsp+80h] [rbp+30h]
  struct tagSIZE v21; // [rsp+98h] [rbp+48h] BYREF

  v21 = a4;
  cx = a4.cx;
  v5 = a3.cx;
  v7 = (char *)this - 160;
  v8 = (RTL_SRWLOCK *)((char *)this - 112);
  AcquireSRWLockExclusive(v8);
  (*(void (__fastcall **)(_QWORD, int *, _QWORD))(**((_QWORD **)v7 + 28) + 24LL))(*((_QWORD *)v7 + 28), &v14, a2);
  v19 = __PAIR64__(v21.cy, cx);
  v21 = a3;
  v17[0] = a3;
  v17[1] = v19;
  if ( v14 != v5 || v15 != __PAIR64__(cx, a3.cy) || v16 != HIDWORD(v19) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**((_QWORD **)v7 + 28) + 32LL))(
           *((_QWORD *)v7 + 28),
           a2,
           v17);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x298,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v9);
      if ( v8 )
        ReleaseSRWLockExclusive(v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39A,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)v10);
      return v10;
    }
    ViewManager = ApplicationViewManagement::CGlobals::GetViewManager((__int64 *)&v21);
    CApplicationViewManager::RaiseApplicationViewChanged(
      *ViewManager + 136,
      (void (__fastcall ***)(_QWORD, GUID *, __int64 **))v7,
      0xFu,
      0LL);
    v13 = (__int64)v21;
    if ( v21 )
    {
      v21 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(v13);
    }
  }
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return 0LL;
}
