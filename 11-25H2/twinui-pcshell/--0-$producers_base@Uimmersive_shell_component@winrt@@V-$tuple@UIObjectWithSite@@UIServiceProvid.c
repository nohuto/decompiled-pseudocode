/*
 * XREFs of ??0?$producers_base@Uimmersive_shell_component@winrt@@V?$tuple@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180151D08
 * Callers:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180151C9C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@QEAA@XZ @ 0x180151D60 (--0-$producer_convert@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@imp.c)
 *     ??0?$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@@QEAA@XZ @ 0x180292B48 (--0-$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@.c)
 *     ??0?$producer_convert@VVirtualDestopSwitcherViewChangeNotificationProxy@@UIMultitaskingViewVisibilityNotification@@X@impl@winrt@@QEAA@XZ @ 0x18029C578 (--0-$producer_convert@VVirtualDestopSwitcherViewChangeNotificationProxy@@UIMultitaskingViewVisib.c)
 *     ??0?$producer_convert@Uimmersive_shell_component@winrt@@UIImmersiveShellComponent@@X@impl@winrt@@QEAA@XZ @ 0x18029FE84 (--0-$producer_convert@Uimmersive_shell_component@winrt@@UIImmersiveShellComponent@@X@impl@winrt@.c)
 */

_QWORD *winrt::impl::producers_base<winrt::immersive_shell_component,std::tuple<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>>::producers_base<winrt::immersive_shell_component,std::tuple<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>>()
{
  __int64 v0; // rcx
  __int64 v1; // r10
  __int64 v2; // r10
  _QWORD *v3; // r10

  winrt::impl::producer_convert<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification,void>::producer_convert<VirtualDestopSwitcherViewChangeNotificationProxy,IMultitaskingViewVisibilityNotification,void>();
  winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>(v0 + 8);
  winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>(v1 + 16);
  winrt::impl::producer_convert<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable,void>::producer_convert<winrt::immersive_shell_component,winrt::Windows::Foundation::IInspectable,void>(v2 + 24);
  v3[1] = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *v3 = &winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>::`vftable';
  v3[2] = &TwinUI::Cortana::ISearchAppDesktopNotifications::`vftable';
  return v3;
}
