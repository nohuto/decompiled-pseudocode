/*
 * XREFs of ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18022E684
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$2 @ 0x1806A9B03 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$2.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistWithRegions_::_1_::dtor$2 @ 0x1806AEF01 (_CSnapAssistControllerBase--TriggerSnapAssistWithRegions_--_1_--dtor$2.c)
 *     _TouchKeyboardExperienceManager::Show_::_1_::dtor$1 @ 0x1806B31B2 (_TouchKeyboardExperienceManager--Show_--_1_--dtor$1.c)
 *     _CSnapAssistControllerBase::StartGuidedSnapAssist_::_1_::dtor$0 @ 0x1806B71C4 (_CSnapAssistControllerBase--StartGuidedSnapAssist_--_1_--dtor$0.c)
 *     _CSnapAssistControllerBase::TriggerSnapAssistFromApplicationArrangedNotification_::_1_::dtor$3 @ 0x1806B81F1 (_CSnapAssistControllerBase--TriggerSnapAssistFromApplicationArrangedNotification_--_1_--dtor$3.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$2 @ 0x1806CB018 (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$2.c)
 *     _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$3 @ 0x1806CFE76 (_CShellSnapComponent--OnWindowArrangementEvent_--_1_--dtor$3.c)
 *     _CShellSnapComponent::OnWindowArrangementEvent_::_1_::dtor$4 @ 0x1806CFE88 (_CShellSnapComponent--OnWindowArrangementEvent_--_1_--dtor$4.c)
 *     _SnapLayoutHelpers::GetOtherColumns_::_1_::dtor$0 @ 0x1806D03C8 (_SnapLayoutHelpers--GetOtherColumns_--_1_--dtor$0.c)
 *     _SnapFlyoutHost::GetGuidedSnapAssistRegions_::_1_::dtor$0 @ 0x1806D12A0 (_SnapFlyoutHost--GetGuidedSnapAssistRegions_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow_::_1_::dtor$0 @ 0x1806D224B (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--SnapW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<tagRECT>::~vector<tagRECT>(__int64 a1)
{
  std::vector<Geometry::CRect>::_Tidy(a1);
}
