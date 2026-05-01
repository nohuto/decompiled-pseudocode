/*
 * XREFs of std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_ @ 0x1802A9E48
 * Callers:
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$8 @ 0x1806D44DF (_StartupAppMonitor--StartMonitor_--_1_--dtor$8.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinManager_::_1_::dtor$1 @ 0x1806DF2B6 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinManager_--_1_--dtor$1.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E52BB (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_--_1_--d.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806E533F (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCo_ea_1806E533F.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x1806E53D5 (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCo_ea_1806E53D5.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806E557B (_GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeC_ea_1806E557B.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806E55FF (_GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeC_ea_1806E55FF.c)
 *     _winrt::Windows::Foundation::DeferralCompletedHandler::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe____::_1_::dtor$0 @ 0x1806E7B3F (_winrt--Windows--Foundation--DeferralCompletedHandler--DeferralCompletedHandler__lambda_d0c95642.c)
 *     _StartupAppMonitor::RegKeyCallback_::_1_::dtor$1 @ 0x1806F0C23 (_StartupAppMonitor--RegKeyCallback_--_1_--dtor$1.c)
 *     _StartupAppMonitor::ParentRegKeyCallback_::_1_::dtor$2 @ 0x1806F7044 (_StartupAppMonitor--ParentRegKeyCallback_--_1_--dtor$2.c)
 *     _GuidedSnapAssistControl::CancelIfActive_::_1_::dtor$2 @ 0x1806FA25B (_GuidedSnapAssistControl--CancelIfActive_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
