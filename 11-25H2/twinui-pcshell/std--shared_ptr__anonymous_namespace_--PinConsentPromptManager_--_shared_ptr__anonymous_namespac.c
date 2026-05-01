/*
 * XREFs of std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_ @ 0x1802B218C
 * Callers:
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$3 @ 0x1806AAE18 (_StartupAppMonitor--StartMonitor_--_1_--dtor$3.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$8 @ 0x1806AAE3C (_StartupAppMonitor--StartMonitor_--_1_--dtor$8.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinManager_::_1_::dtor$1 @ 0x1806B7F53 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinManager_--_1_--dtor$1.c)
 *     _winrt::Windows::Foundation::DeferralCompletedHandler::DeferralCompletedHandler__lambda_d0c95642d1e5d46a3e78810cc56b3dbe____::_1_::dtor$0 @ 0x1806BFC88 (_winrt--Windows--Foundation--DeferralCompletedHandler--DeferralCompletedHandler__lambda_d0c95642.c)
 *     _StartupAppMonitor::RegKeyCallback_::_1_::dtor$1 @ 0x1806C8CD1 (_StartupAppMonitor--RegKeyCallback_--_1_--dtor$1.c)
 *     _StartupAppMonitor::ParentRegKeyCallback_::_1_::dtor$2 @ 0x1806CE898 (_StartupAppMonitor--ParentRegKeyCallback_--_1_--dtor$2.c)
 *     _GuidedSnapAssistControl::CancelIfActive_::_1_::dtor$2 @ 0x1806D22E0 (_GuidedSnapAssistControl--CancelIfActive_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
