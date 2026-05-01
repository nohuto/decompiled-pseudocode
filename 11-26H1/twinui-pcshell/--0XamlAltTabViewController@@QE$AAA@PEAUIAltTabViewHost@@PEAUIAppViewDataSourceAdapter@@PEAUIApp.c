/*
 * XREFs of ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIAppViewDataSourceAdapter@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x18009A378
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18009A890 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?TryGetTaskGroupsDataModel@@YA?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x180057F48 (-TryGetTaskGroupsDataModel@@YA-AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEA.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800580B4 (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x1800580E4 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetTaskGroupsDataSourceAdapter@@YA?AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1802AE36C (-TryGetTaskGroupsDataSourceAdapter@@YA-AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 *__fastcall XamlAltTabViewController::XamlAltTabViewController(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, GUID *, __int64 *))
{
  __int64 *TaskGroupsDataModel; // rax
  __int64 *TaskGroupsDataSourceAdapter; // rax
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  XamlBaseViewController::XamlBaseViewController(a1 + 1);
  *a1 = (__int64)&XamlAltTabViewController::`vftable';
  a1[1] = (__int64)&XamlAltTabViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  a1[2] = (__int64)&XamlAltTabViewController::`vftable'{for `IXamlMultitaskingViewController'};
  a1[3] = (__int64)&XamlAltTabViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  a1[4] = (__int64)&XamlAltTabViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  a1[5] = (__int64)&XamlAltTabViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  a1[6] = (__int64)&XamlAltTabViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  a1[19] = (__int64)&XamlAltTabViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  a1[20] = (__int64)&XamlAltTabViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[22] = 0LL;
  a1[23] = 0LL;
  a1[24] = 0LL;
  a1[25] = 0LL;
  a1[26] = 0LL;
  a1[27] = 0LL;
  a1[28] = 0LL;
  a1[29] = 0LL;
  a1[30] = 0LL;
  a1[31] = 0LL;
  a1[32] = 0LL;
  a1[33] = 0LL;
  a1[34] = 0LL;
  a1[35] = 0LL;
  a1[36] = 0LL;
  a1[37] = 0LL;
  a1[38] = 0LL;
  a1[39] = 0LL;
  a1[40] = 0LL;
  a1[41] = 0LL;
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    a1 + 43,
    a3);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(a1 + 8, a4);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(a1 + 9, a5);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(a1 + 7, a2);
  TaskGroupsDataModel = TryGetTaskGroupsDataModel(v16, (__int64 *)a1[43]);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1 + 12, TaskGroupsDataModel);
  if ( v16[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v16);
  TaskGroupsDataSourceAdapter = (__int64 *)TryGetTaskGroupsDataSourceAdapter(v16, a1[43]);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1 + 13, TaskGroupsDataSourceAdapter);
  if ( v16[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v16);
  v12 = **a6;
  v13 = a1[10];
  a1[10] = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = v12(a6, &GUID_9290b92b_b0cf_4e86_b3bc_98d456e2f29f, a1 + 10);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
      (const char *)(unsigned int)v14,
      v16[0]);
  return a1;
}
