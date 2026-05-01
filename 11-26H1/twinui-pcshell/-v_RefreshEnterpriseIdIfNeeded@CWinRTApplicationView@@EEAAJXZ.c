/*
 * XREFs of ?v_RefreshEnterpriseIdIfNeeded@CWinRTApplicationView@@EEAAJXZ @ 0x180091E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x180071B34 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180071DA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180073210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_180073210.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___ @ 0x180091FC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___.c)
 *     ??1CPersistence@ApplicationViewManagement@@QEAA@XZ @ 0x180092058 (--1CPersistence@ApplicationViewManagement@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180092960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180092960.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::v_RefreshEnterpriseIdIfNeeded(CWinRTApplicationView *this, volatile int *a2)
{
  __int64 v3; // r8
  __int64 *ViewManager; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v15; // [rsp+70h] [rbp+10h] BYREF
  __int64 v16; // [rsp+78h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 56) )
    return 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::InternalAddRef(
    (__int64)this,
    a2);
  v15 = v3;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&v10);
  DWORD1(v12) = 1;
  *(_QWORD *)&v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)&v12 + 1) = 0LL;
  *(_QWORD *)&v10 = &ApplicationViewManagement::CGlobals::`vftable';
  v13 = 0LL;
  ViewManager = ApplicationViewManagement::CGlobals::GetViewManager(&v16);
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_1c21e8e45458c94e0c0d38fa9ecbcd0f___(
         v6,
         v5,
         *(unsigned int *)(*ViewManager + 264),
         &v15);
  v8 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(v8);
  }
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(v9);
  }
  ApplicationViewManagement::CPersistence::~CPersistence((ApplicationViewManagement::CPersistence *)((char *)&v12 + 8));
  DWORD1(v12) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11 + 1);
  if ( v7 >= 0 )
  {
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAB,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v7);
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v15);
  return (unsigned int)v7;
}
