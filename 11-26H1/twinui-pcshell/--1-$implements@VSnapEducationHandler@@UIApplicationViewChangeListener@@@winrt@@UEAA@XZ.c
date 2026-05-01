/*
 * XREFs of ??1?$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEAA@XZ @ 0x1802BA220
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor$0 @ 0x1806D1CCB (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TabProxyWindow_--_1_--dtor$0.c)
 *     _VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy_::_1_::dtor$1 @ 0x1806D377A (_VirtualDestopSwitcherViewChangeNotificationProxy--VirtualDestopSwitcherViewChangeN_ea_1806D377A.c)
 *     _TouchGestureSettings::TouchGestureSettings_::_1_::dtor$0 @ 0x1806DE52D (_TouchGestureSettings--TouchGestureSettings_--_1_--dtor$0.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$47 @ 0x1806F8424 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$47.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<SnapEducationHandler,IApplicationViewChangeListener>::~implements<SnapEducationHandler,IApplicationViewChangeListener>(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>(a1 + 8);
}
