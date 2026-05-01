/*
 * XREFs of ??1?$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ @ 0x1802D1D9C
 * Callers:
 *     _GuidedSnapAssistControl::GuidedSnapAssistControl_::_1_::dtor$0 @ 0x1806AAAC2 (_GuidedSnapAssistControl--GuidedSnapAssistControl_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchConnectionHandler_::_1_::dtor$1 @ 0x1806B8317 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--SwitchCo_ea_1806B8317.c)
 *     _NexusPolicyManager::SingletonInitialize_::_1_::dtor$1 @ 0x1806BE108 (_NexusPolicyManager--SingletonInitialize_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubscribeToRemoteSessionExitRequestedEvent_::_1_::dtor$0 @ 0x1806C8A04 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--SubscribeToRemoteS.c)
 *     _CAppThumbnailWindow::SetupFlickScaleFactorAnimations_::_1_::dtor$1 @ 0x1806C8CF5 (_CAppThumbnailWindow--SetupFlickScaleFactorAnimations_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::ActivateProvider_::_1_::dtor$8 @ 0x1806C8D85 (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--Activate_ea_1806C8D85.c)
 *     _CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806C8E52 (_CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent_::_1_::dtor$1 @ 0x1806DB91F (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--SubsribeToTransiti.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$6 @ 0x1806DC21A (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_1806DC21A.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$19 @ 0x1806DC2A7 (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_1806DC2A7.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::ActivateProvider_::_1_::dtor$24 @ 0x1806DC486 (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--Activate_ea_1806DC486.c)
 *     __lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__::_1_::dtor$0 @ 0x1806DC4AA (__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__--_1_--dto.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__const_&__::_1_::dtor$2 @ 0x1806DC4FA (_std--_Global_new_std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_ea_1806DC4FA.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806DC774 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_1806DC774.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$16 @ 0x1806DC848 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_1806DC848.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::enable_shared_from_this<CAppThumbnailWindow>::~enable_shared_from_this<CAppThumbnailWindow>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
