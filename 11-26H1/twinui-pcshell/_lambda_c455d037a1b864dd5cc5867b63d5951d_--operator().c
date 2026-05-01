/*
 * XREFs of _lambda_c455d037a1b864dd5cc5867b63d5951d_::operator() @ 0x1806BC870
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_c455d037a1b864dd5cc5867b63d5951d___::Invoke @ 0x1806BDB20 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1806BDB20.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800283DC (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x18009B604 (-GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX.c)
 *     ??$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802242A0 (--$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180267668 (-SnapAssistSnappedWindows@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompl.c)
 *     ?EvaluationState@?$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@UIEvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SwitchItemInclusion@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18027CCE0 (-EvaluationState@-$consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs@.c)
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
void __fastcall lambda_c455d037a1b864dd5cc5867b63d5951d_::operator()(
        _QWORD *a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        __int64 *a3)
{
  void (__fastcall ***v6)(_QWORD, void *, __int64 **); // rcx
  __int64 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64, struct _GUID *); // rdi
  int v11; // eax
  _QWORD *v12; // rax
  AppViewDataSourceHelpers **v13; // rax
  struct IInspectable *v14; // rdx
  void **v15; // r9
  int ApplicationViewForItemData; // eax
  __int64 v17; // rbx
  int (__fastcall *v18)(__int64, unsigned __int8 *); // rdi
  int v19; // eax
  __int64 v20; // [rsp+20h] [rbp-68h] BYREF
  struct _GUID v21; // [rsp+28h] [rbp-60h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-48h] BYREF
  int v24; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 *v26; // [rsp+A8h] [rbp+20h] BYREF

  LODWORD(v26) = 0;
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
    a3,
    (unsigned int *)&v26);
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
    (__int64 **)a3,
    &v22);
  *(_QWORD *)&v21.Data1 = 0LL;
  v6 = (void (__fastcall ***)(_QWORD, void *, __int64 **))*winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
                                                             &v22,
                                                             &v20);
  v26 = 0LL;
  if ( v6 )
  {
    (**v6)(v6, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>, &v26);
    v7 = v26;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v20 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v20);
  if ( v7 )
  {
    v8 = **(unsigned int **)winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
                              &v26,
                              (__int64)&pv);
    if ( pv )
    {
      CoTaskMemFree_0(pv);
      pv = 0LL;
      v24 = 0;
    }
    v9 = a1[3];
    v10 = *(__int64 (__fastcall **)(__int64, __int64, struct _GUID *))(*(_QWORD *)v9 + 48LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v21);
    v11 = v10(v9, v8, &v21);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15A,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
        (const char *)(unsigned int)v11,
        v20);
  }
  else
  {
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v21);
    v12 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
            &v22,
            &pv);
    v13 = (AppViewDataSourceHelpers **)winrt::Windows::Foundation::IUnknown::as<IInspectable>(v12, (__int64)&v20);
    ApplicationViewForItemData = AppViewDataSourceHelpers::GetApplicationViewForItemData(*v13, v14, &v21, v15);
    if ( ApplicationViewForItemData < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x15E,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
        (const char *)(unsigned int)ApplicationViewForItemData,
        v20);
    if ( v20 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v20);
    if ( pv )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&pv);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v26);
  *(_QWORD *)v21.Data4 = 0LL;
  v17 = *(_QWORD *)&v21.Data1;
  v18 = *(int (__fastcall **)(__int64, unsigned __int8 *))(**(_QWORD **)&v21.Data1 + 80LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)v21.Data4);
  if ( v18(v17, v21.Data4) >= 0 )
  {
    LODWORD(v26) = 0;
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(*(_QWORD *)*a1 + 96LL))(
            *a1,
            *(_QWORD *)v21.Data4,
            &v26);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x167,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewframe.cpp",
        (const char *)(unsigned int)v19,
        v20);
    if ( !(_DWORD)v26 )
    {
      LODWORD(v20) = 1;
      winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IEvaluateItemEventArgs<winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs>::EvaluationState(
        a3,
        (unsigned int *)&v20);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v21.Data4);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
}
