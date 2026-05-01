/*
 * XREFs of ??1?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@QEAA@XZ @ 0x1802235C0
 * Callers:
 *     _ActivateApplicationForExperienceWithPropertySet_::_1_::dtor$1 @ 0x1806A5A76 (_ActivateApplicationForExperienceWithPropertySet_--_1_--dtor$1.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$3 @ 0x1806B1DF1 (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$3.c)
 *     _VirtualDesktopTabletModePolicy::TransitionToDesktopMode_::_1_::dtor$1 @ 0x1806BED74 (_VirtualDesktopTabletModePolicy--TransitionToDesktopMode_--_1_--dtor$1.c)
 *     _AppResizeView::UpdateDropFeedback_::_1_::dtor$0 @ 0x1806C07C8 (_AppResizeView--UpdateDropFeedback_--_1_--dtor$0.c)
 *     _CDesktopPositioner::ControlGained_::_1_::dtor$5 @ 0x1806CAF55 (_CDesktopPositioner--ControlGained_--_1_--dtor$5.c)
 *     _TabletModePositionerOperation::SwitchToCustomLayout_::_1_::dtor$1 @ 0x1806CB060 (_TabletModePositionerOperation--SwitchToCustomLayout_--_1_--dtor$1.c)
 *     _TabletModePositioner::ApplyLayoutOperationHelper_::_1_::dtor$7 @ 0x1806CB096 (_TabletModePositioner--ApplyLayoutOperationHelper_--_1_--dtor$7.c)
 *     _TabletModePositioner::ViewRemoved_::_1_::dtor$2 @ 0x1806CB16E (_TabletModePositioner--ViewRemoved_--_1_--dtor$2.c)
 *     _TabletModeViewManager::StartSwipeHelper_::_1_::dtor$2 @ 0x1806CB1DA (_TabletModeViewManager--StartSwipeHelper_--_1_--dtor$2.c)
 *     _TabletModeViewManager::StartSwipeHelper_::_1_::dtor$6 @ 0x1806CB1EC (_TabletModeViewManager--StartSwipeHelper_--_1_--dtor$6.c)
 *     _AppResizeView::CommitResize_::_1_::dtor$1 @ 0x1806CB246 (_AppResizeView--CommitResize_--_1_--dtor$1.c)
 *     _WindowArrangementView::AddTempAppVisualsToLayoutOperation_::_1_::dtor$2 @ 0x1806CB258 (_WindowArrangementView--AddTempAppVisualsToLayoutOperation_--_1_--dtor$2.c)
 *     _WindowArrangementView::ProcessDrop_::_1_::dtor$2 @ 0x1806CB2E8 (_WindowArrangementView--ProcessDrop_--_1_--dtor$2.c)
 *     _WindowArrangementView::UpdateDropFeedback_::_1_::dtor$2 @ 0x1806CB330 (_WindowArrangementView--UpdateDropFeedback_--_1_--dtor$2.c)
 *     _CBackupLocationManager::CreateTombstoneLnk_::_1_::dtor$5 @ 0x1806DD240 (_CBackupLocationManager--CreateTombstoneLnk_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::~ComPtr<IAppLayoutOperationItem>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(a1);
}
