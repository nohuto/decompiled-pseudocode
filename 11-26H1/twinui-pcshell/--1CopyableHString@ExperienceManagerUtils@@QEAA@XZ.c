/*
 * XREFs of ??1CopyableHString@ExperienceManagerUtils@@QEAA@XZ @ 0x1801D08E4
 * Callers:
 *     _CSingleViewShellExperience::OnEventQueued_::_1_::dtor$1 @ 0x1806CCDC8 (_CSingleViewShellExperience--OnEventQueued_--_1_--dtor$1.c)
 *     _ExperienceManagerUtils::RaiseReactivatedEvent_::_1_::dtor$1 @ 0x1806CDE83 (_ExperienceManagerUtils--RaiseReactivatedEvent_--_1_--dtor$1.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$5 @ 0x1806CE64A (_UwpWindowEventDispatcher--UwpWindowActivating_--_1_--dtor$5.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$95 @ 0x1806CE81B (_UwpWindowEventDispatcher--UwpWindowActivating_--_1_--dtor$95.c)
 *     _VirtualDesktop::UpdateDesktopIndex_::_1_::dtor$0 @ 0x1806CE9A5 (_VirtualDesktop--UpdateDesktopIndex_--_1_--dtor$0.c)
 *     _AppViewDataSourceAdapterBase::UpdateDisplayName_::_1_::dtor$1 @ 0x1806CEA95 (_AppViewDataSourceAdapterBase--UpdateDisplayName_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::BuildAdditionalArgsString_::_1_::dtor$13 @ 0x1806CEB76 (_CortanaDesktopExperienceView--BuildAdditionalArgsString_--_1_--dtor$13.c)
 *     _PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk_::_1_::dtor$2 @ 0x1806D282A (_PenWorkspace--Discover--RecentAppsCache--SaveDataToDisk_--_1_--dtor$2.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppPropertiesChanged_::_1_::dtor$1 @ 0x1806D5ECB (_KeyboardHosting--TabTipAdapter--OnInputAppPropertiesChanged_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppPropertiesChanged_::_1_::dtor$2 @ 0x1806D5EDD (_KeyboardHosting--TabTipAdapter--OnInputAppPropertiesChanged_--_1_--dtor$2.c)
 *     _CortanaDesktopExperienceView::GetActivateArgs_::_1_::dtor$0 @ 0x1806D713D (_CortanaDesktopExperienceView--GetActivateArgs_--_1_--dtor$0.c)
 *     _Windows::Internal::ShellHelpers::PropertySetHelper::GetStringWithDefault_::_1_::dtor$0 @ 0x1806D718B (_Windows--Internal--ShellHelpers--PropertySetHelper--GetStringWithDefault_--_1_--dtor$0.c)
 *     _AppViewDataSourceAdapterBase::UpdateAppId_::_1_::dtor$1 @ 0x1806D944E (_AppViewDataSourceAdapterBase--UpdateAppId_--_1_--dtor$1.c)
 *     _CControlCenterExperienceManager::CControlCenterExperienceManager_::_1_::dtor$9 @ 0x1806DB891 (_CControlCenterExperienceManager--CControlCenterExperienceManager_--_1_--dtor$9.c)
 *     _CortanaDesktopExperienceView::BuildAdditionalArgsString_::_1_::dtor$0 @ 0x1806DFC56 (_CortanaDesktopExperienceView--BuildAdditionalArgsString_--_1_--dtor$0.c)
 *     _UwpWindowEventDispatcher::UwpWindowClearPersistedStateRequested_::_1_::dtor$5 @ 0x1806DFC68 (_UwpWindowEventDispatcher--UwpWindowClearPersistedStateRequested_--_1_--dtor$5.c)
 *     _UwpWindowEventDispatcher::TerminateActivityHost_::_1_::dtor$1 @ 0x1806E10C4 (_UwpWindowEventDispatcher--TerminateActivityHost_--_1_--dtor$1.c)
 *     _GamingOverlayExperienceManager::LaunchUriWithForeground_::_1_::dtor$0 @ 0x1806E4C62 (_GamingOverlayExperienceManager--LaunchUriWithForeground_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::LaunchUriWithForeground_::_1_::dtor$3 @ 0x1806E4C86 (_GamingOverlayExperienceManager--LaunchUriWithForeground_--_1_--dtor$3.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$6 @ 0x1806E5F0C (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$6.c)
 *     _XamlLauncherState::OnCortanaTransitionRequested_::_1_::dtor$1 @ 0x1806E6BF6 (_XamlLauncherState--OnCortanaTransitionRequested_--_1_--dtor$1.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$8 @ 0x1806E88D5 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$8.c)
 *     __lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_::operator()_::_1_::dtor$1 @ 0x1806E88E7 (__lambda_6f5c8d202924fda7a69e2b5dcc1ebd4e_--operator()_--_1_--dtor$1.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange_::_1_::dtor$3 @ 0x1806E9802 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--Report_ea_1806E9802.c)
 *     _UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed_::_1_::dtor$1 @ 0x1806EA358 (_UwpWindowEventDispatcher--EnsureDuplicateViewDestroyed_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ExperienceManagerUtils::CopyableHString::~CopyableHString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
