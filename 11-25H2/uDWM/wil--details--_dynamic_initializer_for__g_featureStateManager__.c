/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800026F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180096900 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180118208);
  qword_180118250 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180118258);
  qword_1801182C0 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1801182A0 = 0LL;
  xmmword_1801182B0 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
