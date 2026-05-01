/*
 * XREFs of ?NumberOfTaskGroupItems@TaskViewFrame@@UEAAIXZ @ 0x1802C8570
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItemDataSource@Multitasking@ComposableShell@456@@Z @ 0x18009AD88 (-CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Inter.c)
 *     ??$as@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18020FE18 (--$as@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@-$abi@UI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewFrame::NumberOfTaskGroupItems(TaskViewFrame *this)
{
  unsigned int v2; // ebx
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v4,
    *((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))this + 11));
  v2 = CountTaskGroupSwitchItemsInDataSource((TaskViewFrame *)((char *)this + 168), &v4);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v4);
  return v2;
}
