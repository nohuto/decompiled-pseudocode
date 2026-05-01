/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1801E0A80
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1801E0AE8 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1808D6230);
  qword_1808D6278 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1808D6280);
  qword_1808D62E8 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1808D62C8 = 0LL;
  xmmword_1808D62D8 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
