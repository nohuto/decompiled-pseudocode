/*
 * XREFs of ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18068C5A0
 * Callers:
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18068C690 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISw.c)
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18068C6A0 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISw.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180061EB0 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A8B34 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ??$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x1800F5CB4 (--$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA-AUISwitchItem@.c)
 *     ?AcceptsSwitchItem@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180107860 (-AcceptsSwitchItem@-$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UI.c)
 *     ??$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x180218FB4 (--$as@UTaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QE.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$TaskGroupInteracted@Uguid@winrt@@W4TaskGroupSwitcherSurface@@W4TaskGroupInteractionKind@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@@$$QEAW4TaskGroupSwitcherSurface@@$$QEAW4TaskGroupInteractionKind@@@Z @ 0x180688F1C (--$TaskGroupInteracted@Uguid@winrt@@W4TaskGroupSwitcherSurface@@W4TaskGroupInteractionKind@@@Tas.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1806999EC (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitch.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall _CloseSwitchItem__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        struct IUnknown *a2)
{
  _QWORD *v4; // rax
  _OWORD *v5; // rax
  __int64 *v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF

  from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>((winrt *)&v6, a2);
  if ( *(_QWORD *)(a1 + 104)
    && winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::AcceptsSwitchItem(
         (__int64 **)(a1 + 104),
         (__int64 *)&v6) )
  {
    v4 = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
           &v6,
           &v7);
    winrt::Windows::Foundation::IUnknown::as<winrt::Windows::Internal::Shell::TaskGroups::TaskGroup>(v4, (__int64)&v8);
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
    v5 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
           &v8,
           &v9);
    TaskGroupsTraceLoggingProvider::TaskGroupInteracted<winrt::guid,enum TaskGroupSwitcherSurface,enum TaskGroupInteractionKind>((__int64)v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  }
  _CloseSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
    a1 + 8,
    a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
}
