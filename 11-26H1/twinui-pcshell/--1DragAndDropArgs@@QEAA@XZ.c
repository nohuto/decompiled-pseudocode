/*
 * XREFs of ??1DragAndDropArgs@@QEAA@XZ @ 0x180091DCC
 * Callers:
 *     _CSnappedWindowModel::_EnumSnappedWindows_::_1_::dtor$4 @ 0x1806D0776 (_CSnappedWindowModel--_EnumSnappedWindows_--_1_--dtor$4.c)
 *     _CSnappedWindowModel::_EnumSnappedWindows_::_1_::dtor$5 @ 0x1806D0788 (_CSnappedWindowModel--_EnumSnappedWindows_--_1_--dtor$5.c)
 *     _VirtualPinnedAppsHandler::SetViewCollectionInternal_::_1_::dtor$3 @ 0x1806D09BC (_VirtualPinnedAppsHandler--SetViewCollectionInternal_--_1_--dtor$3.c)
 *     _VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor$5 @ 0x1806D09CE (_VirtualPinnedAppsHandler--UnpinAppID_--_1_--dtor$5.c)
 *     _AppViewDataSourceAdapter::InitializeAppViewItems_::_1_::dtor$2 @ 0x1806D0D04 (_AppViewDataSourceAdapter--InitializeAppViewItems_--_1_--dtor$2.c)
 *     _AppViewDataSourceAdapter::InitializeAppViewItems_::_1_::dtor$3 @ 0x1806D0D16 (_AppViewDataSourceAdapter--InitializeAppViewItems_--_1_--dtor$3.c)
 *     _SizeConversionViewInfo::GetPositionerDataForView_::_1_::dtor$1 @ 0x1806D0E18 (_SizeConversionViewInfo--GetPositionerDataForView_--_1_--dtor$1.c)
 *     _CSnapAssistControllerBase::_CollectItemsForSnapAssist_::_1_::dtor$3 @ 0x1806D5033 (_CSnapAssistControllerBase--_CollectItemsForSnapAssist_--_1_--dtor$3.c)
 *     _CSnapAssistControllerBase::_CollectItemsForSnapAssist_::_1_::dtor$4 @ 0x1806D5045 (_CSnapAssistControllerBase--_CollectItemsForSnapAssist_--_1_--dtor$4.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$6 @ 0x1806D50AF (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$6.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$7 @ 0x1806D50C1 (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$7.c)
 *     _HolographicPositioner::ControlLost_::_1_::dtor$1 @ 0x1806E9AB0 (_HolographicPositioner--ControlLost_--_1_--dtor$1.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$4 @ 0x1806F3593 (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$4.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$5 @ 0x1806F35A5 (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$5.c)
 *     _VirtualDesktopGestureWindow::GetFilterForDesktop_::_1_::dtor$3 @ 0x1806F3623 (_VirtualDesktopGestureWindow--GetFilterForDesktop_--_1_--dtor$3.c)
 *     _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$5 @ 0x1806F366B (_VirtualPinnedAppsHandler--PinAppID_--_1_--dtor$5.c)
 *     _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$6 @ 0x1806F46E0 (_VirtualPinnedAppsHandler--PinAppID_--_1_--dtor$6.c)
 *     _VirtualPinnedAppsHandler::SetViewCollectionInternal_::_1_::dtor$2 @ 0x1806F4755 (_VirtualPinnedAppsHandler--SetViewCollectionInternal_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$6 @ 0x1806F9ECD (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806F9ECD.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$7 @ 0x1806F9EDF (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806F9EDF.c)
 * Callees:
 *     <none>
 */

void __fastcall DragAndDropArgs::~DragAndDropArgs(DragAndDropArgs *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
