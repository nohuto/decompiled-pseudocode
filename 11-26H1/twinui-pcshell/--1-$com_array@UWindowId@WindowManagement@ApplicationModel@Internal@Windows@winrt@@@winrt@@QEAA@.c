/*
 * XREFs of ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802C142C
 * Callers:
 *     ??1?$com_array@Uguid@winrt@@@winrt@@QEAA@XZ @ 0x18044AE28 (--1-$com_array@Uguid@winrt@@@winrt@@QEAA@XZ.c)
 *     ?NonDelegatingGetIids@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x18044B738 (-NonDelegatingGetIids@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@I.c)
 *     ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z @ 0x18044C208 (-get_interfaces@winrt@@YA-AU-$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z.c)
 *     ?NonDelegatingGetIids@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1805BAD28 (-NonDelegatingGetIids@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 *     _XamlAltTabViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$5 @ 0x1806D9177 (_XamlAltTabViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$5.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowValidForGroupInclusion_::_1_::dtor$8 @ 0x1806F7179 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1806F7179.c)
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::OnGuidedSnapAssistCompletedEvent_::_1_::dtor$1 @ 0x1806F71C8 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--OnGuidedSnapA.c)
 *     _TouchGestureProcessor::SetSuppressionRegions_::_1_::dtor$0 @ 0x1806F71EC (_TouchGestureProcessor--SetSuppressionRegions_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::PinUnpinToAllDesktops_::_1_::dtor$2 @ 0x1806F71FE (_winrt--Windows--Internal--Shell--DesktopTaskGroups--implementation--DesktopTaskGro_ea_1806F71FE.c)
 *     _winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::MoveToDesktop_::_1_::dtor$3 @ 0x1806F7210 (_winrt--Windows--Internal--Shell--DesktopTaskGroups--implementation--DesktopTaskGro_ea_1806F7210.c)
 *     _TouchGestureComponent::UpdateSuppressionRegions_::_1_::dtor$1 @ 0x1806F741B (_TouchGestureComponent--UpdateSuppressionRegions_--_1_--dtor$1.c)
 *     _SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor$2 @ 0x1806F9470 (_SnapFlyoutHost--GetGuidedSnapAssistRegions_--_1_--dtor$2.c)
 *     _CopilotHotkeyManager::GetTargetAppExtensionDetails_::_1_::dtor$47 @ 0x18070288B (_CopilotHotkeyManager--GetTargetAppExtensionDetails_--_1_--dtor$47.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$2 @ 0x180707E9B (_XamlAllUpViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$2.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 */

void __fastcall winrt::com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::~com_array<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree_0(v2);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
