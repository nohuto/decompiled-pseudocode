/*
 * XREFs of ??1?$com_ptr@UIApplicationView@@@winrt@@QEAA@XZ @ 0x180228704
 * Callers:
 *     _SnapInteraction::InteractionTracker::OnApplicationViewChanged_::_1_::dtor$0 @ 0x1806A55B3 (_SnapInteraction--InteractionTracker--OnApplicationViewChanged_--_1_--dtor$0.c)
 *     _SnapInteraction::SendTelemetryAsync_::_1_::dtor$0 @ 0x1806B1E15 (_SnapInteraction--SendTelemetryAsync_--_1_--dtor$0.c)
 *     _std::_Insertion_sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0____::_1_::dtor$0 @ 0x1806B1FBF (_std--_Insertion_sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d6.c)
 *     __lambda_507ae1b140dd0534ced08e530f119204_::operator()_::_1_::dtor$1 @ 0x1806CED5F (__lambda_507ae1b140dd0534ced08e530f119204_--operator()_--_1_--dtor$1.c)
 *     _SnapInteraction::SendTelemetryAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1806D0203 (_SnapInteraction--SendTelemetryAsync$_InitCoro$2_--_1_--dtor$1.c)
 *     _SnapInteraction::InteractionTracker::WindowSnapStateChanged_::_1_::dtor$0 @ 0x1806D02BA (_SnapInteraction--InteractionTracker--WindowSnapStateChanged_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::AssociateAppWindowWithRemoteVirtualDesktop_::_1_::dtor$1 @ 0x1806D1DF6 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--AssociateAppWindowWit.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$10 @ 0x1806D1F7E (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806D1F7E.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SetForegroundToLastRegistedProviderWindow_::_1_::dtor$4 @ 0x1806DCA4F (_winrt--Windows--Internal--Shell--implementation--SwitchConnectStateBase--SetForegroundToLastReg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::com_ptr<IApplicationView>::~com_ptr<IApplicationView>(__int64 *a1)
{
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(a1);
}
