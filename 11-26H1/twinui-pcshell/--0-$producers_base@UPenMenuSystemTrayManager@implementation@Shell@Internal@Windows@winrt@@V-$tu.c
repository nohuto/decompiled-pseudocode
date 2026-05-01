/*
 * XREFs of ??0?$producers_base@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIPenMenuSystemTrayManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x1800DA84C
 * Callers:
 *     ??0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z @ 0x1800DA798 (--0SnapLayoutProvider@@QEAA@PEAUIImmersiveMonitorManager@@@Z.c)
 *     ??0?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x1801884A0 (--0-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??0MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802B87BC (--0MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1803E9E20 (--0PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UIImeContextMenuExperienceManager@@X@impl@winrt@@QEAA@XZ @ 0x1802C1954 (--0-$producer_convert@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UIImeC.c)
 */

_QWORD *winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>::producers_base<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,std::tuple<IPenMenuSystemTrayManager>>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,IImeContextMenuExperienceManager,void>::producer_convert<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,IImeContextMenuExperienceManager,void>();
  result = v0;
  *v0 = &winrt::impl::producers_base<GamingPosturePositioner,std::tuple<IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IInternalFullScreenHandler,void>'};
  return result;
}
