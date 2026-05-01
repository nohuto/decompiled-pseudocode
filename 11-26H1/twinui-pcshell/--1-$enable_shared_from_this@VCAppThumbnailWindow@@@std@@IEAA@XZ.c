/*
 * XREFs of ??1?$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ @ 0x1802C8A2C
 * Callers:
 *     _GuidedSnapAssistControl::GuidedSnapAssistControl_::_1_::dtor$0 @ 0x1806D36C9 (_GuidedSnapAssistControl--GuidedSnapAssistControl_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchConnectionHandler_::_1_::dtor$1 @ 0x1806DF5C0 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--SwitchCo_ea_1806DF5C0.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent_::_1_::dtor$1 @ 0x1806E5DD7 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--SubsribeToTransiti.c)
 *     _CAppThumbnailWindow::SetupFlickScaleFactorAnimations_::_1_::dtor$1 @ 0x1806F0C35 (_CAppThumbnailWindow--SetupFlickScaleFactorAnimations_--_1_--dtor$1.c)
 *     _CAppThumbnailWindow::StartMinimizeGestureOperation_::_1_::dtor$1 @ 0x1806F0CD7 (_CAppThumbnailWindow--StartMinimizeGestureOperation_--_1_--dtor$1.c)
 *     _CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F0D1F (_CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubscribeToRemoteSessionExitRequestedEvent_::_1_::dtor$0 @ 0x180704634 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--SubscribeToRemoteS.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$6 @ 0x180704F0B (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_180704F0B.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::ActivateProvider_::_1_::dtor$19 @ 0x180704F86 (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--ActivatePr_ea_180704F86.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::ActivateProvider_::_1_::dtor$8 @ 0x1807050E7 (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--Activate_ea_1807050E7.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::ActivateProvider_::_1_::dtor$23 @ 0x1807050F9 (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--Activate_ea_1807050F9.c)
 *     _std::_Global_new_std::_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__void___lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__const_&__::_1_::dtor$2 @ 0x18070512F (_std--_Global_new_std--_Func_impl_no_alloc__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_ea_18070512F.c)
 *     __lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_::_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__::_1_::dtor$0 @ 0x180705199 (__lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c_--_lambda_8a1a6f7e31ca71a276b23a1eaf1a2e5c__--_1_--dto.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$11 @ 0x1807053CA (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_1807053CA.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$16 @ 0x18070549E (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_18070549E.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801C8264 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::enable_shared_from_this<CAppThumbnailWindow>::~enable_shared_from_this<CAppThumbnailWindow>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
