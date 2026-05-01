/*
 * XREFs of ?ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x1806A7CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetTaskGroupsDataModel@@YA?AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEAUIAppViewDataSourceAdapter@@@Z @ 0x180057F48 (-TryGetTaskGroupsDataModel@@YA-AUTaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@PEA.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180094AB0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?TryFindGroupWithWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGroupDataModel@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@@Z @ 0x1800CDB14 (-TryFindGroupWithWindow@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel@UITaskGr.c)
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x180124100 (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180131238 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?OnFileActivated@?$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUFileActivatedEventArgs@Activation@ApplicationModel@Windows@3@@Z @ 0x1802A40E8 (-OnFileActivated@-$consume_Windows_UI_Xaml_IApplicationOverrides@UIApplicationOverrides@Xaml@UI@.c)
 *     ?TaskGroupDataSource@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18057E79C (-TaskGroupDataSource@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter@UTa.c)
 *     ??$convert_from_abi@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x1806A5248 (--$convert_from_abi@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA-A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall TaskViewHost::ViewVirtualDesktopChanged(
        TaskViewHost *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v4; // rcx
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  const char *v9; // r9
  __int64 result; // rax
  __int64 *v11; // rax
  struct IApplicationView *v12; // rdx
  __int64 **v13; // rax
  __int64 *v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  LPCRITICAL_SECTION v17; // [rsp+48h] [rbp-30h] BYREF
  int v18; // [rsp+50h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int WindowForView; // [rsp+80h] [rbp+8h] BYREF
  struct IUnknown *v21; // [rsp+90h] [rbp+18h] BYREF
  __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 112) & -(__int64)(this != (TaskViewHost *)136));
  v17 = v4;
  try
  {
    v18 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    if ( !*((_BYTE *)this + 604) )
    {
      v21 = 0LL;
      v5 = (__int64 *)*((_QWORD *)this + 15);
      v6 = *v5;
      v21 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), GUID *, struct IUnknown **))(v6 + 32))(
             v5,
             a2,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v21);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E3,
          (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
          (const char *)(unsigned int)v7);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
        CThreadUseDetector::~CThreadUseDetector(&v17);
        return v8;
      }
      v11 = (__int64 *)wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
                         (winrt *)&v22,
                         v21);
      winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileActivated(
        (__int64 *)this + 4,
        v11);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
      WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v12);
      TryGetTaskGroupsDataModel(&v14, *((__int64 **)this + 15));
      if ( v14 )
      {
        winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataModel<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModel>::TryFindGroupWithWindow(
          &v14,
          &v22,
          &WindowForView);
        if ( v22 )
        {
          v13 = (__int64 **)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapter<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter>::TaskGroupDataSource(
                              (__int64 (__fastcall ****)(_QWORD, void *, _QWORD **))this + 8,
                              &v16);
          winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
            v13,
            &v15,
            &v22);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
          winrt::impl::consume_Windows_UI_Xaml_IApplicationOverrides<winrt::Windows::UI::Xaml::IApplicationOverrides>::OnFileActivated(
            (__int64 *)this + 4,
            &v15);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
        }
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
    }
    CThreadUseDetector::~CThreadUseDetector(&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F5,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                           v9);
  }
  return result;
}
