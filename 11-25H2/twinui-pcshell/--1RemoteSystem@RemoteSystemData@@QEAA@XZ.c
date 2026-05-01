/*
 * XREFs of ??1RemoteSystem@RemoteSystemData@@QEAA@XZ @ 0x1805EDB6C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::ConnectionHandler::ShowErrorTransitionScreen_::_1_::dtor$10 @ 0x1806B14C7 (_winrt--Windows--Internal--Shell--implementation--ConnectionHandler--ShowErrorTransitionScreen_-.c)
 *     __lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator()_::_1_::dtor$1 @ 0x1806DAD59 (__lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_--operator()_--_1_--dtor$1.c)
 *     _RemoteSystemData::RemoteSystem::CreateFromBytes_::_1_::dtor$1 @ 0x1806DAD7D (_RemoteSystemData--RemoteSystem--CreateFromBytes_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetDataFromFileMappings_::_1_::dtor$1 @ 0x1806DAE2B (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Ge_ea_1806DAE2B.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$34 @ 0x1806DB0A7 (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivateProvider_--_1_-.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateDataForWindow_::_1_::dtor$0 @ 0x1806DB4AA (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--UpdateDataForWi.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$12 @ 0x1806DC250 (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_1806DC250.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootPhysicalDeviceAccessState::ShowPhysicalDeviceAccessTransitionScreen_::_1_::dtor$8 @ 0x1806DC408 (_winrt--Windows--Internal--Shell--implementation--BootPhysicalDeviceAccessState--Sh_ea_1806DC408.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::ActivateProvider_::_1_::dtor$15 @ 0x1806DC474 (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--Activate_ea_1806DC474.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState::ShowDisconnectingScreen_::_1_::dtor$3 @ 0x1806DCA61 (_winrt--Windows--Internal--Shell--implementation--SwitchDisconnectedState--ShowDisconnectingScre.c)
 *     _winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ShowTransitionScreen_::_1_::dtor$6 @ 0x1806DCA85 (_winrt--Windows--Internal--Shell--implementation--ConnectionStateBase--ShowTransiti_ea_1806DCA85.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RemoteSystemData::RemoteSystem::~RemoteSystem(volatile signed __int32 **this)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(this);
}
