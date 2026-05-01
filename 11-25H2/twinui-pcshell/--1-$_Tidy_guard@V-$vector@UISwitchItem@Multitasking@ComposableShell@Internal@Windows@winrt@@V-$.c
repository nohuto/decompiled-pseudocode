/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1806985C8
 * Callers:
 *     ??$_Construct_n@AEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBQEAU123456@@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@AEAAX_KAEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@1@Z @ 0x180698474 (--$_Construct_n@AEBQEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBQEAU1.c)
 * Callees:
 *     ??1?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x180100EE8 (--1-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Foundation@Window.c)
 */

void __fastcall std::_Tidy_guard<std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<winrt::Windows::Foundation::IAsyncAction>::~vector<winrt::Windows::Foundation::IAsyncAction>(v1);
}
