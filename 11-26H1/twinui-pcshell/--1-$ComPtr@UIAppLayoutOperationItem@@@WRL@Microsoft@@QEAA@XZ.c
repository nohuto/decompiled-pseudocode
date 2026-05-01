/*
 * XREFs of ??1?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@QEAA@XZ @ 0x18007376C
 * Callers:
 *     _ActivateApplicationForExperienceWithPropertySet_::_1_::dtor$1 @ 0x1806D08AE (_ActivateApplicationForExperienceWithPropertySet_--_1_--dtor$1.c)
 *     _AppResizeView::CommitResize_::_1_::dtor$1 @ 0x1806D9581 (_AppResizeView--CommitResize_--_1_--dtor$1.c)
 *     _VirtualDesktopTabletModePolicy::TransitionToDesktopMode_::_1_::dtor$1 @ 0x1806E6BD2 (_VirtualDesktopTabletModePolicy--TransitionToDesktopMode_--_1_--dtor$1.c)
 *     _AppResizeView::UpdateDropFeedback_::_1_::dtor$0 @ 0x1806E87EC (_AppResizeView--UpdateDropFeedback_--_1_--dtor$0.c)
 *     _CDesktopPositioner::ControlGained_::_1_::dtor$5 @ 0x1806F34AC (_CDesktopPositioner--ControlGained_--_1_--dtor$5.c)
 *     _TabletModePositionerOperation::SwitchToCustomLayout_::_1_::dtor$1 @ 0x1806F35C9 (_TabletModePositionerOperation--SwitchToCustomLayout_--_1_--dtor$1.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$7 @ 0x1806F35FF (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$7.c)
 *     _TabletModePositioner::ViewRemoved_::_1_::dtor$2 @ 0x1806F36D7 (_TabletModePositioner--ViewRemoved_--_1_--dtor$2.c)
 *     _TabletModeViewManager::StartSwipeHelper_::_1_::dtor$2 @ 0x1806F3743 (_TabletModeViewManager--StartSwipeHelper_--_1_--dtor$2.c)
 *     _TabletModeViewManager::StartSwipeHelper_::_1_::dtor$6 @ 0x1806F3755 (_TabletModeViewManager--StartSwipeHelper_--_1_--dtor$6.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$0 @ 0x1806F37C1 (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$0.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$2 @ 0x1806F37D3 (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$2.c)
 *     _WindowArrangementView::ProcessDrop_::_1_::dtor$2 @ 0x1806F3851 (_WindowArrangementView--ProcessDrop_--_1_--dtor$2.c)
 *     _WindowArrangementView::UpdateDropFeedback_::_1_::dtor$2 @ 0x1806F38AB (_WindowArrangementView--UpdateDropFeedback_--_1_--dtor$2.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$5 @ 0x180705E8B (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::~ComPtr<IAppLayoutOperationItem>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1);
}
