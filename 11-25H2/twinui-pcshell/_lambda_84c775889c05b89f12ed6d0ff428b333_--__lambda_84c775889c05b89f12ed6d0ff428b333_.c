/*
 * XREFs of _lambda_84c775889c05b89f12ed6d0ff428b333_::__lambda_84c775889c05b89f12ed6d0ff428b333_ @ 0x1805BF188
 * Callers:
 *     wil::details::lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___::_lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___ @ 0x1805BF2F8 (wil--details--lambda_call__lambda_84c775889c05b89f12ed6d0ff428b333___--_lambda_call__lambda_84c7.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805C4640 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_84c775889c05b89f12ed6d0ff428b333_::__lambda_84c775889c05b89f12ed6d0ff428b333_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 24);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
}
