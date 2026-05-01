/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1801EB220
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1801EB280 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180896160);
  qword_1808961A8 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1808961B0);
  qword_180896218 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1808961F8 = 0LL;
  xmmword_180896208 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
