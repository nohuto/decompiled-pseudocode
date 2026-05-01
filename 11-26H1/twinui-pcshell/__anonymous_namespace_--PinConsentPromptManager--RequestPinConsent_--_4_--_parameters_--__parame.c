/*
 * XREFs of __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::__parameters_ @ 0x1802277F0
 * Callers:
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_::_1_::dtor$2 @ 0x1806E554B (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_--_1_--dtor$2.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old_::_1_::dtor$2 @ 0x1806E57CD (_GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old_--_1_--dtor$2.c)
 *     _GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old_::_1_::dtor$2 @ 0x1806E58CB (_GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old_--_1_--dtor$2.c)
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_1_::dtor$2 @ 0x1806FE7AB (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::__parameters_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
