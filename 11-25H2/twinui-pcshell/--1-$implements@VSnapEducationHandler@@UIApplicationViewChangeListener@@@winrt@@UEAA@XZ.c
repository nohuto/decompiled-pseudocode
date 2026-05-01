/*
 * XREFs of ??1?$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEAA@XZ @ 0x1802C3140
 * Callers:
 *     _VirtualDestopSwitcherViewChangeNotificationProxy::VirtualDestopSwitcherViewChangeNotificationProxy_::_1_::dtor$1 @ 0x1806AAC15 (_VirtualDestopSwitcherViewChangeNotificationProxy--VirtualDestopSwitcherViewChangeN_ea_1806AAC15.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TabProxyWindow_::_1_::dtor$0 @ 0x1806AE3AD (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TabProxyWindow_--_1_--dtor$0.c)
 *     _TouchGestureSettings::TouchGestureSettings_::_1_::dtor$0 @ 0x1806B715E (_TouchGestureSettings--TouchGestureSettings_--_1_--dtor$0.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$47 @ 0x1806CFBA2 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$47.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<SnapEducationHandler,IApplicationViewChangeListener>::~implements<SnapEducationHandler,IApplicationViewChangeListener>(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>(a1 + 8);
}
