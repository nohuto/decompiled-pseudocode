/*
 * XREFs of ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x1801CA160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x180071B34 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_180073210.c)
 *     ??0CGlobals@ApplicationViewManagement@@QEAA@XZ @ 0x18010D7B4 (--0CGlobals@ApplicationViewManagement@@QEAA@XZ.c)
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x18020E61C (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x180224384 (-InternalAddRef@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C5310 (--1-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1802C531C (-InternalRelease@-$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f58beaf1c957ff853694186b2dae5080__&_ @ 0x18030A7EC (Windows--Internal--ComTaskPool--QueueTask__lambda_f58beaf1c957ff853694186b2dae5080__-_.c)
 *     _lambda_f58beaf1c957ff853694186b2dae5080_::_lambda_f58beaf1c957ff853694186b2dae5080_ @ 0x18030A89C (_lambda_f58beaf1c957ff853694186b2dae5080_--_lambda_f58beaf1c957ff853694186b2dae5080_.c)
 */

__int64 __fastcall CWin32ApplicationView::v_RefreshEnterpriseIdIfNeeded(CWin32ApplicationView *this)
{
  __int64 *ViewManager; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  _OWORD v8[3]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  CWin32ApplicationView *v11; // [rsp+70h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+18h] BYREF
  char v13; // [rsp+80h] [rbp+20h] BYREF

  if ( !*((_BYTE *)this + 56) )
    return 0LL;
  v11 = this;
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalAddRef(&v11);
  lambda_f58beaf1c957ff853694186b2dae5080_::_lambda_f58beaf1c957ff853694186b2dae5080_(&v13, &v11);
  v9 = 0LL;
  memset(v8, 0, sizeof(v8));
  ApplicationViewManagement::CGlobals::CGlobals((ApplicationViewManagement::CGlobals *)v8);
  ViewManager = ApplicationViewManagement::CGlobals::GetViewManager(&v12);
  v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_f58beaf1c957ff853694186b2dae5080____(
         v4,
         v3,
         *(unsigned int *)(*ViewManager + 264),
         &v13);
  v6 = v12;
  v7 = v5;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(v6);
  }
  ApplicationViewManagement::CGlobals::~CGlobals((ApplicationViewManagement::CGlobals *)v8);
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x186,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::~ComPtr<CWin32ApplicationView>(&v13);
  Microsoft::WRL::ComPtr<CWin32ApplicationView>::InternalRelease(&v11);
  return (unsigned int)v7;
}
