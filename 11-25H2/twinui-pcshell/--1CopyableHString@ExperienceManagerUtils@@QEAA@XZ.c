/*
 * XREFs of ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1801DAEB0
 * Callers:
 *     _ExperienceManagerUtils::RaiseReactivatedEvent_::_1_::dtor$1 @ 0x1806A4BD8 (_ExperienceManagerUtils--RaiseReactivatedEvent_--_1_--dtor$1.c)
 *     _CSingleViewShellExperience::OnEventQueued_::_1_::dtor$1 @ 0x1806A4E16 (_CSingleViewShellExperience--OnEventQueued_--_1_--dtor$1.c)
 *     _VirtualDesktop::UpdateDesktopIndex_::_1_::dtor$0 @ 0x1806A59F8 (_VirtualDesktop--UpdateDesktopIndex_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::BuildAdditionalArgsString_::_1_::dtor$13 @ 0x1806A5B45 (_CortanaDesktopExperienceView--BuildAdditionalArgsString_--_1_--dtor$13.c)
 *     _AppViewDataSourceAdapterBase::UpdateDisplayName_::_1_::dtor$1 @ 0x1806A6014 (_AppViewDataSourceAdapterBase--UpdateDisplayName_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::OnViewEvent_::_1_::dtor$0 @ 0x1806A6110 (_CortanaDesktopExperienceView--OnViewEvent_--_1_--dtor$0.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$5 @ 0x1806A7CE0 (_UwpWindowEventDispatcher--UwpWindowActivating_--_1_--dtor$5.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$95 @ 0x1806A7F02 (_UwpWindowEventDispatcher--UwpWindowActivating_--_1_--dtor$95.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppPropertiesChanged_::_1_::dtor$1 @ 0x1806A91BF (_KeyboardHosting--TabTipAdapter--OnInputAppPropertiesChanged_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppPropertiesChanged_::_1_::dtor$2 @ 0x1806A91D1 (_KeyboardHosting--TabTipAdapter--OnInputAppPropertiesChanged_--_1_--dtor$2.c)
 *     _AppViewDataSourceAdapterBase::UpdateAppId_::_1_::dtor$1 @ 0x1806B1AEF (_AppViewDataSourceAdapterBase--UpdateAppId_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::GetActivateArgs_::_1_::dtor$0 @ 0x1806B1B01 (_CortanaDesktopExperienceView--GetActivateArgs_--_1_--dtor$0.c)
 *     _Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault_::_1_::dtor$0 @ 0x1806B1B4F (_Windows--Internal--ShellHelpers--PropertySetHelper--GetStringWithDefault_--_1_--dtor$0.c)
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$9 @ 0x1806B47E1 (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$9.c)
 *     _CortanaDesktopExperienceView::BuildAdditionalArgsString_::_1_::dtor$0 @ 0x1806B8B8C (_CortanaDesktopExperienceView--BuildAdditionalArgsString_--_1_--dtor$0.c)
 *     _UwpWindowEventDispatcher::UwpWindowClearPersistedStateRequested_::_1_::dtor$5 @ 0x1806B8B9E (_UwpWindowEventDispatcher--UwpWindowClearPersistedStateRequested_--_1_--dtor$5.c)
 *     _UwpWindowEventDispatcher::TerminateActivityHost_::_1_::dtor$1 @ 0x1806BA03A (_UwpWindowEventDispatcher--TerminateActivityHost_--_1_--dtor$1.c)
 *     _GamingOverlayExperienceManager::LaunchUriWithForeground_::_1_::dtor$0 @ 0x1806BD589 (_GamingOverlayExperienceManager--LaunchUriWithForeground_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::LaunchUriWithForeground_::_1_::dtor$3 @ 0x1806BD5AD (_GamingOverlayExperienceManager--LaunchUriWithForeground_--_1_--dtor$3.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$6 @ 0x1806BE219 (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$6.c)
 *     _XamlLauncherState::OnCortanaTransitionRequested_::_1_::dtor$1 @ 0x1806BED98 (_XamlLauncherState--OnCortanaTransitionRequested_--_1_--dtor$1.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$8 @ 0x1806C08C7 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$8.c)
 *     __lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator()_::_1_::dtor$1 @ 0x1806C08D9 (__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_--operator()_--_1_--dtor$1.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange_::_1_::dtor$3 @ 0x1806C1874 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--Report_ea_1806C1874.c)
 *     _UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed_::_1_::dtor$1 @ 0x1806C2471 (_UwpWindowEventDispatcher--EnsureDuplicateViewDestroyed_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ExperienceManagerUtils::CopyableHString::~CopyableHString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
