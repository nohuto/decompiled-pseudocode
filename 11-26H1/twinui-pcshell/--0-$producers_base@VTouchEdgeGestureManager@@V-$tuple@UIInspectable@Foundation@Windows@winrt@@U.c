/*
 * XREFs of ??0?$producers_base@VTouchEdgeGestureManager@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@std@@@impl@winrt@@QEAA@XZ @ 0x180298790
 * Callers:
 *     ??0TouchEdgeGestureManager@@QEAA@XZ @ 0x18005432C (--0TouchEdgeGestureManager@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@@QEAA@XZ @ 0x18028DEB8 (--0-$producer_convert@VInteractionTracker@SnapInteraction@@UIWindowSnappingEvents@@X@impl@winrt@.c)
 *     ??0?$producer_convert@Uimmersive_shell_component@winrt@@UIImmersiveShellComponent@@X@impl@winrt@@QEAA@XZ @ 0x1802987D4 (--0-$producer_convert@Uimmersive_shell_component@winrt@@UIImmersiveShellComponent@@X@impl@winrt@.c)
 *     ??0?$producer_convert@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180298810 (--0-$producer_convert@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@X@impl@w.c)
 */

_QWORD *__fastcall winrt::impl::producers_base<TouchEdgeGestureManager,std::tuple<winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>>::producers_base<TouchEdgeGestureManager,std::tuple<winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  _QWORD *result; // rax

  winrt::impl::producer_convert<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,void>::producer_convert<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,void>(
    a1 + 16,
    a2,
    a1);
  winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>(v2);
  winrt::impl::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>::producer_convert<SnapInteraction::InteractionTracker,IWindowSnappingEvents,void>();
  *v3 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  result = v4;
  *v4 = &TwinUI::Cortana::ISearchAppDesktopNotifications::`vftable';
  return result;
}
