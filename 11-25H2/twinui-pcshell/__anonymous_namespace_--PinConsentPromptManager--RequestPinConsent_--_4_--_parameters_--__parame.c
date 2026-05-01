/*
 * XREFs of __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::__parameters_ @ 0x180235A00
 * Callers:
 *     __anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_InitCoro$2_::_1_::dtor$1 @ 0x1806D638A (__anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_InitCoro$2_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent_::_4_::_parameters_::__parameters_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
