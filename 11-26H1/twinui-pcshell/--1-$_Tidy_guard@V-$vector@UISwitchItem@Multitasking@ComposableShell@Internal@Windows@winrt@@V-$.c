/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1806BFE80
 * Callers:
 *     ??$_Construct_n@AEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBQEAU123456@@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@AEAAX_KAEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@1@Z @ 0x1806BFD28 (--$_Construct_n@AEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBQEAU1.c)
 * Callees:
 *     ??1?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801C5278 (--1-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Foundation@Window.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>(
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension ***a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::vector<winrt::Windows::Foundation::IAsyncAction>::~vector<winrt::Windows::Foundation::IAsyncAction>(v1);
  return result;
}
