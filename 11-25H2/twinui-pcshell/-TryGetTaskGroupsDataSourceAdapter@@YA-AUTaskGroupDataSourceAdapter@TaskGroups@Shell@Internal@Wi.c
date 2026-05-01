/*
 * XREFs of ?TryGetTaskGroupsDataSourceAdapter@@YA?AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1802B7A10
 * Callers:
 *     ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIAppViewDataSourceAdapter@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x1800F92A4 (--0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIAppViewDataSourceAdapter@@PEAUIApp.c)
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIAppViewDataSourceAdapter@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@9ComposableShell@Internal@Windows@@@Z @ 0x1801089E0 (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 *     ??0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopDataSource@34567@@Z @ 0x1802C1E0C (--0CachedDataSource@@QEAA@_N0PEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multit.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180680158 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$convert_from_abi@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@@wil@@YA?AUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1802857F8 (--$convert_from_abi@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@@wil@@Y.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
winrt *__fastcall TryGetTaskGroupsDataSourceAdapter(winrt *a1, __int64 *a2)
{
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v7; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, GUID *, struct IUnknown **))(v3 + 56))(
         a2,
         &GUID_00000000_0000_0000_c000_000000000046,
         &v7);
  if ( v4 >= 0 )
  {
    wil::convert_from_abi<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter>(a1, v7);
    if ( v7 )
      ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x78,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v4);
    *(_QWORD *)a1 = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v7);
  }
  return a1;
}
