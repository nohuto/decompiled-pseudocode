/*
 * XREFs of ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801574A8
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18006C8A0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x18015732C (--0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilyS.c)
 *     ??0ComponentCreator@@QEAA@XZ @ 0x180192CA8 (--0ComponentCreator@@QEAA@XZ.c)
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x180196098 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     _lambda_56bc88237345be46eea563c70201c1d4_::operator() @ 0x1804175D4 (_lambda_56bc88237345be46eea563c70201c1d4_--operator().c)
 *     ?SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x180419730 (-SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@U.c)
 *     ?TerminateActivityHost@UwpWindowEventDispatcher@@UEAAJIW4TerminateActivityHostOptions@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804199B0 (-TerminateActivityHost@UwpWindowEventDispatcher@@UEAAJIW4TerminateActivityHostOptions@ViewManage.c)
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x180422684 (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 *     ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805D613C (-EnsureExperienceManager@FallbackFlyoutView@@AEAA-AV-$com_ptr_t@UINetworkFlyoutExperienceManager.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
