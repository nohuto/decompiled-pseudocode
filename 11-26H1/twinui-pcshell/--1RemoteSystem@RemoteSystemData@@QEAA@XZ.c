/*
 * XREFs of ??1RemoteSystem@RemoteSystemData@@QEAA@XZ @ 0x18061264C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ShowErrorTransitionScreen_::_1_::dtor$10 @ 0x1806D89E3 (_winrt--Windows--Internal--Shell--implementation--ConnectionHandler--ShowErrorTrans_ea_1806D89E3.c)
 *     __lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator()_::_1_::dtor$1 @ 0x180703B42 (__lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_--operator()_--_1_--dtor$1.c)
 *     _RemoteSystemData::RemoteSystem::CreateFromBytes_::_1_::dtor$1 @ 0x180703B66 (_RemoteSystemData--RemoteSystem--CreateFromBytes_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetDataFromFileMappings_::_1_::dtor$1 @ 0x180703C14 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--GetDataFromFile.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateDataForWindow_::_1_::dtor$0 @ 0x180704265 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Up_ea_180704265.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$12 @ 0x180704F41 (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_180704F41.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::ActivateProvider_::_1_::dtor$15 @ 0x180704FAA (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--Activate_ea_180704FAA.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootPhysicalDeviceAccessState::ShowPhysicalDeviceAccessTransitionScreen_::_1_::dtor$8 @ 0x1807050B1 (_winrt--Windows--Internal--Shell--implementation--BootPhysicalDeviceAccessState--Sh_ea_1807050B1.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState::ShowDisconnectingScreen_::_1_::dtor$3 @ 0x18070570E (_winrt--Windows--Internal--Shell--implementation--SwitchDisconnectedState--ShowDisconnectingScre.c)
 *     _winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ShowTransitionScreen_::_1_::dtor$6 @ 0x180705732 (_winrt--Windows--Internal--Shell--implementation--ConnectionStateBase--ShowTransiti_ea_180705732.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RemoteSystemData::RemoteSystem::~RemoteSystem(volatile signed __int32 **this)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(this);
}
