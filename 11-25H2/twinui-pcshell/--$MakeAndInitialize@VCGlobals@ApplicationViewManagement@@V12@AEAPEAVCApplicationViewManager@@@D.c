/*
 * XREFs of ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x18020BBD0
 * Callers:
 *     ??$InitializeGlobals@PEAVCApplicationViewManager@@@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SAJPEAVCApplicationViewManager@@@Z @ 0x18020BB30 (--$InitializeGlobals@PEAVCApplicationViewManager@@@-$CGlobals@V0ApplicationViewManagement@@@Glob.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180054134 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007C0D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_18007C0D0.c)
 *     ??0CGlobals@ApplicationViewManagement@@QEAA@XZ @ 0x1800847F4 (--0CGlobals@ApplicationViewManagement@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B7E38 (-InternalAddRef@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E19F0 (-InternalAddRef@-$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x18023322C (-Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewManagement::CGlobals,ApplicationViewManagement::CGlobals,CApplicationViewManager * &>(
        ApplicationViewManagement::CGlobals **a1,
        __int64 *a2)
{
  void *v4; // rax
  ApplicationViewManagement::CGlobals *v6; // rax
  volatile int *v7; // rdx
  ApplicationViewManagement::CGlobals *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  ApplicationViewManagement::CGlobals *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = ApplicationViewManagement::CGlobals::CGlobals((ApplicationViewManagement::CGlobals *)v4);
  v13 = 0LL;
  v8 = v6;
  v9 = *a2;
  v12 = v6;
  if ( *((_QWORD *)v6 + 6) != v9 )
  {
    v14 = v9;
    Microsoft::WRL::ComPtr<CApplicationViewManager>::InternalAddRef(&v14, v7);
    v10 = *((_QWORD *)v8 + 6);
    *((_QWORD *)v8 + 6) = v11;
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl>>::Release(v10);
  }
  ApplicationViewManagement::CPersistence::Initialize((PHKEY)v8 + 5);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalAddRef((__int64 *)&v12);
  *a1 = v8;
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile signed __int32 **)&v12);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v13);
  return 0LL;
}
