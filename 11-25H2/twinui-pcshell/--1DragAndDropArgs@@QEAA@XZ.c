/*
 * XREFs of ??1DragAndDropArgs@@QEAA@XZ @ 0x18022EAB8
 * Callers:
 *     _VirtualPinnedAppsHandler::SetViewCollectionInternal_::_1_::dtor$3 @ 0x1806A625A (_VirtualPinnedAppsHandler--SetViewCollectionInternal_--_1_--dtor$3.c)
 *     _VirtualPinnedAppsHandler::UnpinAppID_::_1_::dtor$5 @ 0x1806A626C (_VirtualPinnedAppsHandler--UnpinAppID_--_1_--dtor$5.c)
 *     _AppViewDataSourceAdapter::InitializeAppViewItems_::_1_::dtor$2 @ 0x1806A6773 (_AppViewDataSourceAdapter--InitializeAppViewItems_--_1_--dtor$2.c)
 *     _AppViewDataSourceAdapter::InitializeAppViewItems_::_1_::dtor$3 @ 0x1806A6785 (_AppViewDataSourceAdapter--InitializeAppViewItems_--_1_--dtor$3.c)
 *     _CSnappedWindowModel::_EnumSnappedWindows_::_1_::dtor$4 @ 0x1806A682E (_CSnappedWindowModel--_EnumSnappedWindows_--_1_--dtor$4.c)
 *     _CSnappedWindowModel::_EnumSnappedWindows_::_1_::dtor$5 @ 0x1806A6840 (_CSnappedWindowModel--_EnumSnappedWindows_--_1_--dtor$5.c)
 *     _CSnapAssistControllerBase::_CollectItemsForSnapAssist_::_1_::dtor$3 @ 0x1806AB95D (_CSnapAssistControllerBase--_CollectItemsForSnapAssist_--_1_--dtor$3.c)
 *     _CSnapAssistControllerBase::_CollectItemsForSnapAssist_::_1_::dtor$4 @ 0x1806AB96F (_CSnapAssistControllerBase--_CollectItemsForSnapAssist_--_1_--dtor$4.c)
 *     _SizeConversionViewInfo::GetPositionerDataForView_::_1_::dtor$1 @ 0x1806AE65E (_SizeConversionViewInfo--GetPositionerDataForView_--_1_--dtor$1.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$6 @ 0x1806AE6EE (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$6.c)
 *     _CVirtualDesktopManager::GetDesktopSwitchIncludeExcludeViews_::_1_::dtor$7 @ 0x1806AE700 (_CVirtualDesktopManager--GetDesktopSwitchIncludeExcludeViews_--_1_--dtor$7.c)
 *     _HolographicPositioner::ControlLost_::_1_::dtor$1 @ 0x1806C1B22 (_HolographicPositioner--ControlLost_--_1_--dtor$1.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$5 @ 0x1806CB03C (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$5.c)
 *     _VirtualDesktopGestureWindow::GetFilterForDesktop_::_1_::dtor$3 @ 0x1806CB0BA (_VirtualDesktopGestureWindow--GetFilterForDesktop_--_1_--dtor$3.c)
 *     _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$5 @ 0x1806CB102 (_VirtualPinnedAppsHandler--PinAppID_--_1_--dtor$5.c)
 *     _VirtualPinnedAppsHandler::PinAppID_::_1_::dtor$6 @ 0x1806CC112 (_VirtualPinnedAppsHandler--PinAppID_--_1_--dtor$6.c)
 *     _VirtualPinnedAppsHandler::SetViewCollectionInternal_::_1_::dtor$2 @ 0x1806CC187 (_VirtualPinnedAppsHandler--SetViewCollectionInternal_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$6 @ 0x1806D1F5A (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806D1F5A.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$7 @ 0x1806D1F6C (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806D1F6C.c)
 * Callees:
 *     <none>
 */

void __fastcall DragAndDropArgs::~DragAndDropArgs(DragAndDropArgs *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
}
