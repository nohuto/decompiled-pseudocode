/*
 * XREFs of ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIAppViewDataSourceAdapter@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@9ComposableShell@Internal@Windows@@@Z @ 0x1801089E0
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1801082A0 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18067BA60 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?TryGetTaskGroupsDataModel@@YA?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1800F9190 (-TryGetTaskGroupsDataModel@@YA-AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEA.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x1800F94E4 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180102A0C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?TryGetTaskGroupsDataSourceAdapter@@YA?AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1802B7A10 (-TryGetTaskGroupsDataSourceAdapter@@YA-AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Wi.c)
 *     ??4?$ComPtr@UIAppLayoutCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutCache@@@Z @ 0x1802CA0A4 (--4-$ComPtr@UIAppLayoutCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIAppLayoutCache@@@Z.c)
 *     ?TaskGroupController@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180482C94 (-TaskGroupController@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlAllUpViewController::XamlAllUpViewController(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 (__fastcall ***a7)(_QWORD, GUID *, __int64),
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *TaskGroupsDataModel; // rax
  __int64 *TaskGroupsDataSourceAdapter; // rax
  __int64 *v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v22)(_QWORD, GUID *, __int64); // rsi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v26[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]

  XamlBaseViewController::XamlBaseViewController((_QWORD *)(a1 + 8));
  *(_QWORD *)a1 = &XamlAllUpViewController::`vftable'{for `__IXamlAllUpViewControllerPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &XamlAllUpViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &XamlAllUpViewController::`vftable'{for `IXamlMultitaskingViewController'};
  *(_QWORD *)(a1 + 24) = &XamlAllUpViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  *(_QWORD *)(a1 + 32) = &XamlAllUpViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 40) = &XamlAllUpViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 48) = &XamlAllUpViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  *(_QWORD *)(a1 + 152) = &XamlAllUpViewController::`vftable'{for `IMonitorFrameDismissAnimationCallback'};
  *(_QWORD *)(a1 + 160) = &XamlAllUpViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 168) = &XamlAllUpViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_BYTE *)(a1 + 224) = 0;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 64),
    a3);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 72),
    a4);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 56),
    a2);
  v14 = 0LL;
  v26[0] = 0LL;
  v15 = a6;
  if ( a6 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v26);
    RoGetAgileReference(0LL, &GUID_fff59320_db70_4865_8fed_8b502d692f12, v15, v26);
    v14 = v26[0];
  }
  v16 = 0LL;
  v26[0] = 0LL;
  v17 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = v14;
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v16 = v26[0];
  }
  if ( v16 )
  {
    v26[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutCache>::operator=(a1 + 176, a8);
  __abi_winrt_ptr_assign((_QWORD *)(a1 + 192), a9);
  TaskGroupsDataModel = TryGetTaskGroupsDataModel(&a6, a5);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 96), TaskGroupsDataModel);
  if ( a6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&a6);
  TaskGroupsDataSourceAdapter = (__int64 *)TryGetTaskGroupsDataSourceAdapter(&a6, a5);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 104), TaskGroupsDataSourceAdapter);
  if ( a6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&a6);
  if ( *(_QWORD *)(a1 + 104) )
  {
    v20 = (__int64 *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter>::TaskGroupController(
                       a1 + 104,
                       &a6);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 216), v20);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a6);
  }
  __abi_winrt_ptr_assign((_QWORD *)(a1 + 200), a10);
  v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))a7;
  v22 = **a7;
  v23 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v24 = v22(v21, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, a1 + 80);
  if ( v24 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x42,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v24,
      v26[0]);
  return a1;
}
