/*
 * XREFs of ??1?$com_ptr@UIApplicationView@@@winrt@@QEAA@XZ @ 0x1800E26C0
 * Callers:
 *     _SnapInteraction::InteractionTracker::OnApplicationViewChanged_::_1_::dtor$0 @ 0x1806CE315 (_SnapInteraction--InteractionTracker--OnApplicationViewChanged_--_1_--dtor$0.c)
 *     _SnapInteraction::SendTelemetryAsync_::_1_::dtor$0 @ 0x1806D3509 (_SnapInteraction--SendTelemetryAsync_--_1_--dtor$0.c)
 *     _SnapInteraction::SendTelemetryAsync_::_1_::dtor$2 @ 0x1806D358A (_SnapInteraction--SendTelemetryAsync_--_1_--dtor$2.c)
 *     _std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0____::_1_::dtor$0 @ 0x1806D9788 (_std--_Insertion_sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d6.c)
 *     __lambda_1ac48a6b3b3cf435c7174fb01e7933ad_::operator()_::_1_::dtor$1 @ 0x1806F7494 (__lambda_1ac48a6b3b3cf435c7174fb01e7933ad_--operator()_--_1_--dtor$1.c)
 *     _SnapInteraction::InteractionTracker::WindowSnapStateChanged_::_1_::dtor$0 @ 0x1806F8AC9 (_SnapInteraction--InteractionTracker--WindowSnapStateChanged_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::AssociateAppWindowWithRemoteVirtualDesktop_::_1_::dtor$1 @ 0x1806F9D9F (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--Associat_ea_1806F9D9F.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$10 @ 0x1806F9EF1 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806F9EF1.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SetForegroundToLastRegistedProviderWindow_::_1_::dtor$4 @ 0x1807056FC (_winrt--Windows--Internal--Shell--implementation--SwitchConnectStateBase--SetForegroundToLastReg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::com_ptr<IApplicationView>::~com_ptr<IApplicationView>(_QWORD *a1)
{
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(a1);
}
