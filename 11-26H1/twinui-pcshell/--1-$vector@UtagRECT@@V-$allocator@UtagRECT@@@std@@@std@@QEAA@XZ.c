/*
 * XREFs of ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800281C0
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide_::_1_::dtor$2 @ 0x1806CCCA6 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedHide_--_1_--dtor$2.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$2 @ 0x1806CD307 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$2.c)
 *     _TouchKeyboardExperienceManager::Show_::_1_::dtor$1 @ 0x1806DA5D9 (_TouchKeyboardExperienceManager--Show_--_1_--dtor$1.c)
 *     _CSnapAssistControllerBase::StartGuidedSnapAssist_::_1_::dtor$0 @ 0x1806DE3AA (_CSnapAssistControllerBase--StartGuidedSnapAssist_--_1_--dtor$0.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromApplicationArrangedNotification_::_1_::dtor$3 @ 0x1806DF432 (_CSnapAssistControllerBase--TriggerSnapAssistFromApplicationArrangedNotification_--_1_--dtor$3.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$2 @ 0x1806F356F (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$2.c)
 *     _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$3 @ 0x1806F86F8 (_CShellSnapComponent--OnWindowArrangementEvent_--_1_--dtor$3.c)
 *     _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$4 @ 0x1806F870A (_CShellSnapComponent--OnWindowArrangementEvent_--_1_--dtor$4.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistWithRegions_::_1_::dtor$2 @ 0x1806F8969 (_CSnapAssistControllerBase--TriggerSnapAssistWithRegions_--_1_--dtor$2.c)
 *     _SnapLayoutHelpers::GetOtherColumns_::_1_::dtor$0 @ 0x1806F8BD7 (_SnapLayoutHelpers--GetOtherColumns_--_1_--dtor$0.c)
 *     _SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor$0 @ 0x1806F9443 (_SnapFlyoutHost--GetGuidedSnapAssistRegions_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow_::_1_::dtor$0 @ 0x1806FA1C6 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--SnapW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<tagRECT>::~vector<tagRECT>(__int64 a1)
{
  return std::vector<Geometry::CRect>::_Tidy(a1);
}
