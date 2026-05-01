/*
 * XREFs of _anonymous_namespace_::PinConsentPromptManager::PinConsentPromptManager @ 0x1802A163C
 * Callers:
 *     std::make_shared__anonymous_namespace_::PinConsentPromptManager_ @ 0x1802A1574 (std--make_shared__anonymous_namespace_--PinConsentPromptManager_.c)
 * Callees:
 *     ?PinConsentPromptManagerCreated@PinManagerTelemetry@@SAXXZ @ 0x1805E7D50 (-PinConsentPromptManagerCreated@PinManagerTelemetry@@SAXXZ.c)
 */

_QWORD *__fastcall anonymous_namespace_::PinConsentPromptManager::PinConsentPromptManager(_QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  PinManagerTelemetry::PinConsentPromptManagerCreated();
  return a1;
}
