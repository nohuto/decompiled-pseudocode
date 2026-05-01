/*
 * XREFs of ?ThumbnailFactory@?$consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18044B958
 * Callers:
 *     ?OnCachedFileUpdaterActivated@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIApplicationOverrides@Xaml@UI@67@@impl@winrt@@UEAAHPEAX@Z @ 0x18044B9A0 (-OnCachedFileUpdaterActivated@-$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@I.c)
 *     ?SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x1804A7A9C (-SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x1804A7F50 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x1804A8234 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x180599038 (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     _lambda_aa297103944b40500ac49b04ee807ad8_::operator() @ 0x18061A160 (_lambda_aa297103944b40500ac49b04ee807ad8_--operator().c)
 *     ?OnDeviceAdded@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUDeviceWatcher@Enumeration@Devices@56@AEBUDeviceInformation@8956@@Z @ 0x18061BF70 (-OnDeviceAdded@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUDevi.c)
 *     ?AddWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x1806654FC (-AddWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z.c)
 *     ?UpdateTaskGroupSwitchItemThumbnail@AppViewDataSourceAdapter@@AEAAXAEBUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x1806C2D90 (-UpdateTaskGroupSwitchItemThumbnail@AppViewDataSourceAdapter@@AEAAXAEBUIRootSwitchItem@Multitask.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>::ThumbnailFactory(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = *a2;
  v6 = 0;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 104LL))(v2, v3);
  return winrt::check_hresult(&v8, v4, (__int64)&v6);
}
